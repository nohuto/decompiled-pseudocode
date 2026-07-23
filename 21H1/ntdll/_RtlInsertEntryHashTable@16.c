/*
 * XREFs of _RtlInsertEntryHashTable@16 @ 0x4B35B270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

BOOLEAN __cdecl RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  char *v4; // esi
  _LIST_ENTRY *v5; // eax
  _LIST_ENTRY *Flink; // ecx
  char v8; // [esp+Ch] [ebp-Ch] BYREF

  v4 = (char *)HIDWORD(Signature);
  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  if ( HIDWORD(Signature) )
  {
    if ( !*(_DWORD *)HIDWORD(Signature) )
      RtlpPopulateContext(Signature);
  }
  else
  {
    RtlpPopulateContext(Signature);
    v4 = &v8;
  }
  if ( **(_DWORD **)v4 == *(_DWORD *)v4 )
    ++HashTable->NonEmptyBuckets;
  v5 = (_LIST_ENTRY *)*((_DWORD *)v4 + 1);
  Flink = v5->Flink;
  if ( v5->Flink->Blink != v5 )
    __fastfail(3u);
  Entry->Linkage.Blink = v5;
  Entry->Linkage.Flink = Flink;
  Flink->Blink = &Entry->Linkage;
  v5->Flink = &Entry->Linkage;
  return 1;
}
