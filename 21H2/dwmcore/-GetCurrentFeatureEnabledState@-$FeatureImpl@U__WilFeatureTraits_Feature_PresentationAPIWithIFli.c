/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIWithIFlip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180248C30
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIWithIFlip@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802488EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationAPIWithIFlip.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180029A7C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SVR_PresentAt_PresentationHandler@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180248FA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SVR_PresentAt_PresentationHandler@@@detai.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationAPIWithIFlip>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // r9d
  int v7; // r8d
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x19A48AC,
                                        0LL,
                                        a3,
                                        a4);
  v6 = 0;
  *a2 = 0LL;
  v7 = (32 * (FeatureEnabledState & 3)) | ((FeatureEnabledState & 0x40) != 0 ? 0x200 : 0) | ((FeatureEnabledState & 0x80) != 0
                                                                                           ? 0x100
                                                                                           : 0);
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    if ( (FeatureEnabledState & 0xFFFFFF3F) == 2 )
      v6 = 16;
    v7 |= v6;
  }
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SVR_PresentAt_PresentationHandler>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SVR_PresentAt_PresentationHandler>::GetImpl'::`2'::impl,
      -(FeatureEnabledState & 0x40));
    v7 = *(_DWORD *)a2;
  }
  result = a2;
  *(_DWORD *)a2 = v7 & 0xFFFFFFF7;
  return result;
}
