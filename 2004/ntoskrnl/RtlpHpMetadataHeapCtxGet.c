/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1402DB094
 * Callers:
 *     RtlpHpMetadataFree @ 0x1402DA8A8 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1402DAF5C (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140379930 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403C7AE4 (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14025A6D4 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1)
{
  void *HeapManager; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v6);
  v2 = 2LL;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 2u )
    v2 = (unsigned __int8)v4;
  return (__int64)HeapManager + 16 * v2 + 14488;
}
