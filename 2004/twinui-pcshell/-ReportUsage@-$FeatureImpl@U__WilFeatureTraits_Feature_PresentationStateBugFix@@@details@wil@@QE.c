/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018A31C
 * Callers:
 *     _lambda_db6d4cb92203a874116970825d9bc39e_::operator() @ 0x1801896DC (_lambda_db6d4cb92203a874116970825d9bc39e_--operator().c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002CA60 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180189D60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  BYTE4(v7) = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)(a1 + 2),
    0x935D3Au,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v5,
    3);
}
