/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@SA_NXZ @ 0x180214BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180215404 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@details@wil@.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
