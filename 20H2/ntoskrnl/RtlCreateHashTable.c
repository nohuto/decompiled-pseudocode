/*
 * XREFs of RtlCreateHashTable @ 0x1403765B0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14068DC14 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078A788 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1407A943C (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1403765D0 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
