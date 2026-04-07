/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x180021870
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C30 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180030C50 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180047D44 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086B84 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800219E0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180021AB0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18007FB10 (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 */

_BOOL8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(
        unsigned int *a1)
{
  unsigned int v2; // edi
  bool v3; // bl
  _DWORD *v4; // r14
  _DWORD *v5; // rdx
  int v6; // r15d
  int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rax
  int v11; // [rsp+50h] [rbp-39h] BYREF
  __int16 v12; // [rsp+54h] [rbp-35h]
  int v13; // [rsp+58h] [rbp-31h] BYREF
  __int16 v14; // [rsp+5Ch] [rbp-2Dh]
  __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v16[8]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h]
  __int64 v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  __int128 v22; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+27h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
    a1,
    &v15);
  v2 = *a1;
  v3 = (v15 & 8) != 0;
  if ( (*a1 & 2) == 0 )
  {
    v15 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCachedFeatureEnabledState(
                       a1,
                       v16);
    v2 = v15;
  }
  LOBYTE(v12) = 2;
  v13 = 0;
  v4 = a1 + 2;
  v14 = v12;
  v5 = a1 + 2;
  v11 = 3;
  v6 = (v2 >> 9) & 1;
  v7 = (v2 >> 8) & 1;
  v8 = 4 * !v3 + 2;
  v9 = wil_details_FeatureReporting_RecordUsageInCache(v17, v5, v8, 0LL);
  v22 = *(_OWORD *)v9;
  v23 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(220937958LL, v8, 1LL, v4, &v22);
    if ( v7 )
    {
      v18 = 0LL;
      v20 = 0;
      v19 = 4 * !v3 + 2;
      v21 = v6;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(220937958LL, v8, 1LL);
    }
  }
  else if ( v7 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0xD2B3EE6u, v8, v6);
  }
  if ( !(_DWORD)v23 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xD2B3EE6u,
      (const struct FEATURE_LOGGED_TRAITS *)&v13,
      0LL,
      v3,
      (const enum wil_ReportingKind *)&v11,
      0LL,
      0,
      1uLL);
  return v3;
}
