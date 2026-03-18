/*
 * XREFs of ?PowerPolWokeFromS0NotifyDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0088680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z @ 0x1C001B9D4 (-Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWokeFromS0NotifyDriver(FxPkgPnp *This)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  __int64 v2; // rdx

  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  FxPowerDeviceDisarmWakeFromS0::Invoke(
    (FxPowerDeviceWakeFromSxTriggered *)(*(_QWORD *)(v2 + 888) + 536LL),
    ObjectHandleUnchecked);
  return 1346LL;
}
