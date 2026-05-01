/*
 * XREFs of CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x180209D70
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18020E068 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802109AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@details@wil@@.c)
 */

char __fastcall CortanaHelpers::AllowCortanaAttractModeAboveLock(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::GetImpl'::`2'::impl,
    a2);
  return 0;
}
