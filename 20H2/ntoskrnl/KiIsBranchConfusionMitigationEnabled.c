/*
 * XREFs of KiIsBranchConfusionMitigationEnabled @ 0x1403F1CA0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationEnabled(_DWORD *a1)
{
  return (*a1 & 0x30008000) == 0x8000;
}
