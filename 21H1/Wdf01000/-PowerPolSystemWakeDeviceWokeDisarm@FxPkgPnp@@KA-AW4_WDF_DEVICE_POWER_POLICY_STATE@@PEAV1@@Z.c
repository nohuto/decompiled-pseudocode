/*
 * XREFs of ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z @ 0x1C001B9D4 (-Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0088880 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWokeDisarm(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // r8
  WDFDEVICE__ *ObjectHandleUnchecked; // rax

  if ( FxDevice::IsPdo(This->m_Device) )
  {
    This->PowerDisableWakeAtBusOverload(This);
    m_DeviceBase = This->m_DeviceBase;
  }
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  FxPowerDeviceDisarmWakeFromS0::Invoke(
    &This->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered,
    ObjectHandleUnchecked);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 1317LL;
}
