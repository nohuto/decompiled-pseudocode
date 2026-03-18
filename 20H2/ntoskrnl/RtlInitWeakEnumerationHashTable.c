/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x1405870C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x1402E1C10 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
