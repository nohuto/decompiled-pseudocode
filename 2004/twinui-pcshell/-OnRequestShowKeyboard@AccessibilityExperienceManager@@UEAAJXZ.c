/*
 * XREFs of ?OnRequestShowKeyboard@AccessibilityExperienceManager@@UEAAJXZ @ 0x180370A50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803502DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QE.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnRequestShowKeyboard(
        AccessibilityExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetImpl'::`2'::impl,
    0,
    a3);
  return 0LL;
}
