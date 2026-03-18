/*
 * XREFs of ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0012938
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1C00129D4 (-Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessReadyNotify(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *m_ReadyNotifyContext; // rbp
  __m128i m_ReadyNotify; // xmm6
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  const void *_a1; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-28h] BYREF

  m_Globals = this->m_Globals;
  m_ReadyNotifyContext = this->m_ReadyNotifyContext;
  m_ReadyNotify = (__m128i)this->m_ReadyNotify;
  this->m_TransitionFromEmpty = 0;
  v8 = *PreviousIrql;
  callback = (FxIoQueueIoState)m_ReadyNotify;
  FxNonPagedObject::Unlock(this, v8, a3);
  if ( _mm_srli_si128(m_ReadyNotify, 8).m128i_u64[0] )
  {
    ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoState::Invoke(&callback, ObjectHandleUnchecked, m_ReadyNotifyContext);
  }
  else if ( m_Globals->FxVerifierOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}
