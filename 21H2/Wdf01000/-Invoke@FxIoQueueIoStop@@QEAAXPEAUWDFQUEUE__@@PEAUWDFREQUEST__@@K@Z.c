/*
 * XREFs of ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000F1E0
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0011924 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoQueueIoStop::Invoke(
        FxIoQueueIoStop *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int ActionFlags)
{
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned int); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v10; // rdx
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
    Method(Queue, Request, ActionFlags);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v10) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v10);
    }
  }
}
