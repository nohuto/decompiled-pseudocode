/*
 * XREFs of ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C000DB44 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00158AC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingDisarmWake(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx

  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( FxDevice::IsPdo(This->m_Device) )
  {
    This->PowerDisableWakeAtBusOverload(This);
    m_DeviceBase = This->m_DeviceBase;
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  *(_QWORD *)(v4 + 488) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)(v4 + 456));
  FxPkgPnp::PowerProcessEvent(This, 0x800u, 0);
  return 1472LL;
}
