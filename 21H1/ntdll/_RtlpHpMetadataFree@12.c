/*
 * XREFs of _RtlpHpMetadataFree@12 @ 0x4B379479
 * Callers:
 *     _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B (_RtlpHpPerHeapStackTraceCleanup@12.c)
 *     _RtlpHpStackDbFreeRoutine@8 @ 0x4B36DC70 (_RtlpHpStackDbFreeRoutine@8.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 *     _RtlpHpStackTraceAllocRemove@8 @ 0x4B36E197 (_RtlpHpStackTraceAllocRemove@8.c)
 *     _RtlpHpStackTraceEtwCallback@36 @ 0x4B36E340 (_RtlpHpStackTraceEtwCallback@36.c)
 *     _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50 (_RtlpHpTagContextAllocateTag@16.c)
 *     _RtlpHpTagRunOnceInit@12 @ 0x4B370670 (_RtlpHpTagRunOnceInit@12.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpLargeAllocationDestroy@8 @ 0x4B37A2B4 (_RtlpHpLargeAllocationDestroy@8.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 * Callees:
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 */

int __stdcall RtlpHpMetadataFree(int a1, int a2)
{
  _DWORD **v2; // eax
  int v3; // ecx

  v2 = (_DWORD **)RtlpHpMetadataHeapCtxGet(a1, a2);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0, 0);
}
