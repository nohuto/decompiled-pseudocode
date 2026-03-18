/*
 * XREFs of ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0019F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0003DA4 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C0003E54 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(FxInterrupt **SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  FxInterrupt *v2; // rbx
  unsigned __int64 v4; // rax
  int v5; // esi
  unsigned __int8 result; // al
  unsigned __int64 ObjectHandleUnchecked; // rax

  v2 = *SyncContext;
  if ( (*SyncContext)->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(*SyncContext, a2);
    FxObject::GetObjectHandleUnchecked(v2->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v2);
    v5 = ((__int64 (__fastcall *)(unsigned __int64))v2->m_EvtInterruptDisable)(ObjectHandleUnchecked);
    FxInterrupt::ReleaseLock(v2);
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(v2->m_DeviceBase);
    v4 = FxObject::GetObjectHandleUnchecked(v2);
    v5 = ((__int64 (__fastcall *)(unsigned __int64))v2->m_EvtInterruptDisable)(v4);
  }
  result = 1;
  *((_DWORD *)SyncContext + 2) = v5;
  return result;
}
