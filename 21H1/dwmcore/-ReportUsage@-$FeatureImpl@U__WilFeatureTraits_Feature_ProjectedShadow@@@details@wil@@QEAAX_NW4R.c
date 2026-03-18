/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180091078
 * Callers:
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x18008E4E8 (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??0CDrawingContext@@AEAA@XZ @ 0x180090C80 (--0CDrawingContext@@AEAA@XZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007DCEC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180084F98 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@detail.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
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
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)(a1 + 2),
    0xA45513u,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v6,
    v3);
}
