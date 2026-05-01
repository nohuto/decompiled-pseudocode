/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971@@@details@wil@@QEAA_NXZ @ 0x1800E08B8
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E0614 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800DFB74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E035C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_331.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
