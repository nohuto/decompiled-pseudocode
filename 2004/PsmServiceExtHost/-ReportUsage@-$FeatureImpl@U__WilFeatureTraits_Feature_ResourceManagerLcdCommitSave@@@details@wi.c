/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800388A8
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180038720 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003894C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180038AF4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommit.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsage(
        _DWORD *a1,
        __int64 a2,
        char a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v6; // [rsp+80h] [rbp+30h] BYREF
  __int16 v7; // [rsp+84h] [rbp+34h]
  int v8; // [rsp+90h] [rbp+40h] BYREF
  __int64 v9; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  va_list va1; // [rsp+A0h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LOBYTE(v8) = a3;
  LODWORD(v3) = *a1;
  v5 = (unsigned __int8)a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetCachedFeatureEnabledState(
                      a1,
                      (__int64 *)va);
    v9 = v3;
  }
  v8 = 3;
  BYTE4(v9) = 1;
  v6 = 1;
  v7 = WORD2(v9);
  LODWORD(v9) = 1;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1 + 2,
                       a2,
                       ((unsigned int)v3 >> 8) & 1,
                       ((unsigned int)v3 >> 9) & 1,
                       4 * (v5 ^ 1u) + 2,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFE5BFEu,
        (const struct FEATURE_LOGGED_TRAITS *)&v6,
        0LL,
        v5,
        (const enum wil_ReportingKind *)&v8,
        0LL,
        0,
        1uLL);
  }
}
