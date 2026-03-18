/*
 * XREFs of ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0015374
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001444C (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C001551C (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0015548 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0015748 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00158D4 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004ECD8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075A34 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qqs @ 0x1C00775F0 (WPP_IFR_SF_qqs.c)
 */

void __fastcall FxIoQueue::ProcessAcknowledgedRequests(
        FxIoQueue *this,
        FxRequest *Request,
        unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 m_PowerStopState; // bp
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  unsigned int *v12; // r8
  const void *level; // rax
  const char *id; // rdx
  const void *flags; // r8
  unsigned __int16 v16; // r9
  const _GUID *v17; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  m_PowerStopState = Request->m_PowerStopState;
  if ( m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(this);
    level = (const void *)FxObject::GetObjectHandleUnchecked(Request);
    WPP_IFR_SF_qqs(m_Globals, (unsigned __int8)id, (unsigned int)flags, v16, v17, level, flags, id);
  }
  Request->m_PowerStopState = 0;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Flink = &Request->m_OwnerListEntry2;
  Blink = this->m_DriverOwned.Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
    FxObject::AddRef(
      Request,
      (void *)0x646C6F48,
      5702,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(Request, 512);
    Request->Release(
      Request,
      (void *)1684827976,
      5709,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( m_PowerStopState == 2 )
  {
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(Request, 9);
    FxObject::AddRef(
      Request,
      (void *)0x74617453,
      5733,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
    FxNonPagedObject::Lock(this, PreviousIrql, v11);
    FxIoQueue::RemoveFromDriverOwnedList(this, Request);
    if ( !this->m_CancelDispatchedRequests && FxRequest::InsertHeadIrpQueue(Request, &this->m_Queue, v12) >= 0 )
    {
      FxIoQueue::CheckTransitionFromEmpty(this);
      return;
    }
    FxObject::AddRef(
      Request,
      (void *)0x75657551,
      5777,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v10);
}
