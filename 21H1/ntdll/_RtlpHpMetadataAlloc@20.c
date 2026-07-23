/*
 * XREFs of _RtlpHpMetadataAlloc@20 @ 0x4B379349
 * Callers:
 *     _RtlpHpPerHeapStackTraceInitialize@12 @ 0x4B36DB70 (_RtlpHpPerHeapStackTraceInitialize@12.c)
 *     _RtlpHpStackDbAllocRoutine@8 @ 0x4B36DC40 (_RtlpHpStackDbAllocRoutine@8.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 *     _RtlpHpStackTraceEtwCallback@36 @ 0x4B36E340 (_RtlpHpStackTraceEtwCallback@36.c)
 *     _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50 (_RtlpHpTagContextAllocateTag@16.c)
 *     _RtlpHpTagRunOnceInit@12 @ 0x4B370670 (_RtlpHpTagRunOnceInit@12.c)
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 * Callees:
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 *     _RtlpHpMetadataHeapStart@12 @ 0x4B3794F4 (_RtlpHpMetadataHeapStart@12.c)
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 */

int __fastcall RtlpHpMetadataAlloc(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD **v9; // [esp+10h] [ebp-10h]

  v5 = 0;
  v9 = (_DWORD **)RtlpHpMetadataHeapCtxGet(a4, a5);
  if ( RtlpHpMetadataHeapStart(a4, 0) >= 0 )
  {
    if ( a3 )
      return RtlpHpSegAlloc(a1, a2, a2 < a1 ? 83886080 : 0x1000000);
    else
      return RtlpHpAllocateHeap(*v9, a1, 0x1000000, 0);
  }
  return v5;
}
