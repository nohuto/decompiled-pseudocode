/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02D18C8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02CBE84 (DpiFdoStopAdapter.c)
 * Callees:
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027E80 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0121730 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01219AC (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // r14d
  __int16 v4; // ax
  void (__fastcall *v5)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2368) )
  {
    KeWaitForSingleObject(DeviceExtension + 4464, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1161] )
    {
      Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
    }
    else
    {
      Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
      v4 = *((_WORD *)DeviceExtension + 2369);
      if ( v4 == 2 || v4 == 3 )
      {
        v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 595);
        if ( v5 )
          v5(*((_QWORD *)DeviceExtension + 593));
      }
    }
    memset(DeviceExtension + 4736, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 4464), 0);
  }
  return 0LL;
}
