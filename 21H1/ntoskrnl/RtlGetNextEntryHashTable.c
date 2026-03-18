/*
 * XREFs of RtlGetNextEntryHashTable @ 0x1402F5530
 * Callers:
 *     SepRmReferenceFindCap @ 0x140592294 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140678288 (SepFindMatchingCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1406785C4 (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x140920028 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1409208EC (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // r10

  Flink = Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
  if ( Flink->Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
    do
    {
      result = v4;
      if ( v4->Signature )
        break;
      Flink = &v4->Linkage;
      v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v4->Linkage.Flink;
    }
    while ( v4 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = Flink;
  return result;
}
