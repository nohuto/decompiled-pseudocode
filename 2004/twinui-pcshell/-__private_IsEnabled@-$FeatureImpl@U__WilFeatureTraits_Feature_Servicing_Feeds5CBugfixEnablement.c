/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650@@@details@wil@@QEAA_NXZ @ 0x1800E0878
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E0614 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DFA70 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E02D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_3231565.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
