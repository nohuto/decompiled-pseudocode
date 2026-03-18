/*
 * XREFs of ExpSvmDpcRoutine @ 0x1405B3D30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpSvmWorkQueues + 104LL * a2), HyperCriticalWorkQueue);
}
