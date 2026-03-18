/*
 * XREFs of ?Feature_GuestAllocMapping__private_IsEnabledPreCheck@@YAHXZ @ 0x1C000C224
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?RemoveMappedGuestAlloc@DXGGLOBAL@@SA_NPEAVDXGPROCESS@@PEAX1@Z @ 0x1C030C1B0 (-RemoveMappedGuestAlloc@DXGGLOBAL@@SA_NPEAVDXGPROCESS@@PEAX1@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C000C314 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
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
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v2,
      0LL,
      0,
      1uLL);
  return 1LL;
}
