/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936@@@details@wil@@QEAA_NXZ @ 0x1800E08F8
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF80C (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DFC78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnregisterBack.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E03E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeeds.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33778936>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
