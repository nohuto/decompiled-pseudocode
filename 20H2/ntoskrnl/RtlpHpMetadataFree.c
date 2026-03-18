/*
 * XREFs of RtlpHpMetadataFree @ 0x140308A9C
 * Callers:
 *     RtlpHpLargeFree @ 0x140308734 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x140389164 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140593BB8 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140309288 (RtlpHpMetadataHeapCtxGet.c)
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
