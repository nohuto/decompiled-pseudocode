/*
 * XREFs of ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0076048
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1C00178D0 (-Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z.c)
 */

void __fastcall FxIoQueue::ProcessIdleComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_IdleComplete; // xmm0
  void *m_IdleCompleteContext; // rbp
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  const void *_a1; // rax
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-18h] BYREF

  m_IdleComplete = this->m_IdleComplete;
  m_IdleCompleteContext = this->m_IdleCompleteContext;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  v7 = *PreviousIrql;
  m_Globals = this->m_Globals;
  callback = m_IdleComplete;
  FxNonPagedObject::Unlock(this, v7, a3);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x51u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoState::Invoke(&callback, ObjectHandleUnchecked, m_IdleCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}
