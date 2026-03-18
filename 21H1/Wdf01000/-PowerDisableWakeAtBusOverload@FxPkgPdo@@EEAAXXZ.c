/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C008A660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxObject *m_DeviceBase; // rcx
  __int64 v3; // rax
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(unsigned __int64); // rax

  if ( this->m_EnableWakeAtBusInvoked )
  {
    this->m_EnableWakeAtBusInvoked = 0;
    m_DeviceBase = this->m_DeviceBase;
    v3 = *((_QWORD *)m_DeviceBase[2].m_Globals[1].FxPoolFrameworks.PagedLock.m_Lock.Owner + 111);
    if ( v3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 872));
      m_DeviceBase = this->m_DeviceBase;
    }
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    v6 = *(void (__fastcall **)(unsigned __int64))(v5 + 1760);
    if ( v6 )
      v6(ObjectHandleUnchecked);
  }
}
