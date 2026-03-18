/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C008DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxObject *m_DeviceBase; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(unsigned __int64); // rax

  if ( this->m_EnableWakeAtBusInvoked )
  {
    this->m_EnableWakeAtBusInvoked = 0;
    m_DeviceBase = this->m_DeviceBase;
    Blink = m_DeviceBase[2].m_Globals[1].FxPoolFrameworks.NonPagedHead.Blink[55].Blink;
    if ( Blink )
    {
      _InterlockedDecrement((volatile signed __int32 *)&Blink[55].Blink);
      m_DeviceBase = this->m_DeviceBase;
    }
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    v6 = *(void (__fastcall **)(unsigned __int64))(v5 + 1760);
    if ( v6 )
      v6(ObjectHandleUnchecked);
  }
}
