/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode@@@details@wil@@QEAA_NXZ @ 0x1800BC424
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180411EEC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BBE2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BC25C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedApp.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
