/*
 * XREFs of ExAllocateHeapPages @ 0x140372DF8
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x1403349A8 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x1403729F0 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1405AE1FC (ExGetBigPoolInfo.c)
 *     ExInitializePoolTracker @ 0x140A643EC (ExInitializePoolTracker.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x140256D60 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1402DB0D8 (RtlpHpAllocateHeap.c)
 *     ExGetHeapFromType @ 0x14033663C (ExGetHeapFromType.c)
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
