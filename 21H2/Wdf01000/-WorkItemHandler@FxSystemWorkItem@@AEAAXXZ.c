/*
 * XREFs of ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0003920
 * Callers:
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0003600 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0003664 (FX_TRACK_DRIVER.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxSystemWorkItem::WorkItemHandler(FxSystemWorkItem *this)
{
  void (__fastcall *m_Callback)(void *); // rdi
  unsigned __int8 v3; // dl
  void *m_CallbackArg; // rbx
  bool v5; // zf
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  FxNonPagedObject::Lock(this, &irql);
  m_Callback = this->m_Callback;
  v3 = irql;
  m_CallbackArg = this->m_CallbackArg;
  this->m_Callback = 0LL;
  ++this->m_WorkItemRunningCount;
  this->m_Enqueued = 0;
  FxNonPagedObject::Unlock(this, v3);
  m_Callback(m_CallbackArg);
  FxNonPagedObject::Lock(this, &irql);
  v5 = this->m_WorkItemRunningCount-- == 1;
  if ( v5 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  FxNonPagedObject::Unlock(this, irql);
}
