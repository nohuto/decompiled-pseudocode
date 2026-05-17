/*
 * XREFs of _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0 (_RtlpHpStackLoggingEnabled@4.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpHpTaggableHeap@4 @ 0x4B37072D (_RtlpHpTaggableHeap@4.c)
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 * Callees:
 *     <none>
 */

int *__stdcall RtlpHpMetadataHeapCtxGet(__int16 a1, int a2)
{
  int v2; // eax

  if ( HIBYTE(a1) >= 2u )
    v2 = 2;
  else
    v2 = HIBYTE(a1);
  return &dword_4B3A8A10[2 * v2];
}
