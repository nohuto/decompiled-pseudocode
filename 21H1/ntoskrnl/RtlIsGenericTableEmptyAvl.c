/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1402E5420
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1406A03F4 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x1407232E0 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
