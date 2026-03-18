/*
 * XREFs of PopWakeInfoDereference @ 0x1403880B8
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140387EA8 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x140388024 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x140569750 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x140993B9C (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
