/*
 * XREFs of IopIoRingCompleteIrp @ 0x140559FA8
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IopDequeueIrpFromFileObject @ 0x1403476D0 (IopDequeueIrpFromFileObject.c)
 *     IopUpdateIrpTransferCount @ 0x1403488C0 (IopUpdateIrpTransferCount.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     IopCompleteIoRingEntry @ 0x140559E1C (IopCompleteIoRingEntry.c)
 */

void __fastcall IopIoRingCompleteIrp(PIRP Irp, KPRIORITY a2)
{
  PVOID UserApcContext; // rdi
  PEPROCESS RequestorProcess; // rax
  PFILE_OBJECT OriginalFileObject; // rbp
  __int64 v7; // r14

  UserApcContext = Irp->Overlay.AsynchronousParameters.UserApcContext;
  RequestorProcess = IoGetRequestorProcess(Irp);
  OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
  v7 = (__int64)RequestorProcess;
  IopCompleteIoRingEntry((__int64)UserApcContext, (__int64)Irp->UserIosb, &Irp->IoStatus.0, a2);
  ObfDereferenceObjectWithTag(UserApcContext, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  if ( OriginalFileObject )
    OriginalFileObject->FinalStatus = Irp->IoStatus.Status;
  if ( v7 )
    IopUpdateIrpTransferCount((__int64)Irp, v7);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)Irp, (__int64)OriginalFileObject);
  else
    IopDequeueIrpFromThread(Irp);
  IopDropIrp(Irp, (ULONG_PTR)OriginalFileObject);
}
