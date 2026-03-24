/*
 * XREFs of ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0003A64
 * Callers:
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0003A30 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005AC78 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxSystemWorkItem::WorkItemHandler(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  void (__fastcall *m_Callback)(void *); // rsi
  char m_ObjectFlags; // cl
  void *m_CallbackArg; // rbp
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // si
  unsigned __int8 v13; // r8
  bool v14; // zf
  FxVerifierLock *v15; // rcx
  FxVerifierLock *v16; // rcx
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v15 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
  {
    FxVerifierLock::Lock(v15, &irql, a3);
    v6 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  m_Callback = this->m_Callback;
  this->m_Callback = 0LL;
  ++this->m_WorkItemRunningCount;
  m_ObjectFlags = this->m_ObjectFlags;
  m_CallbackArg = this->m_CallbackArg;
  this->m_Enqueued = 0;
  if ( m_ObjectFlags < 0 && (v16 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
    FxVerifierLock::Unlock(v16, v6, v7);
  else
    KeReleaseSpinLock(p_m_Lock, v6);
  m_Callback(m_CallbackArg);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v17 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
  {
    FxVerifierLock::Lock(v17, &irql, v11);
    v12 = irql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  v14 = this->m_WorkItemRunningCount-- == 1;
  if ( v14 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
    FxVerifierLock::Unlock(v18, v12, v13);
  else
    KeReleaseSpinLock(p_m_Lock, v12);
}
