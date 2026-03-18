/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004B6CC
 * Callers:
 *     ??0CDrawingContext@@AEAA@XZ @ 0x18004B0A8 (--0CDrawingContext@@AEAA@XZ.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x1800511AC (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002D308 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@detail.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800E6260 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  int v6; // esi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v8);
    v5 = v8;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 3;
  return wil::details::ReportUsageToService(a1 + 2, 10769683LL, (v5 >> 8) & 1, (v5 >> 9) & 1, (__int64 *)va, v6, v3);
}
