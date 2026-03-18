/*
 * XREFs of _RegisterCDROMNotify@0 @ 0xEC8A8
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxRegisterForDeviceClassNotifications@0 @ 0xED552 (_xxxRegisterForDeviceClassNotifications@0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = _gpWin32kDriverObject;
  if ( _gpWin32kDriverObject )
  {
    if ( !gCDROMClassRegistrationEntry )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               _gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0,
               &gCDROMClassRegistrationEntry);
  }
  return result;
}
