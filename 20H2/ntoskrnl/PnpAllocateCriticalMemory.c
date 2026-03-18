/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140742468
 * Callers:
 *     PiProcessQueryAndCancelRemoval @ 0x14072E27C (PiProcessQueryAndCancelRemoval.c)
 *     PnpResizeTargetDeviceBlock @ 0x1407408FC (PnpResizeTargetDeviceBlock.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1407409DC (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x140740CE4 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140741260 (PnpCompileDeviceInstancePaths.c)
 *     PnpSetTargetDeviceRemove @ 0x140741FC0 (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x140742278 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1407422D4 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407423EC (PiEventAllocateVetoBuffer.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
