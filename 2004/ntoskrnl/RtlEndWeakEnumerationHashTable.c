/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x140583740
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x14032AD70 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
