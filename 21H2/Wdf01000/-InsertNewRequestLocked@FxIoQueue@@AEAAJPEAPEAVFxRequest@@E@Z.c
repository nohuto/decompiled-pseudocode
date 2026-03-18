/*
 * XREFs of ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000A8B0
 * Callers:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000A508 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000A934 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequestLocked(FxIoQueue *this, FxRequest **Request, unsigned int *PreviousIrql)
{
  unsigned __int8 v5; // bp
  int inserted; // esi
  unsigned __int8 v7; // r8
  FxRequest *v9; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = (unsigned __int8)PreviousIrql;
  v5 = (unsigned __int8)PreviousIrql;
  inserted = FxRequest::InsertTailIrpQueue(*Request, &this->m_Queue, PreviousIrql);
  if ( inserted < 0 )
  {
    FxNonPagedObject::Unlock(this, v5, v7);
    v9 = *Request;
    (*Request)->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v9, inserted);
    (*Request)->Release(
      *Request,
      (void *)1886220099,
      2636,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v11, v10);
  }
  else
  {
    (*Request)->m_IoQueue = this;
    if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
      FxIoQueue::SetTransitionFromEmpty(this);
  }
  *Request = 0LL;
  return (unsigned int)inserted;
}
