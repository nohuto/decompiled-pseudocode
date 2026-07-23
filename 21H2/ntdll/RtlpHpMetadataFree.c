/*
 * XREFs of RtlpHpMetadataFree @ 0x180005968
 * Callers:
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpTagContextAllocateTag @ 0x180005664 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180005A80 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180108570 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180108850 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x180108980 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180108AA8 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180108E5C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180109130 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010E7D0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _QWORD *v2; // rax
  int v3; // r10d
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0, 0LL);
}
