/*
 * XREFs of RtlCreateHashTable @ 0x140373EF0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140631758 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14077C188 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14079A10C (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140373F10 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
