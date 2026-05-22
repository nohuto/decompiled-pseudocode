/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputVirtualization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180102130
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800461D0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputVirtualiza.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003E9C8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputVirtualization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180045F70 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputVirtualization@@@de.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputVirtualization>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  unsigned int v3; // r8d
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v3 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputVirtualization>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v5);
    v3 = v5;
  }
  BYTE4(v6) = 3;
  LODWORD(v6) = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)a1 + 8,
    0xF89686u,
    (v3 >> 8) & 1,
    (v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    1,
    0);
}
