/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x1800A5520
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ @ 0x1800A7858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl) != 0;
}
