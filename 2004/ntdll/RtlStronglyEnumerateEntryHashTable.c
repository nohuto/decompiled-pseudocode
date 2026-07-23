/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x180067810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x180067880 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  __int64 ChainHead; // rdx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY **Flink; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v7; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  if ( BucketIndex >= HashTable->TableSize )
    return 0LL;
  while ( 1 )
  {
    if ( BucketIndex == v3->BucketIndex )
    {
      Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY **)v3->HashEntry.Linkage.Flink;
      ChainHead = (__int64)v3->ChainHead;
    }
    else
    {
      ChainHead = RtlpGetChainHead(v4, BucketIndex);
      Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY **)ChainHead;
    }
    v7 = *Flink;
    if ( v7 != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_5:
    if ( ++BucketIndex >= v4->TableSize )
      return 0LL;
  }
  while ( !v7->Signature )
  {
    v7 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v7->Linkage.Flink;
    if ( v7 == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_5;
  }
  v3->BucketIndex = BucketIndex;
  result = v7;
  v3->ChainHead = (_LIST_ENTRY *)ChainHead;
  v3->HashEntry.Linkage.Flink = &v7->Linkage;
  return result;
}
