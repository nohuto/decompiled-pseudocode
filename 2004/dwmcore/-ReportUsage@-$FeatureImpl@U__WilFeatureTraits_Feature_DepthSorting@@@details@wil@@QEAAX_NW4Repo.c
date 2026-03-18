/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1FB4
 * Callers:
 *     ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x180035DAC (--0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180066C70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18006E330 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800742D0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeConte.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800A0330 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCInputSinkContext.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002DF60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@w.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800A352C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
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
    v8 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v8);
    v5 = v8;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 0;
  return wil_details_FeatureReporting_ReportUsageToService(
           a1 + 2,
           13818272LL,
           (v5 >> 8) & 1,
           (v5 >> 9) & 1,
           (__int64 *)va,
           v6,
           v3);
}
