/*
 * XREFs of ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238
 * Callers:
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000DF58 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000E05C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B404 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0082300 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C000350C (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C000E350 (-InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000E390 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0068628 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxIoQueue::CancelForQueue(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v4; // si
  FxRequest_vtbl *v7; // rax
  unsigned __int8 v8; // r8
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_OwnerListEntry; // rdx
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = PreviousIrql;
  m_Globals = this->m_Globals;
  v4 = PreviousIrql;
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(pRequest, 16);
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(pRequest);
    WPP_IFR_SF_qq(m_Globals, 3u, 0xDu, 0x4Du, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  }
  v7 = pRequest->__vftable;
  pRequest->m_IrpQueue = 0LL;
  pRequest->m_Canceled = 1;
  v7->Release(pRequest, (void *)1969583441, 4393, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  if ( this->m_IoCanceledOnQueue.Method && pRequest->m_Presented )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateQueue);
    FxIoQueue::InsertInDriverOwnedList(this, pRequest);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(pRequest, 1);
    Blink = this->m_CanceledOnQueueList.Blink;
    p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
    if ( Blink->Flink != &this->m_CanceledOnQueueList )
      __fastfail(3u);
    p_m_OwnerListEntry->Flink = &this->m_CanceledOnQueueList;
    pRequest->m_OwnerListEntry.Blink = Blink;
    Blink->Flink = p_m_OwnerListEntry;
    this->m_CanceledOnQueueList.Blink = p_m_OwnerListEntry;
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      4426,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  else
  {
    FxNonPagedObject::Unlock(this, v4, v8);
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(pRequest, -1073741536);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      4435,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v14, v13);
    v4 = v14;
  }
  FxIoQueue::DispatchInternalEvents(this, v4);
}
