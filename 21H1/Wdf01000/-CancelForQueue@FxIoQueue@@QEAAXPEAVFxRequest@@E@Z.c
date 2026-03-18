/*
 * XREFs of ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075A34
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005488 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0015374 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0077060 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00773B0 (-_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00158A8 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00158D4 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004ECD8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C00765F4 (-InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::CancelForQueue(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v4; // si
  const void *_a1; // rax
  const void *_a2; // rdx
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_OwnerListEntry; // rdx
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = PreviousIrql;
  m_Globals = this->m_Globals;
  v4 = PreviousIrql;
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(pRequest, 16, PreviousIrql);
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(pRequest);
    WPP_IFR_SF_qq(m_Globals, 3u, 0xDu, 0x4Du, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  }
  v9 = pRequest->__vftable;
  pRequest->m_IrpQueue = 0LL;
  pRequest->m_Canceled = 1;
  v9->Release(pRequest, (void *)1969583441, 4393, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  if ( this->m_IoCanceledOnQueue.Method && pRequest->m_Presented )
  {
    FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateQueue);
    FxIoQueue::InsertInDriverOwnedList(this, pRequest);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(pRequest, 1, v11);
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
    FxNonPagedObject::Unlock(this, v4, v10);
    pRequest->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(pRequest, 0xC0000120, v16, v17);
    pRequest->Release(
      pRequest,
      (void *)1886220099,
      4435,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v19, v18);
    v4 = v19;
  }
  FxIoQueue::DispatchInternalEvents(this, v4, v14, v15);
}
