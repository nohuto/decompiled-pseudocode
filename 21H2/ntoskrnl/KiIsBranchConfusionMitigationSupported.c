/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x140418BA4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140418C1C (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x140418CD8 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x14041900C (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && !(_BYTE)KiKernelCetEnabled && !(unsigned int)KiIsHyperVCr3RspErrataPresent();
}
