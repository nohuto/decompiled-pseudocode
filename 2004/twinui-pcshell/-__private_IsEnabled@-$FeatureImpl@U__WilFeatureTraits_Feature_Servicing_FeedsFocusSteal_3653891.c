/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911@@@details@wil@@QEAA_NXZ @ 0x1800A789C
 * Callers:
 *     ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@TwinUI@@@Z @ 0x1800A74D0 (-Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@T.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A4830 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusStea.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A7088 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911@@@deta.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_36538911>::ReportUsage(a1, v2, v3);
  return v2;
}
