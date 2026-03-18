/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@QEAA_NXZ @ 0x1800EA188
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18004E810 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180095B40 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800B8400 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E93B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EA0C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::ReportUsage(
    a1,
    v2,
    v3);
  return v2;
}
