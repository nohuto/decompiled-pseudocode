/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180030578
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004627C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180046658 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18039C850 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002E0B4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18013CD4C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18039C480 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  int v5; // r15d
  _DWORD *v6; // r14
  volatile signed __int32 *v7; // rdx
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  unsigned int v11; // edi
  _DWORD *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-39h] BYREF
  int v14; // [rsp+58h] [rbp-31h] BYREF
  __int16 v15; // [rsp+5Ch] [rbp-2Dh]
  _BYTE v16[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v17[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+80h] [rbp-9h]
  unsigned int v19; // [rsp+88h] [rbp-1h]
  __int64 v20; // [rsp+8Ch] [rbp+3h]
  int v21; // [rsp+94h] [rbp+Bh]
  __int128 v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]

  v2 = *a1;
  v4 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v13 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::GetCachedFeatureEnabledState(
                       a1,
                       v16);
    v2 = v13;
  }
  v5 = v4;
  v6 = a1 + 2;
  v14 = 5;
  BYTE4(v13) = 3;
  v15 = WORD2(v13);
  v7 = (volatile signed __int32 *)(a1 + 2);
  v8 = v4 ^ 1;
  LODWORD(v13) = 3;
  v9 = (v2 >> 9) & 1;
  v10 = (v2 >> 8) & 1;
  v11 = 4 * v8 + 2;
  v12 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v17, v7, v11, 0);
  v22 = *(_OWORD *)v12;
  v23 = *((_QWORD *)v12 + 2);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(6353283LL, v11, 1LL, v6);
    if ( v10 )
    {
      v18 = 0LL;
      v20 = 0LL;
      v19 = v11;
      v21 = v9;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(6353283LL, v11, 1LL);
    }
  }
  else if ( v10 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0x60F183u, v11, v9);
  }
  if ( !(_DWORD)v23 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x60F183u,
        (const struct FEATURE_LOGGED_TRAITS *)&v14,
        0LL,
        v5,
        (const enum wil_ReportingKind *)&v13,
        0LL,
        0,
        1uLL);
  }
}
