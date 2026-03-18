/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140767730
 * Callers:
 *     PnpResizeTargetDeviceBlock @ 0x140766100 (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x1407663DC (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x140766640 (PnpCompileDeviceInstancePaths.c)
 *     PnpSetTargetDeviceRemove @ 0x14076729C (PnpSetTargetDeviceRemove.c)
 *     IopAllocateRelationList @ 0x140767538 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140767594 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1407676B0 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140810CB4 (PnpQueuePendingSurpriseRemoval.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14095E4BC (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 i; // r8
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePool2(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
