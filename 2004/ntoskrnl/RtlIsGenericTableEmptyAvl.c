/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140201B30
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405D1B14 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x14072CBB4 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
