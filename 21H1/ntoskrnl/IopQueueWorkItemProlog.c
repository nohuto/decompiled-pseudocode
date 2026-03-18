/*
 * XREFs of IopQueueWorkItemProlog @ 0x14025B18C
 * Callers:
 *     IoQueueWorkItem @ 0x140304FA0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x140304FD0 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036B264 (PnpDeviceCompletionRequestDestroy.c)
 *     IoTryQueueWorkItem @ 0x140379C70 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1405016E0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14025A200 (PsGetWorkOnBehalfThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     IopIsActivityTracingEnabled @ 0x14025B27C (IopIsActivityTracingEnabled.c)
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
