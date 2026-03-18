/*
 * XREFs of _dynamic_initializer_for__CPreComputeContext::s_depthSortingEnabled__ @ 0x180001350
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180100030 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wi.c)
 */

__int64 dynamic_initializer_for__CPreComputeContext::s_depthSortingEnabled__()
{
  __int64 result; // rax

  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl);
  CPreComputeContext::s_depthSortingEnabled = 0;
  return result;
}
