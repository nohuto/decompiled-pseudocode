/*
 * XREFs of ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C00692D0
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0068CE4 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall OnlyCompositionMetrics(__int64 a1, _WORD *a2)
{
  return !*a2
      && (*(_DWORD *)(a1 + 124) & 0xFFFFFF) == 0
      && (*(_DWORD *)(a1 + 116) & 0xFFFFFF) == 0
      && !*(_WORD *)(a1 + 106)
      && !*(_WORD *)(a1 + 104)
      && (*(_WORD *)(a1 + 110) || *(_WORD *)(a1 + 112) || *(_WORD *)(a1 + 108));
}
