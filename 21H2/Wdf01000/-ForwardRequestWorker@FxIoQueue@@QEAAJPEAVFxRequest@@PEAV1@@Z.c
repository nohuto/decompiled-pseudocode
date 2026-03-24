/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000B944
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000BAF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0076140 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C00761A0 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005488 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0015834 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D8C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005AC78 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C74BC (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxIoQueue *RefCount; // rcx
  _LIST_ENTRY *Blink; // rax
  FxRequestCompletionState m_CompletionState; // r12d
  __int16 updated; // r15
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v15; // rcx
  unsigned __int64 *p_m_Lock; // rbp
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  int v19; // r14d
  unsigned __int8 v20; // r8
  unsigned __int16 v21; // r9
  const void *ObjectHandleUnchecked; // rax
  FxVerifierLock *v24; // rcx
  FxVerifierLock *v25; // rcx
  _LIST_ENTRY *v26; // rcx
  unsigned __int8 v27; // dl
  FxVerifierLock *v28; // rcx
  FxVerifierLock *v29; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  RefCount = (FxIoQueue *)(unsigned int)_InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    Blink = Request[-1].m_OwnerListEntry2.Blink;
  else
    Blink = 0LL;
  if ( Blink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Blink,
      (void *)0x74617453,
      1399,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      (unsigned int)RefCount);
  if ( Request->m_Completed )
  {
    m_CompletionState = FxRequestCompletionStateNone;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Request);
    WPP_IFR_SF_q(Request->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(Request->m_Globals);
  }
  else
  {
    m_CompletionState = Request->m_CompletionState;
    Request->m_CompletionState = 0;
    if ( m_CompletionState )
      Request->Release(Request, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(RefCount, (_FX_DRIVER_GLOBALS *)Request, Request);
  else
    updated = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v24 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v24, &irql, (unsigned __int8)DestQueue);
    v11 = irql;
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v11;
  }
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 )
    goto LABEL_39;
  v15 = Request->m_OwnerListEntry2.Blink;
  if ( v15->Flink != p_m_OwnerListEntry2 )
    goto LABEL_39;
  v15->Flink = Flink;
  Flink->Blink = v15;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v25 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v25, v11, v12);
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  }
  v19 = FxIoQueue::QueueRequestFromForward(DestQueue, Request, v17);
  if ( v19 < 0 )
  {
    FxRequest::SetCompletionState(Request, m_CompletionState);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
    v26 = this->m_DriverOwned.Blink;
    if ( v26->Flink == &this->m_DriverOwned )
    {
      v27 = irql;
      Request->m_OwnerListEntry2.Blink = v26;
      p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
      v26->Flink = p_m_OwnerListEntry2;
      this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(this, v27);
      return (unsigned int)v19;
    }
LABEL_39:
    __fastfail(3u);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v28 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v28, &irql, v18);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  --this->m_DriverIoCount;
  if ( this->m_Dispatching )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v29 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v29, irql, v20);
    }
    else
    {
      KeReleaseSpinLock(p_m_Lock, irql);
    }
  }
  else
  {
    FxIoQueue::DispatchEvents(this, irql, 0LL, v21);
  }
  return (unsigned int)v19;
}
