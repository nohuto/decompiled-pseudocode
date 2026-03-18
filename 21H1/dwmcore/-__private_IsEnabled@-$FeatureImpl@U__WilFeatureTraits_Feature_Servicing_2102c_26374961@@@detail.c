/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@QEAA_NXZ @ 0x1800E8368
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E7D0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E82E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@Q.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::ReportUsage(a1, v2, v3);
  return v2;
}
