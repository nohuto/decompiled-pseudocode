/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180046A78
 * Callers:
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x180046A54 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x180265C50 (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18002BB08 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180265880 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        char a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LOBYTE(v7) = a3;
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetCachedFeatureEnabledState(
                      a1,
                      &v6);
    v6 = v3;
  }
  v7 = 3;
  LODWORD(v8) = 1;
  BYTE4(v8) = 0;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (__int64)(a1 + 2),
                       0xFB294Cu,
                       ((unsigned int)v3 >> 8) & 1,
                       ((unsigned int)v3 >> 9) & 1,
                       4 * (v5 ^ 1u) + 2,
                       0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xFB294Cu,
        (const struct FEATURE_LOGGED_TRAITS *)va,
        0LL,
        v5,
        (const enum wil_ReportingKind *)&v7,
        0LL,
        0,
        1uLL);
  }
}
