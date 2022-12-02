/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#pragma once

#include <app/util/basic-types.h>

namespace chip {
namespace app {
namespace Clusters {

namespace Identify {
static constexpr ClusterId Id = 0x00000003;
} // namespace Identify
namespace Groups {
static constexpr ClusterId Id = 0x00000004;
} // namespace Groups
namespace Scenes {
static constexpr ClusterId Id = 0x00000005;
} // namespace Scenes
namespace OnOff {
static constexpr ClusterId Id = 0x00000006;
} // namespace OnOff
namespace OnOffSwitchConfiguration {
static constexpr ClusterId Id = 0x00000007;
} // namespace OnOffSwitchConfiguration
namespace LevelControl {
static constexpr ClusterId Id = 0x00000008;
} // namespace LevelControl
namespace BinaryInputBasic {
static constexpr ClusterId Id = 0x0000000F;
} // namespace BinaryInputBasic
namespace PulseWidthModulation {
static constexpr ClusterId Id = 0x0000001C;
} // namespace PulseWidthModulation
namespace Descriptor {
static constexpr ClusterId Id = 0x0000001D;
} // namespace Descriptor
namespace Binding {
static constexpr ClusterId Id = 0x0000001E;
} // namespace Binding
namespace AccessControl {
static constexpr ClusterId Id = 0x0000001F;
} // namespace AccessControl
namespace Actions {
static constexpr ClusterId Id = 0x00000025;
} // namespace Actions
namespace Basic {
static constexpr ClusterId Id = 0x00000028;
} // namespace Basic
namespace OtaSoftwareUpdateProvider {
static constexpr ClusterId Id = 0x00000029;
} // namespace OtaSoftwareUpdateProvider
namespace OtaSoftwareUpdateRequestor {
static constexpr ClusterId Id = 0x0000002A;
} // namespace OtaSoftwareUpdateRequestor
namespace LocalizationConfiguration {
static constexpr ClusterId Id = 0x0000002B;
} // namespace LocalizationConfiguration
namespace TimeFormatLocalization {
static constexpr ClusterId Id = 0x0000002C;
} // namespace TimeFormatLocalization
namespace UnitLocalization {
static constexpr ClusterId Id = 0x0000002D;
} // namespace UnitLocalization
namespace PowerSourceConfiguration {
static constexpr ClusterId Id = 0x0000002E;
} // namespace PowerSourceConfiguration
namespace PowerSource {
static constexpr ClusterId Id = 0x0000002F;
} // namespace PowerSource
namespace GeneralCommissioning {
static constexpr ClusterId Id = 0x00000030;
} // namespace GeneralCommissioning
namespace NetworkCommissioning {
static constexpr ClusterId Id = 0x00000031;
} // namespace NetworkCommissioning
namespace DiagnosticLogs {
static constexpr ClusterId Id = 0x00000032;
} // namespace DiagnosticLogs
namespace GeneralDiagnostics {
static constexpr ClusterId Id = 0x00000033;
} // namespace GeneralDiagnostics
namespace SoftwareDiagnostics {
static constexpr ClusterId Id = 0x00000034;
} // namespace SoftwareDiagnostics
namespace ThreadNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000035;
} // namespace ThreadNetworkDiagnostics
namespace WiFiNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000036;
} // namespace WiFiNetworkDiagnostics
namespace EthernetNetworkDiagnostics {
static constexpr ClusterId Id = 0x00000037;
} // namespace EthernetNetworkDiagnostics
namespace TimeSynchronization {
static constexpr ClusterId Id = 0x00000038;
} // namespace TimeSynchronization
namespace BridgedDeviceBasic {
static constexpr ClusterId Id = 0x00000039;
} // namespace BridgedDeviceBasic
namespace Switch {
static constexpr ClusterId Id = 0x0000003B;
} // namespace Switch
namespace AdministratorCommissioning {
static constexpr ClusterId Id = 0x0000003C;
} // namespace AdministratorCommissioning
namespace OperationalCredentials {
static constexpr ClusterId Id = 0x0000003E;
} // namespace OperationalCredentials
namespace GroupKeyManagement {
static constexpr ClusterId Id = 0x0000003F;
} // namespace GroupKeyManagement
namespace FixedLabel {
static constexpr ClusterId Id = 0x00000040;
} // namespace FixedLabel
namespace UserLabel {
static constexpr ClusterId Id = 0x00000041;
} // namespace UserLabel
namespace ProxyConfiguration {
static constexpr ClusterId Id = 0x00000042;
} // namespace ProxyConfiguration
namespace ProxyDiscovery {
static constexpr ClusterId Id = 0x00000043;
} // namespace ProxyDiscovery
namespace ProxyValid {
static constexpr ClusterId Id = 0x00000044;
} // namespace ProxyValid
namespace BooleanState {
static constexpr ClusterId Id = 0x00000045;
} // namespace BooleanState
namespace ModeSelect {
static constexpr ClusterId Id = 0x00000050;
} // namespace ModeSelect
namespace DoorLock {
static constexpr ClusterId Id = 0x00000101;
} // namespace DoorLock
namespace WindowCovering {
static constexpr ClusterId Id = 0x00000102;
} // namespace WindowCovering
namespace BarrierControl {
static constexpr ClusterId Id = 0x00000103;
} // namespace BarrierControl
namespace PumpConfigurationAndControl {
static constexpr ClusterId Id = 0x00000200;
} // namespace PumpConfigurationAndControl
namespace Thermostat {
static constexpr ClusterId Id = 0x00000201;
} // namespace Thermostat
namespace FanControl {
static constexpr ClusterId Id = 0x00000202;
} // namespace FanControl
namespace ThermostatUserInterfaceConfiguration {
static constexpr ClusterId Id = 0x00000204;
} // namespace ThermostatUserInterfaceConfiguration
namespace ColorControl {
static constexpr ClusterId Id = 0x00000300;
} // namespace ColorControl
namespace BallastConfiguration {
static constexpr ClusterId Id = 0x00000301;
} // namespace BallastConfiguration
namespace IlluminanceMeasurement {
static constexpr ClusterId Id = 0x00000400;
} // namespace IlluminanceMeasurement
namespace TemperatureMeasurement {
static constexpr ClusterId Id = 0x00000402;
} // namespace TemperatureMeasurement
namespace PressureMeasurement {
static constexpr ClusterId Id = 0x00000403;
} // namespace PressureMeasurement
namespace FlowMeasurement {
static constexpr ClusterId Id = 0x00000404;
} // namespace FlowMeasurement
namespace RelativeHumidityMeasurement {
static constexpr ClusterId Id = 0x00000405;
} // namespace RelativeHumidityMeasurement
namespace OccupancySensing {
static constexpr ClusterId Id = 0x00000406;
} // namespace OccupancySensing
namespace WakeOnLan {
static constexpr ClusterId Id = 0x00000503;
} // namespace WakeOnLan
namespace Channel {
static constexpr ClusterId Id = 0x00000504;
} // namespace Channel
namespace TargetNavigator {
static constexpr ClusterId Id = 0x00000505;
} // namespace TargetNavigator
namespace MediaPlayback {
static constexpr ClusterId Id = 0x00000506;
} // namespace MediaPlayback
namespace MediaInput {
static constexpr ClusterId Id = 0x00000507;
} // namespace MediaInput
namespace LowPower {
static constexpr ClusterId Id = 0x00000508;
} // namespace LowPower
namespace KeypadInput {
static constexpr ClusterId Id = 0x00000509;
} // namespace KeypadInput
namespace ContentLauncher {
static constexpr ClusterId Id = 0x0000050A;
} // namespace ContentLauncher
namespace AudioOutput {
static constexpr ClusterId Id = 0x0000050B;
} // namespace AudioOutput
namespace ApplicationLauncher {
static constexpr ClusterId Id = 0x0000050C;
} // namespace ApplicationLauncher
namespace ApplicationBasic {
static constexpr ClusterId Id = 0x0000050D;
} // namespace ApplicationBasic
namespace AccountLogin {
static constexpr ClusterId Id = 0x0000050E;
} // namespace AccountLogin
namespace ElectricalMeasurement {
static constexpr ClusterId Id = 0x00000B04;
} // namespace ElectricalMeasurement
namespace ClientMonitoring {
static constexpr ClusterId Id = 0x00001046;
} // namespace ClientMonitoring
namespace UnitTesting {
static constexpr ClusterId Id = 0xFFF1FC05;
} // namespace UnitTesting
namespace FaultInjection {
static constexpr ClusterId Id = 0xFFF1FC06;
} // namespace FaultInjection

} // namespace Clusters
} // namespace app
} // namespace chip
