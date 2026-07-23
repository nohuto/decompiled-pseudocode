/*
 * XREFs of ExAllocateHeapPages @ 0x140375218
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 * Callees:
 *     ExGetHeapFromType @ 0x14021720C (ExGetHeapFromType.c)
 *     RtlpHpAllocateHeap @ 0x1402232D4 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
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
