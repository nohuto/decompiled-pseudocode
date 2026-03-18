/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx

  if ( FxDevice::IsPdo(This->m_Device) )
  {
    This->PowerDisableWakeAtBusOverload(This);
    m_DeviceBase = This->m_DeviceBase;
  }
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  *(_QWORD *)(v4 + 488) = ObjectHandleUnchecked;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)(v4 + 456));
  return 1337LL;
}
