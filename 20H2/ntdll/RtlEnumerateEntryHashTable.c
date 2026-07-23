/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x180067850
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800F5ED0 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x180067990 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *ChainHead; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY **v6; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Blink; // r8
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rax

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  if ( BucketIndex >= HashTable->TableSize )
    return 0LL;
  while ( 1 )
  {
    if ( BucketIndex == v3->BucketIndex )
    {
      ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v3->ChainHead;
      v6 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY **)v3;
    }
    else
    {
      ChainHead = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)RtlpGetChainHead(v4, BucketIndex);
      v6 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY **)ChainHead;
    }
    Flink = *v6;
    if ( Flink != ChainHead )
      break;
LABEL_5:
    if ( ++BucketIndex >= v4->TableSize )
      return 0LL;
  }
  while ( !Flink->Signature )
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink;
    if ( Flink == ChainHead )
      goto LABEL_5;
  }
  v9 = v3->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v3->HashEntry.Linkage.Flink->Blink != v3 )
    goto LABEL_18;
  Blink = v3->HashEntry.Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != v3 )
    goto LABEL_18;
  Blink->Flink = v9;
  v9->Blink = Blink;
  v11 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v3->ChainHead;
  if ( v11 != ChainHead )
  {
    if ( (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v11->Linkage.Flink == v11 )
      --v4->NonEmptyBuckets;
    if ( (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead->Linkage.Flink == ChainHead )
      ++v4->NonEmptyBuckets;
  }
  v3->BucketIndex = BucketIndex;
  v3->ChainHead = &ChainHead->Linkage;
  v12 = Flink->Linkage.Flink;
  if ( (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink->Blink != Flink )
LABEL_18:
    __fastfail(3u);
  v3->HashEntry.Linkage.Flink = v12;
  v3->HashEntry.Linkage.Blink = &Flink->Linkage;
  v12->Blink = &v3->HashEntry.Linkage;
  result = Flink;
  Flink->Linkage.Flink = &v3->HashEntry.Linkage;
  return result;
}
