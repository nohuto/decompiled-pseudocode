/*
 * XREFs of PnpAllocateCriticalMemory @ 0x14073947C
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x1407324EC (PiProcessQueryAndCancelRemoval.c)
 *     PnpResizeTargetDeviceBlock @ 0x1407379FC (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140737ADC (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x140737DE4 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140738360 (PnpCompileDeviceInstancePaths.c)
 *     PnpSetTargetDeviceRemove @ 0x140738FD4 (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x14073928C (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1407392E8 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140739400 (PiEventAllocateVetoBuffer.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
