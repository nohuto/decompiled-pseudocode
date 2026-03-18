/*
 * XREFs of ?Invoke@FxPnpDeviceD0ExitPreHwDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001BF38
 * Callers:
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DB60 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPnpDeviceD0ExitPreHwDisabled::Invoke(
        FxPnpDeviceD0ExitPreHwDisabled *this,
        WDFDEVICE__ *Device,
        _WDF_POWER_DEVICE_STATE TargetState)
{
  this->m_Device = Device;
  this->m_TargetState = TargetState;
  return FxPrePostCallback::InvokeStateless(this);
}
