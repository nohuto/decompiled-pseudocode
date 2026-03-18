/*
 * XREFs of RtlCreateHashTable @ 0x1403730E0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140677FE4 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x140779D78 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1407A70DC (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140373100 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
