/*
 * XREFs of RtlInsertEntryHashTable @ 0x140269700
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140614528 (SepAddLuidToIndexEntry.c)
 *     SepGetCachedHandlesEntry @ 0x140631918 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140631C0C (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140921C3C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140269790 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  v4 = Context;
  v10 = 0LL;
  v11 = 0LL;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, Context);
  }
  else
  {
    RtlpPopulateContext(HashTable, &v10);
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v10;
  }
  if ( v4->ChainHead->Flink == v4->ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = Flink;
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
