/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180016FFC
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000E2B0 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E3A4 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800173EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@d.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v4; // r8d
  int v6; // esi
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v4 = v7;
  }
  LODWORD(v8) = 2;
  BYTE4(v8) = 3;
  if ( (_BYTE)v3 )
    wil_details_FeatureReporting_ReportUsageToService(
      a1 + 2,
      0xF81202u,
      (v4 >> 8) & 1,
      (v4 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)va,
      v6,
      v3);
}
