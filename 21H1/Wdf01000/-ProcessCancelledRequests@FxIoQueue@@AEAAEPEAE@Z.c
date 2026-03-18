/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013CE0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C0013F1C (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *p_m_Cancelled; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v9; // rdi
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v12; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  unsigned __int64 v15; // rbp
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // r8
  char v20; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_Cancelled = &this->m_Cancelled;
  while ( 1 )
  {
    Flink = p_m_Cancelled->Flink;
    if ( p_m_Cancelled->Flink == p_m_Cancelled )
      break;
    v7 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v7;
    v9 = (FxRequestBase *)&Flink[-18];
    v7->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v9);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v12);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v9);
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    v15 = ObjectHandleUnchecked;
    m_Cancel = v9->m_CancelRoutine.m_Cancel;
    if ( m_Cancel )
    {
      v20 = 0;
      if ( m_IoCancelCallbackLockPtr )
      {
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v20);
        m_Cancel = v9->m_CancelRoutine.m_Cancel;
      }
      v9->m_CancelRoutine.m_Cancel = 0LL;
      m_Cancel((WDFREQUEST__ *)v15);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v17) = v20;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v17);
      }
    }
    v9->Release(v9, (void *)1969583441, 4933, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v18);
  }
  return 1;
}
