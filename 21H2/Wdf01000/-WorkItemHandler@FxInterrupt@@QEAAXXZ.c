/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008D96C
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C008D4E0 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0003664 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v7; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))this->m_EvtInterruptWorkItem)(ObjectHandleUnchecked);
    LOBYTE(v5) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v5);
  }
  else
  {
    v6 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v6 )
      v6(&this->m_EvtInterruptWorkItem, 8u, 1207959552u, 3943u, 2u);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v7 = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))this->m_EvtInterruptWorkItem)(v7);
  }
}
