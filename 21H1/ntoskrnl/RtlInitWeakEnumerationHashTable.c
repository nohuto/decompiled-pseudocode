/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x140583030
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x1403166B0 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
