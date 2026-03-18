/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1405870A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x1402E1500 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
