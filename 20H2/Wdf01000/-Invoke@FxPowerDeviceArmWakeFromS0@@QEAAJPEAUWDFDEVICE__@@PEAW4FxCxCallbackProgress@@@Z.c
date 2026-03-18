/*
 * XREFs of ?Invoke@FxPowerDeviceArmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C001B8D4
 * Callers:
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087660 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016F18 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPowerDeviceArmWakeFromS0::Invoke(
        FxPowerDeviceArmWakeFromS0 *this,
        WDFDEVICE__ *Device,
        FxCxCallbackProgress *Progress)
{
  this->m_Device = Device;
  return FxPrePostCallback::InvokeStateful(this, Progress, FxCxCleanupAfterPreOrClientFailure);
}
