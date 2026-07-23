/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x140244300
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140244288 (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140244370 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall EtwpTiAsyncVadQueryEventWrite(int a1, int a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  PWORK_QUEUE_ITEM v7; // rcx
  PWORK_QUEUE_ITEM WorkItem[3]; // [rsp+40h] [rbp-18h] BYREF

  WorkItem[0] = 0LL;
  if ( (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(a1, a2, a3, a4, a5, a6, a7, (__int64)WorkItem) >= 0 )
  {
    v7 = WorkItem[0];
    WorkItem[0]->List.Flink = 0LL;
    v7->WorkerRoutine = (void (__fastcall *)(void *))EtwpTiVadQueryEventWriteCallback;
    v7->Parameter = v7;
    ExQueueWorkItem(v7, DelayedWorkQueue);
  }
}
