/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800B3EAC
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18034E388 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803494C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementF.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034F850 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@.c)
 */

bool __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::__private_IsEnabled(
        __int64 a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  int v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  LOBYTE(v3) = v2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture>::ReportUsage(a1, v3);
  return v2;
}
