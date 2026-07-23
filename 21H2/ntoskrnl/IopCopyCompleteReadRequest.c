/*
 * XREFs of IopCopyCompleteReadRequest @ 0x1403F1900
 * Callers:
 *     IopCopyAbortCopyReadRequest @ 0x1403F1550 (IopCopyAbortCopyReadRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14029A888 (IopDequeueIrpFromFileObject.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F105C (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F116C (IopUpdateIrpTransferCount.c)
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F14F0 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage.c)
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
