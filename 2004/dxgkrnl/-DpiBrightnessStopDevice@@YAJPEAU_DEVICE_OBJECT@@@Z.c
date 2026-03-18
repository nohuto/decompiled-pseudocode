/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02D1540
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02CBAD4 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011F120 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int v3; // r14d
  __int16 v4; // ax
  void (__fastcall *v5)(_QWORD); // rax
  int v7; // [rsp+30h] [rbp-28h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 2368) )
  {
    KeWaitForSingleObject(DeviceExtension + 4464, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1161] )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_reporting,
        0x801B31u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
        1,
        v7);
    }
    else
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_reporting,
        0x801B31u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
        1,
        v7);
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
