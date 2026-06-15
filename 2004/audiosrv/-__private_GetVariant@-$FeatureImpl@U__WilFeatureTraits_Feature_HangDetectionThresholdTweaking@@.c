/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_N@Z @ 0x180064664
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&_::Run @ 0x180069790 (wil--details--functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__-_--Run.c)
 * Callees:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_K@Z @ 0x1800646AC (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@d.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064D84 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::__private_GetVariant(
        __int64 a1)
{
  __int64 v2; // rdx
  char v3; // bl
  __int64 v4; // r8
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState(a1, &v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 10) & 0x3F;
  LOBYTE(v4) = v3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsage(
    a1,
    v2,
    v4,
    2LL);
  return v3;
}
