/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAA_NXZ @ 0x1800DD090
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DD3A0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D5DC8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D709C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LivePreviewForTabs@@@details@wil@@QEAAX_N.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LivePreviewForTabs>::ReportUsage(a1, v2, v3);
  return v2;
}
