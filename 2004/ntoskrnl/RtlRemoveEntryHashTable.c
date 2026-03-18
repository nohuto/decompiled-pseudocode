/*
 * XREFs of RtlRemoveEntryHashTable @ 0x14032AD10
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14032AAEC (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140697B98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140697CDC (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1409216E4 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140921C3C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140922808 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140269790 (RtlpPopulateContext.c)
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
