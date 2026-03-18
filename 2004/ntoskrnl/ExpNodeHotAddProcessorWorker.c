/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x1409527C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     PsQuitNextPartition @ 0x14057EE90 (PsQuitNextPartition.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406F9878 (KeSynchronizeWithDynamicProcessors.c)
 *     ExpWorkQueueManagerStart @ 0x1407AFEA4 (ExpWorkQueueManagerStart.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  void *NextPartition; // rax
  int v5; // r8d
  void *v6; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v2);
    v6 = NextPartition;
    if ( !NextPartition )
      break;
    v3 = ExpWorkQueueManagerStart(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextPartition + 2) + 16LL) + 8LL * *(unsigned __int16 *)(a1 + 146)),
           *(unsigned __int16 *)(a1 + 146),
           v5);
    v2 = v6;
    if ( v3 < 0 )
    {
      PsQuitNextPartition(v6);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *(_QWORD *)(a1 + 384) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 384), DelayedWorkQueue);
      return;
    }
  }
}
