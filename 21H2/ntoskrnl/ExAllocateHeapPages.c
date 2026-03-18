/*
 * XREFs of ExAllocateHeapPages @ 0x140213318
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExGetBigPoolInfo @ 0x14063A8C0 (ExGetBigPoolInfo.c)
 *     ExInitializePoolTracker @ 0x140B0ABEC (ExInitializePoolTracker.c)
 * Callees:
 *     ExGetHeapFromType @ 0x14021491C (ExGetHeapFromType.c)
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1403713DC (RtlpHpAllocateHeap.c)
 */

__int64 ExAllocateHeapPages()
{
  __int64 HeapFromType; // rax
  int v1; // r8d
  unsigned __int64 v2; // r10
  unsigned int v4; // [rsp+20h] [rbp-18h]

  HeapFromType = ExGetHeapFromType(512LL, 0x80000000LL, 0LL);
  if ( v2 >= *(unsigned int *)(HeapFromType + 528) )
    return RtlpHpAllocateHeap(HeapFromType, v2);
  else
    return RtlpHpSegAlloc(
             HeapFromType + 320 + (*(unsigned int *)(HeapFromType + 336) < v2 ? 0xC0 : 0),
             v2,
             v2,
             v2,
             v1 & v4);
}
