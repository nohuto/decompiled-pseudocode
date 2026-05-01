/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800301F0
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x180026C78 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800312E0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180046B14 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800634E0 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0001@@@Z @ 0x18015DA40 (-SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0001@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180165F38 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpl_ea_180165F38.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180165FF4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpl_ea_180165FF4.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002D8C4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18011872C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180126468 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppr.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // edi
  int v7; // edx
  volatile signed __int32 *v8; // r15
  int v9; // r14d
  int v10; // esi
  unsigned int v11; // ebx
  _DWORD *v12; // rax
  unsigned __int8 v13; // dl
  int v14; // [rsp+50h] [rbp-49h] BYREF
  char v15; // [rsp+54h] [rbp-45h]
  __int64 v16; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v19; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+8Ch] [rbp-Dh]
  int v22; // [rsp+94h] [rbp-5h]
  __int128 v23; // [rsp+98h] [rbp-1h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  v3 = *a1;
  v5 = a3;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState(
                       a1,
                       v17);
    v3 = v16;
  }
  v7 = v5;
  v15 = 3;
  LODWORD(v16) = v5;
  v14 = 0;
  v8 = a1 + 2;
  v9 = (v3 >> 9) & 1;
  v10 = (v3 >> 8) & 1;
  if ( (_DWORD)v16 )
  {
    switch ( v7 )
    {
      case 1:
        v11 = 4 * (v6 ^ 1);
        break;
      case 2:
        v11 = 4 * (v6 ^ 1) + 1;
        break;
      case 3:
        v11 = 4 * (v6 ^ 1) + 2;
        break;
      case 4:
        v11 = 4 * (v6 ^ 1) + 3;
        break;
      case 5:
        v11 = 2 * (v6 ^ 1) + 8;
        break;
      case 6:
        v11 = 2 * (v6 ^ 1) + 9;
        break;
      default:
        v13 = v7 - 100;
        if ( v13 > 0x31u )
          v11 = 255;
        else
          v11 = v13 + (v6 != 0 ? 100 : 150);
        break;
    }
    v12 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v18, v8, v11, 0);
    v23 = *(_OWORD *)v12;
    v24 = *((_QWORD *)v12 + 2);
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(783899LL, v11, 1LL, v8);
      if ( v10 )
      {
        v19 = 0LL;
        v21 = 0LL;
        v20 = v11;
        v22 = v9;
        ((void (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(
          783899LL,
          v11,
          1LL,
          0LL,
          &v19);
      }
    }
    else if ( v10 && v11 != 254 )
    {
      wil_RtlStagingConfig_RecordFeatureUsage(0xBF61Bu, v11, v9);
    }
    if ( !(_DWORD)v24 )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xBF61Bu,
          (const struct FEATURE_LOGGED_TRAITS *)&v14,
          0LL,
          v6,
          (const enum wil_ReportingKind *)&v16,
          0LL,
          0,
          1uLL);
    }
  }
}
