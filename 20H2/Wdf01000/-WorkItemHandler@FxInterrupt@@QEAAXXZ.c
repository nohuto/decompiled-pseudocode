/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C0089C50
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C00895C0 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0004734 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v3)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  unsigned __int64 v7; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v3 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C00A9FA0 + 24LL);
    if ( v3 )
      v3(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))this->m_EvtInterruptWorkItem)(ObjectHandleUnchecked);
    LOBYTE(v5) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v5);
  }
  else
  {
    v6 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C00A9FA0 + 24LL);
    if ( v6 )
      v6(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v7 = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))this->m_EvtInterruptWorkItem)(v7);
  }
}
