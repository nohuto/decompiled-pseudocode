/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@QEAA_NXZ @ 0x180097654
 * Callers:
 *     ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98 (-GetWindowsSearchBoxWidth@@YAH_N0@Z.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180096714 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSear.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009747C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::ReportUsage(a1, v2, v3);
  return v2;
}
