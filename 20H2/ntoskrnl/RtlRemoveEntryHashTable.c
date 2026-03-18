/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1402E1F90
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1402E1FEC (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14068D2A0 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x14092773C (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140927C94 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140928868 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1402E3690 (RtlpPopulateContext.c)
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
    RtlpPopulateContext(HashTable, Context, Signature);
  return 1;
}
