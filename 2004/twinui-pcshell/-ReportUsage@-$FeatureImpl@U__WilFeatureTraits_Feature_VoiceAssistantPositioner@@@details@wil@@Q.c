/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C200
 * Callers:
 *     _lambda_a0ee7bb0dcee848556900d8415f399c8_::operator() @ 0x18002FEC4 (_lambda_a0ee7bb0dcee848556900d8415f399c8_--operator().c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800381E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004627C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x180066790 (-TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV-$optional@U.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ @ 0x180093450 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@wil@@SA_NXZ.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801F5408 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803EA7E0 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002E0B4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18013CD4C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18014B0B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  int v5; // r15d
  _DWORD *v6; // r14
  _DWORD *v7; // rdx
  __int64 v8; // rdi
  int v9; // esi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // [rsp+50h] [rbp-39h] BYREF
  char v13; // [rsp+54h] [rbp-35h]
  __int64 v14; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v15[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  __int64 v19; // [rsp+8Ch] [rbp+3h]
  int v20; // [rsp+94h] [rbp+Bh]
  __int128 v21; // [rsp+98h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]

  v2 = *a1;
  v4 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v14 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
                       a1,
                       v15);
    v2 = v14;
  }
  v5 = v4;
  v13 = 3;
  LODWORD(v14) = 3;
  v6 = a1 + 2;
  v12 = 0;
  v7 = a1 + 2;
  v8 = 4 * (v4 ^ 1u) + 2;
  v9 = (v2 >> 9) & 1;
  v10 = (v2 >> 8) & 1;
  v11 = wil_details_FeatureReporting_RecordUsageInCache(v16, v7, v8, 0LL);
  v21 = *(_OWORD *)v11;
  v22 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(20484887LL, (unsigned int)v8, 1LL, v6);
    if ( v10 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = v8;
      v20 = v9;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(
        20484887LL,
        (unsigned int)v8,
        1LL);
    }
  }
  else if ( v10 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0x1389317u, v8, v9);
  }
  if ( !(_DWORD)v22 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x1389317u,
        (const struct FEATURE_LOGGED_TRAITS *)&v12,
        0LL,
        v5,
        (const enum wil_ReportingKind *)&v14,
        0LL,
        0,
        1uLL);
  }
}
