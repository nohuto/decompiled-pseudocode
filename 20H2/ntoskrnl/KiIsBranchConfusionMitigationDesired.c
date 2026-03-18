/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x1403F1C64
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1403F1D28 (KiIsKvaShadowNeededForBranchConfusion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _DWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
