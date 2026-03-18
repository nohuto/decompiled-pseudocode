/*
 * XREFs of ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C0019C00
 * Callers:
 *     ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0018B80 (-WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0003664 (FX_TRACK_DRIVER.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxWorkItem::WorkItemHandler(FxWorkItem *this)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // r8
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v6)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  WDFWORKITEM__ *v7; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  bool v10; // zf
  void (__fastcall *WorkItemNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  WDFWORKITEM__ *ObjectHandleUnchecked; // rax
  __int64 v13; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  FxNonPagedObject::Lock(this, &irql, v2);
  v3 = irql;
  ++this->m_WorkItemRunningCount;
  this->m_Enqueued = 0;
  FxNonPagedObject::Unlock(this, v3, v4);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    WorkItemNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( WorkItemNotifyRoutine )
      WorkItemNotifyRoutine(&this->m_Callback, 8u, 1207959552u, 3943u, 2u);
    ObjectHandleUnchecked = (WDFWORKITEM__ *)FxObject::GetObjectHandleUnchecked(this);
    this->m_Callback(ObjectHandleUnchecked);
    LOBYTE(v13) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v13);
  }
  else
  {
    v6 = FxLibraryGlobals.PerfTraceRoutines->WorkItemNotifyRoutine;
    if ( v6 )
      v6(&this->m_Callback, 8u, 1207959552u, 3943u, 2u);
    v7 = (WDFWORKITEM__ *)FxObject::GetObjectHandleUnchecked(this);
    this->m_Callback(v7);
  }
  FxNonPagedObject::Lock(this, &irql, v8);
  v10 = this->m_WorkItemRunningCount-- == 1;
  if ( v10 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  FxNonPagedObject::Unlock(this, irql, v9);
}
