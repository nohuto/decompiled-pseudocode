/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228@@@details@wil@@QEAA_NXZ @ 0x1800EDB24
 * Callers:
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E17D8 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E133C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPISe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ED89C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_338912.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
