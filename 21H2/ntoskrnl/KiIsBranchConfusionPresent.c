/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1403F31D0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C (KiDetectHardwareSpecControlFeatures.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C79E0 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsSrsoMitigationDesired @ 0x1403F3338 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (KeFeatureBits2 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
