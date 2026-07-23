/*
 * XREFs of _RtlInitStrongEnumerationHashTable@8 @ 0x4B35B220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

BOOLEAN __cdecl RtlInitStrongEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *v3; // [esp+8h] [ebp-Ch]

  RtlpPopulateContext(0);
  *(_QWORD *)(&Enumerator->CurEntry + 1) = 0LL;
  Enumerator->BucketIndex = 0;
  Enumerator->ChainHead = v3;
  Enumerator->HashEntry.Linkage.Flink = v3;
  return 1;
}
