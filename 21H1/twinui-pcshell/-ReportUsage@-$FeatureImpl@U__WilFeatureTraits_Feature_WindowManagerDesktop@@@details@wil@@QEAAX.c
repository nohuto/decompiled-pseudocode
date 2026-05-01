/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18012BCB0
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x18009B9E0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180127120 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDe.c)
 *     ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x1801F2420 (-IsFeature_WindowManagerDesktopDisabled@@YA_NXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002C270 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180126AA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@d.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)(a1 + 2),
    0xD5457Bu,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v6,
    v3);
}
