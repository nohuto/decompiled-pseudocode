/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x180008110
 * Callers:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlpHpTaggableHeap @ 0x180007BC4 (RtlpHpTaggableHeap.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpStackLoggingEnabled @ 0x180024820 (RtlpHpStackLoggingEnabled.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpHpMetadataHeapCtxGet(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = 2LL;
  v2 = *a1 >> 8;
  if ( (unsigned __int8)v2 < 2u )
    v1 = (unsigned __int8)v2;
  return (char *)&unk_1801714D8 + 16 * v1;
}
