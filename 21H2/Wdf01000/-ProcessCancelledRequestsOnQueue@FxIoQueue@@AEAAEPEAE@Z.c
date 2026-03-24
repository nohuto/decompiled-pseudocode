/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0076824
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C0013E7C (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D8C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v8; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v10; // rsi
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v13; // r8
  unsigned __int64 ObjectHandleUnchecked; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int8 v16; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v19; // rdx
  FxCallbackLock *v20; // rcx
  char v21; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( 1 )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    if ( p_m_CanceledOnQueueList->Flink == p_m_CanceledOnQueueList )
      break;
    v8 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v8;
    v10 = (FxRequestBase *)&Flink[-18];
    v8->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v10);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v10, 64, v13);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v13);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v10);
    v15 = FxObject::GetObjectHandleUnchecked(this);
    Method = this->m_IoCanceledOnQueue.Method;
    if ( Method )
    {
      m_CallbackLock = this->m_IoCanceledOnQueue.m_CallbackLock;
      v21 = 0;
      if ( m_CallbackLock )
      {
        m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&v21);
        Method = this->m_IoCanceledOnQueue.Method;
      }
      Method((WDFQUEUE__ *)v15, (WDFREQUEST__ *)ObjectHandleUnchecked);
      v20 = this->m_IoCanceledOnQueue.m_CallbackLock;
      if ( v20 )
      {
        LOBYTE(v19) = v21;
        v20->Unlock(v20, v19);
      }
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v16);
  }
  return 1;
}
