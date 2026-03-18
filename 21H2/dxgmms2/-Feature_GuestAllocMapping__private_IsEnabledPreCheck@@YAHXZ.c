/*
 * XREFs of ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C00027F0
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VidMmUnmapAllocCpuVa@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00DC24C (-VidMmUnmapAllocCpuVa@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0002B14 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 Feature_GuestAllocMapping__private_IsEnabledPreCheck(void)
{
  __int64 v0; // rax
  int v2; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v3[24]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v4; // [rsp+70h] [rbp-28h] BYREF
  __int64 v5; // [rsp+80h] [rbp-18h]

  v2 = 3;
  v0 = wil_details_FeatureReporting_RecordUsageInCache(v3, &Feature_GuestAllocMapping__private_reporting, 6LL);
  v4 = *(_OWORD *)v0;
  v5 = *(_QWORD *)(v0 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(27273916LL, 6LL, 1LL, &Feature_GuestAllocMapping__private_reporting, &v4);
  if ( !(_DWORD)v5 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x1A02ABCu,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_GuestAllocMapping_logged_traits,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v2,
      0LL,
      0,
      1uLL);
  return 1LL;
}
