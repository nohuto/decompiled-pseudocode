/*
 * XREFs of ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x140056A48
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058870 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Microsoft::WRL::Wrappers::HString::GetAddressOf(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return this;
}
