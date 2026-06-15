/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140057980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::GetRuntimeClassName(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs", 0x3Cu, a2);
}
