/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694
 * Callers:
 *     ?ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1_N@Z @ 0x180012560 (-ComputeCortanaWindowRect@SearchAppDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLAC.c)
 *     ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98 (-GetWindowsSearchBoxWidth@@YAH_N0@Z.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 *     ?_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ @ 0x180099414 (-_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?SetPositioningAnchorRect@SearchAppExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801F6480 (-SetPositioningAnchorRect@SearchAppExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180096818 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEvery.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097500 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIc.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
