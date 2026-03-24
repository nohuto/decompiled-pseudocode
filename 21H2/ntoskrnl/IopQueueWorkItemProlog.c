/*
 * XREFs of IopQueueWorkItemProlog @ 0x140206670
 * Callers:
 *     IoQueueWorkItem @ 0x1402B63C0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1402B63F0 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036F8E4 (PnpDeviceCompletionRequestDestroy.c)
 *     IoTryQueueWorkItem @ 0x14037C9B0 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x140507180 (IoQueueWorkItemToNode.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x1402055CC (PsGetWorkOnBehalfThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     IopIsActivityTracingEnabled @ 0x1402EDEF0 (IopIsActivityTracingEnabled.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID WorkOnBehalfThread; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( (unsigned __int8)IopIsActivityTracingEnabled()
    && KeGetCurrentIrql() < 2u
    && (Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink) != 0LL )
  {
    *(struct _LIST_ENTRY *)(a1 + 68) = *Flink;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v10);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v10 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
