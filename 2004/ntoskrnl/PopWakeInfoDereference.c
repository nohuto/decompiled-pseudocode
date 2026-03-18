/*
 * XREFs of PopWakeInfoDereference @ 0x140389028
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140388E18 (PopTimeoutWakeTracking.c)
 *     PopDereferenceWakeInfos @ 0x140388F94 (PopDereferenceWakeInfos.c)
 *     PopUpdateWakeSourceWorker @ 0x140569DA0 (PopUpdateWakeSourceWorker.c)
 *     PopNewWakeInfo @ 0x1409951DC (PopNewWakeInfo.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
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
