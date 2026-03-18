/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C00317D8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0033288 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0033368 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003E230 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C0041094 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004204C (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0043F70 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0043FF0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044090 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0044230 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044420 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044590 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C00446D4 (Usbh_PnpRemove.c)
 *     UsbhEtwRundown @ 0x1C005C970 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
