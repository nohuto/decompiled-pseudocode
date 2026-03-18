/*
 * XREFs of ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00144D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00027C4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C00399AC (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptEnableThunk(FxInterrupt **SyncContext, _FX_DRIVER_GLOBALS *a2)
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
    v5 = ((__int64 (__fastcall *)(unsigned __int64))v2->m_EvtInterruptEnable)(ObjectHandleUnchecked);
    FxInterrupt::ReleaseLock(v2);
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(v2->m_DeviceBase);
    v4 = FxObject::GetObjectHandleUnchecked(v2);
    v5 = ((__int64 (__fastcall *)(unsigned __int64))v2->m_EvtInterruptEnable)(v4);
  }
  result = 1;
  *((_DWORD *)SyncContext + 2) = v5;
  return result;
}
