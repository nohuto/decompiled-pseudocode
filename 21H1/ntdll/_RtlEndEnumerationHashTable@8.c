/*
 * XREFs of _RtlEndEnumerationHashTable@8 @ 0x4B35AEC0
 * Callers:
 *     _RtlEndWeakEnumerationHashTable@8 @ 0x4B35AF20 (_RtlEndWeakEnumerationHashTable@8.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlEndEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *Flink; // eax
  _LIST_ENTRY *Blink; // esi

  --HashTable->NumEnumerators;
  Flink = Enumerator->HashEntry.Linkage.Flink;
  if ( !IsListEmpty(&Enumerator->HashEntry.Linkage) )
  {
    if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->Blink != Enumerator
      || (Blink = Enumerator->HashEntry.Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    if ( IsListEmpty(Enumerator->ChainHead) )
      --HashTable->NonEmptyBuckets;
  }
  Enumerator->ChainHead = 0;
}
