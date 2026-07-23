/*
 * XREFs of _RtlEnumerateEntryHashTable@8 @ 0x4B35AF30
 * Callers:
 *     _RtlWeaklyEnumerateEntryHashTable@8 @ 0x4B35B3E0 (_RtlWeaklyEnumerateEntryHashTable@8.c)
 * Callees:
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int i; // edi
  _LIST_ENTRY *ChainHead; // edx
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v4; // ecx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // ecx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // eax
  _LIST_ENTRY *v7; // eax
  _LIST_ENTRY *Blink; // ebx
  _LIST_ENTRY *v9; // eax
  _LIST_ENTRY *v10; // eax

  for ( i = Enumerator->BucketIndex; ; ++i )
  {
    if ( i >= HashTable->TableSize )
      return 0;
    if ( i == Enumerator->BucketIndex )
    {
      ChainHead = Enumerator->ChainHead;
      v4 = Enumerator;
    }
    else
    {
      ChainHead = (_LIST_ENTRY *)RtlpGetChainHead(HashTable, i);
      v4 = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
    }
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v4->HashEntry.Linkage.Flink;
    if ( Flink != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    ;
  }
  while ( !Flink->Signature )
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink;
    if ( Flink == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  v7 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator )
    goto LABEL_20;
  Blink = Enumerator->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator )
    goto LABEL_20;
  Blink->Flink = v7;
  v7->Blink = Blink;
  v9 = Enumerator->ChainHead;
  if ( v9 != ChainHead )
  {
    if ( v9->Flink == v9 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = i;
  Enumerator->ChainHead = ChainHead;
  v10 = Flink->Linkage.Flink;
  if ( (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink->Blink != Flink )
LABEL_20:
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v10;
  Enumerator->HashEntry.Linkage.Blink = &Flink->Linkage;
  v10->Blink = &Enumerator->HashEntry.Linkage;
  result = Flink;
  Flink->Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
