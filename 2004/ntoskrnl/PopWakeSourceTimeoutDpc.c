/*
 * XREFs of PopWakeSourceTimeoutDpc @ 0x14038B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
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
