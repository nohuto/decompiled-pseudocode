/*
 * XREFs of ?Invoke@FxIoQueueIoRead@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00396A0
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0009D30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoQueueIoRead::Invoke(
        FxIoQueueIoRead *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int Length)
{
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64); // rax
  unsigned __int64 v6; // rdi
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v10; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Method = this->Method;
  v6 = Length;
  if ( Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
    {
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      Method = this->Method;
    }
    Method(Queue, Request, v6);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v10) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v10);
    }
  }
}
