/*
 * XREFs of _RtlInitWeakEnumerationHashTable@8 @ 0x4B35B260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
