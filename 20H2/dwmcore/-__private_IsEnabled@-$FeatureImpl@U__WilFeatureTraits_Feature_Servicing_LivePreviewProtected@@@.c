/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@QEAA_NXZ @ 0x1800E67A8
 * Callers:
 *     ?IsProtected@CRenderData@@UEBA_NXZ @ 0x1800EA8E0 (-IsProtected@CRenderData@@UEBA_NXZ.c)
 *     ?IsProtected@CCachedVisualImage@@UEBA_NXZ @ 0x18016F750 (-IsProtected@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801773B0 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E64FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewPro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E6724 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LivePreviewProtected@@@details@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LivePreviewProtected>::ReportUsage(a1, v2, v3);
  return v2;
}
