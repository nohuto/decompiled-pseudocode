/*
 * XREFs of ?OnSceneFrameTick@CSceneWorld@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x180253200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18023CAA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 */

__int64 __fastcall CSceneWorld::OnSceneFrameTick(
        CSceneWorld *this,
        struct ISpectreRenderer *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialCompositionLabel>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SpatialCompositionLabel>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  return 0LL;
}
