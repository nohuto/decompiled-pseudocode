/*
 * XREFs of IopCopyCompleteReadRequest @ 0x1403F1A30
 * Callers:
 *     IopCopyAbortCopyReadRequest @ 0x1403F1680 (IopCopyAbortCopyReadRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F16B0 (IopCopyCompleteReadIrp.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopDropIrp @ 0x1402E9444 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x1402E9538 (IopDequeueIrpFromFileObject.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x140353760 (IopDequeueIrpFromThread.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F112C (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F123C (IopUpdateIrpTransferCount.c)
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F1620 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage.c)
 */

void __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi
  struct _DMA_ADAPTER *UserEvent; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion((__int64)v5);
  IopUpdateIrpTransferCount((__int64)v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  if ( !(unsigned int)Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage() )
    goto LABEL_11;
  UserEvent = (struct _DMA_ADAPTER *)v5->UserEvent;
  if ( UserEvent )
  {
    HalPutDmaAdapter(UserEvent);
LABEL_11:
    v5->UserEvent = 0LL;
  }
  IopDropIrp(v5, v6);
}
