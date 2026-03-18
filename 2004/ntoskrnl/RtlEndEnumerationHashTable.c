/*
 * XREFs of RtlEndEnumerationHashTable @ 0x14032AD70
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14032AAEC (SepCleanupMarkedForDeletionEntries.c)
 *     RtlEndWeakEnumerationHashTable @ 0x140583740 (RtlEndWeakEnumerationHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140921AC4 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x140922808 (SepRmDestroyCapTable.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlEndEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r8

  --HashTable->NumEnumerators;
  Flink = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink != Enumerator )
  {
    if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->Blink != Enumerator
      || (Blink = Enumerator->HashEntry.Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    if ( Enumerator->ChainHead->Flink == Enumerator->ChainHead )
      --HashTable->NonEmptyBuckets;
  }
  Enumerator->ChainHead = 0LL;
}
