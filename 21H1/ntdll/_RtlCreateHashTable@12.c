/*
 * XREFs of _RtlCreateHashTable@12 @ 0x4B35ADE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateHashTable@16 @ 0x4B35B3EB (_RtlpCreateHashTable@16.c)
 */

BOOLEAN __cdecl RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(Shift, Flags);
}
