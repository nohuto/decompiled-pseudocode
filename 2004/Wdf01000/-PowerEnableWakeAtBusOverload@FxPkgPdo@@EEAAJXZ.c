/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x1C008A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  int v4; // edx
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v6; // rcx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceEnableWakeAtBus.m_Method;
  if ( m_Method )
    v4 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, (_SYSTEM_POWER_STATE)this->m_SystemPowerState);
  else
    v4 = 0;
  if ( v4 >= 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 872));
  }
  return (unsigned int)v4;
}
