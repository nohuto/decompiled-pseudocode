/*
 * XREFs of _RtlStronglyEnumerateEntryHashTable@8 @ 0x4B35B380
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int i; // esi
  _LIST_ENTRY *Flink; // ecx
  _LIST_ENTRY *ChainHead; // edx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v5; // ecx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // eax

  for ( i = Enumerator->BucketIndex; ; ++i )
  {
    if ( i >= HashTable->TableSize )
      return 0;
    if ( i == Enumerator->BucketIndex )
    {
      Flink = Enumerator->HashEntry.Linkage.Flink;
      ChainHead = Enumerator->ChainHead;
    }
    else
    {
      ChainHead = (_LIST_ENTRY *)RtlpGetChainHead(HashTable, i);
      Flink = ChainHead;
    }
    v5 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Flink;
    if ( v5 != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    ;
  }
  while ( !v5->Signature )
  {
    v5 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v5->Linkage.Flink;
    if ( v5 == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  Enumerator->BucketIndex = i;
  result = v5;
  Enumerator->ChainHead = ChainHead;
  Enumerator->HashEntry.Linkage.Flink = &v5->Linkage;
  return result;
}
