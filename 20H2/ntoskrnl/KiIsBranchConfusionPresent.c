/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1403F1CE4
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (KeFeatureBits2 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
