/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668@@@details@wil@@QEAA_NXZ @ 0x1800EDAE4
 * Callers:
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E1CF8 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E1238 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailab.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ED818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHa.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
