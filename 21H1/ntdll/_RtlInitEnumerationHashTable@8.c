/*
 * XREFs of _RtlInitEnumerationHashTable@8 @ 0x4B35B1C0
 * Callers:
 *     _RtlInitWeakEnumerationHashTable@8 @ 0x4B35B260 (_RtlInitWeakEnumerationHashTable@8.c)
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

BOOLEAN __cdecl RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *Flink; // edx
  _LIST_ENTRY *v4; // [esp+4h] [ebp-Ch]

  RtlpPopulateContext(0);
  ++HashTable->NumEnumerators;
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  if ( v4->Flink->Blink != v4 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Enumerator->HashEntry.Linkage.Blink = v4;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0;
  Enumerator->ChainHead = v4;
  return 1;
}
