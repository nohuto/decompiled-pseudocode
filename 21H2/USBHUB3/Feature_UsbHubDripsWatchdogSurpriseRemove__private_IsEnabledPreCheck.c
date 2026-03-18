/*
 * XREFs of Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck @ 0x1C00143E8
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0018CF0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C007C1B0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C0014118 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v5[24]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v6; // [rsp+70h] [rbp-28h] BYREF
  __int64 v7; // [rsp+80h] [rbp-18h]

  v4 = 3;
  v2 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v5, a2, 2);
  v6 = *(_OWORD *)v2;
  v7 = *(_QWORD *)(v2 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      15299626LL,
      2LL,
      1LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove__private_reporting,
      &v6);
  if ( !(_DWORD)v7 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      15299626LL,
      &Feature_UsbHubDripsWatchdogSurpriseRemove_logged_traits,
      0LL,
      1LL,
      &v4,
      0LL,
      0,
      1LL);
  return 1LL;
}
