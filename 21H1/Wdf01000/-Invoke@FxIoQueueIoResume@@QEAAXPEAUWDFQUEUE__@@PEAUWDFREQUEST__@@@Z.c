/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C00766C8
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001444C (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoQueueIoResume::Invoke(FxIoQueueIoResume *this, WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Method = this->Method;
  if ( Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
    {
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      Method = this->Method;
    }
    Method(Queue, Request);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v8) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v8);
    }
  }
}
