/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0089E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0003DA4 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003E54 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(FxObject **SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt *v3; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  char v5; // di
  unsigned __int64 v6; // rax

  v3 = (FxInterrupt *)*SyncContext;
  if ( v3->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(v3, a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(*SyncContext);
    v5 = ((__int64 (__fastcall *)(unsigned __int64, FxObject *))SyncContext[1])(ObjectHandleUnchecked, SyncContext[2]);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext);
  }
  else
  {
    v6 = FxObject::GetObjectHandleUnchecked(v3);
    return ((__int64 (__fastcall *)(unsigned __int64, FxObject *))SyncContext[1])(v6, SyncContext[2]);
  }
  return v5;
}
