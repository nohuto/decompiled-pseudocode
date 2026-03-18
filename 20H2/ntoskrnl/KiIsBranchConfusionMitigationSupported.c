/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1403F1CBC
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1403F1D28 (KiIsKvaShadowNeededForBranchConfusion.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F1EB0 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _DWORD *a2)
{
  return (*a2 & 4) != 0 && !(unsigned int)KiIsHyperVCr3RspErrataPresent();
}
