/*
 * XREFs of RtlpHpMetadataFree @ 0x14035F37C
 * Callers:
 *     RtlpHpLargeFree @ 0x14035F014 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14035F3BC (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x140386034 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14058FA28 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x14035FB68 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  __int128 **v2; // rax
  __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (__int128 **)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0LL);
}
