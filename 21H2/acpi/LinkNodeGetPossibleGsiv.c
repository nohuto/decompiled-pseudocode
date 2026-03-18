/*
 * XREFs of LinkNodeGetPossibleGsiv @ 0x1C00B5F4C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A974 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009D25C (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeGetPossibleGsiv(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 28) )
    return 3221226021LL;
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 36);
  return 0LL;
}
