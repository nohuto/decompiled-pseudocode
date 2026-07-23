/*
 * XREFs of _RtlGetNextEntryHashTable@8 @ 0x4B35B170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  _LIST_ENTRY *PrevLinkage; // eax
  _LIST_ENTRY *Flink; // edi
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v4; // edx
  _LIST_ENTRY *v5; // ecx

  PrevLinkage = Context->PrevLinkage;
  Flink = PrevLinkage->Flink;
  v4 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)PrevLinkage->Flink->Flink;
  if ( v4 == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Context->ChainHead )
    return 0;
  if ( HashTable->NumEnumerators )
  {
    v5 = PrevLinkage->Flink->Flink;
    do
    {
      v4 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v5;
      if ( v5[1].Flink )
        break;
      Flink = v5;
      v5 = v5->Flink;
    }
    while ( v5 != Context->ChainHead );
  }
  if ( v4->Signature != Context->Signature )
    return 0;
  Context->PrevLinkage = Flink;
  return v4;
}
