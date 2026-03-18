/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140339EF0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140339CCC (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405EE7DC (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x140920434 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x14092098C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140921790 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140339490 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  Flink = Entry->Linkage.Flink;
  Blink = Entry->Linkage.Blink;
  if ( Entry->Linkage.Flink == Blink )
  {
    --HashTable->NonEmptyBuckets;
    Blink = Entry->Linkage.Blink;
    Flink = Entry->Linkage.Flink;
  }
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Blink != Entry || (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, (__int64)Context, Signature);
  return 1;
}
