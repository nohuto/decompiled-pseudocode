/*
 * XREFs of PnpAllocateCriticalMemory @ 0x14073963C
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407326AC (PiProcessQueryAndCancelRemoval.c)
 *     PnpResizeTargetDeviceBlock @ 0x140737BBC (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737C9C (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x140737FA4 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140738520 (PnpCompileDeviceInstancePaths.c)
 *     PnpSetTargetDeviceRemove @ 0x140739194 (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x14073944C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1407394A8 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407395C0 (PiEventAllocateVetoBuffer.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateCriticalMemory(int a1, POOL_TYPE a2, SIZE_T a3, ULONG a4)
{
  ULONG i; // r8d
  PVOID result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePoolWithTag(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
