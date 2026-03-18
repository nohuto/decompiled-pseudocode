/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0
 * Callers:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0081F40 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000A508 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0011584 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0082384 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C74F8 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // bp
  _FX_IO_QUEUE_STATE _a4; // r8d
  bool v8; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v11; // edx
  _IRP *m_Irp; // r9
  $2E9503FEA5AD2275F0EE453185AD8E99 *v13; // r10
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int v16; // esi
  FxVerifierLock *v18; // rcx
  unsigned __int16 m_ObjectSize; // cx
  const void *globals; // rdi
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // r8
  _LIST_ENTRY *Blink; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  FxRequest_vtbl *v28; // rax
  const _GUID *RefType; // [rsp+20h] [rbp-58h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxIrp Irp; // [rsp+90h] [rbp+18h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v18 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v18, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v8 = pRequest->m_IrpAllocation == 0;
    m_Globals = pRequest->m_Globals;
    p_m_Queue = &this->m_Queue;
    if ( m_Globals->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &this->m_Queue) < 0 )
    {
      pRequest->m_IoQueue = this;
    }
    else
    {
      v11 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v11);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v13 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v13;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v13->m_CsqContext.Type = 1;
      }
      v14 = this->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v14->Flink != p_m_Queue )
        __fastfail(3u);
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v14;
      v14->Flink = p_ListEntry;
      this->m_Queue.m_Queue.Blink = p_ListEntry;
      ++this->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&this->m_Queue, &Irp);
        if ( v27 )
          *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v26 + 144) = 0LL;
        v28 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        v16 = -1073741536;
        v28->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v16 = 0;
      }
      pRequest->m_IoQueue = this;
      if ( v16 >= 0 )
      {
        if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          FxIoQueue::SetTransitionFromEmpty(this);
        goto LABEL_14;
      }
      v6 = irql;
    }
    FxObject::AddRef(
      pRequest,
      (void *)0x75657551,
      2459,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, pRequest, v6);
    FxNonPagedObject::Lock(this, &irql, v24);
LABEL_14:
    if ( v8 || !this->m_Dispatching )
      FxIoQueue::DispatchEvents(this, irql, 0LL, (unsigned __int16)m_Irp);
    else
      FxNonPagedObject::Unlock(this, irql, _a4);
    return 0LL;
  }
  m_ObjectSize = pRequest->m_ObjectSize;
  globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = "power stopping (Drain) in progress,";
  if ( !m_ObjectSize )
    globals = 0LL;
  if ( (_a4 & 0x10000) == 0 )
    _a5 = a5;
  _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qLsqd(this->m_Globals, 3u, _a4, 0x2Bu, RefType, _a3, _a4, _a5, globals, -1071644156);
  FxNonPagedObject::Unlock(this, v6, v23);
  return 3223323140LL;
}
