/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140732FD8
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14072028C (PiProcessQueryAndCancelRemoval.c)
 *     PnpResizeTargetDeviceBlock @ 0x140731558 (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x140731940 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140731EBC (PnpCompileDeviceInstancePaths.c)
 *     PnpSetTargetDeviceRemove @ 0x140732B30 (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x140732DE8 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140732E44 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140732F5C (PiEventAllocateVetoBuffer.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
