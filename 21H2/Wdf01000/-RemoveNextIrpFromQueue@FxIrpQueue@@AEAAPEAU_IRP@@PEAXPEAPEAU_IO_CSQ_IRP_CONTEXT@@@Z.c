/*
 * XREFs of ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00133A8
 * Callers:
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C001B57C (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0029788 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0011584 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C00133E0 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveNextIrpFromQueue(
        FxIrpQueue *this,
        void *PeekContext,
        _IO_CSQ_IRP_CONTEXT **pCsqContext)
{
  FxIrpQueue *v3; // rbx
  void *v4; // r8
  _IRP *i; // rdx
  _IRP *IrpFromQueue; // rax
  __int64 v8; // r10
  _QWORD *v9; // r11
  _IRP *m_Irp; // r9
  _QWORD *v11; // rax
  FxIrp fxIrp; // [rsp+48h] [rbp+20h] BYREF

  v3 = this;
  v4 = PeekContext;
  for ( i = 0LL; ; i = IrpFromQueue )
  {
    IrpFromQueue = FxIrpQueue::PeekNextIrpFromQueue(this, i, v4);
    fxIrp.m_Irp = IrpFromQueue;
    if ( !IrpFromQueue )
      return 0LL;
    this = v3;
    if ( _InterlockedExchange64((volatile __int64 *)&IrpFromQueue->CancelRoutine, 0LL) )
      break;
  }
  FxIrpQueue::RemoveIrpFromListEntry(v3, &fxIrp);
  m_Irp = fxIrp.m_Irp;
  v11 = fxIrp.m_Irp->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v11 == 1 )
    v11[1] = 0LL;
  if ( v9 )
    *v9 = v11;
  m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
  return (_IRP *)v8;
}
