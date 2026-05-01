/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes@@@details@wil@@QEAA_NXZ @ 0x1800A4EC4
 * Callers:
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18000FFB8 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A45CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_S_ea_1800A45CC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A4B44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColum.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_SingleColumnFixes>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
