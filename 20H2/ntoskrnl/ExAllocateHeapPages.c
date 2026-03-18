/*
 * XREFs of ExAllocateHeapPages @ 0x1403754B4
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x14025E1A8 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x1403750AC (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1405B1D5C (ExGetBigPoolInfo.c)
 *     ExInitializePoolTracker @ 0x140A6B6BC (ExInitializePoolTracker.c)
 * Callees:
 *     ExGetHeapFromType @ 0x1402605DC (ExGetHeapFromType.c)
 *     RtlpHpSegAlloc @ 0x1402CC910 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1403092CC (RtlpHpAllocateHeap.c)
 */

__int64 ExAllocateHeapPages()
{
  __int64 HeapFromType; // rax
  int v1; // r8d
  __int16 v2; // r9
  unsigned __int64 v3; // r10
  unsigned int v5; // [rsp+20h] [rbp-18h]

  HeapFromType = ExGetHeapFromType(512, 0x80000000, 0);
  if ( v3 >= *(unsigned int *)(HeapFromType + 464) )
    return RtlpHpAllocateHeap(HeapFromType, v3, v1, v2);
  else
    return RtlpHpSegAlloc(
             HeapFromType + 256 + (*(unsigned int *)(HeapFromType + 272) < v3 ? 0xC0 : 0),
             v3,
             v3,
             v3,
             v1 & v5);
}
