/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wil@@SA_NXZ @ 0x1802154E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180215D68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@details.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
