/*
 * XREFs of ?OnSceneFrameTick@CSceneWorld@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x180208BE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E8FF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 */

__int64 __fastcall CSceneWorld::OnSceneFrameTick(CSceneWorld *this, struct ISpectreRenderer *a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialCompositionLabel>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SpatialCompositionLabel>::GetImpl'::`2'::impl,
    0,
    a3);
  return 0LL;
}
