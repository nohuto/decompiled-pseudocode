/*
 * XREFs of PopWakeSourceTimeoutDpc @ 0x14038A060
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeSourceTimeoutDpc(
        struct _WORK_QUEUE_ITEM *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  Dpc->List.Flink = 0LL;
  Dpc->WorkerRoutine = (void (__fastcall *)(void *))PopWakeSourceTimeoutWorker;
  Dpc->Parameter = &Dpc[-2].WorkerRoutine;
  ExQueueWorkItem(Dpc, DelayedWorkQueue);
}
