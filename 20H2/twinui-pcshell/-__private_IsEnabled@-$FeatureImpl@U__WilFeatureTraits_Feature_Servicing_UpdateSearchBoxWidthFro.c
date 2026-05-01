/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800976D4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180096BDC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSea.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009691C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097584 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = (v4 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::ReportUsage(a1, v2, 0);
  return v2;
}
