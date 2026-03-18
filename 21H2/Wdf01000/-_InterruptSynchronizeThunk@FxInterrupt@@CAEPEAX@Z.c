/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0039A60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00027C4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00399AC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
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
    v5 = ((__int64 (__fastcall *)(unsigned __int64))SyncContext[1])(ObjectHandleUnchecked);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext);
  }
  else
  {
    v6 = FxObject::GetObjectHandleUnchecked(v3);
    return ((__int64 (__fastcall *)(unsigned __int64))SyncContext[1])(v6);
  }
  return v5;
}
