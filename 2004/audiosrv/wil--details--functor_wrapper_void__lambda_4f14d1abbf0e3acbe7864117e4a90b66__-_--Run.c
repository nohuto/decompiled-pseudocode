/*
 * XREFs of wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&_::Run @ 0x180069790
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@3@_N@Z @ 0x180064664 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064D84 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66____::Run(__int64 a1)
{
  _DWORD **v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v1 = *(_DWORD ***)(a1 + 8);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::__private_GetVariant((__int64)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetImpl'::`2'::impl) == 1 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState(
      (volatile signed __int64 *)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetImpl'::`2'::impl,
      (__int64)&v3);
    **v1 = v4;
  }
  return 0LL;
}
