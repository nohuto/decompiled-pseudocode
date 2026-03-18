/*
 * XREFs of ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C00804B4
 * Callers:
 *     imp_WdfDeviceGetSystemPowerAction @ 0x1C0019310 (imp_WdfDeviceGetSystemPowerAction.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C001BED8 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 * Callees:
 *     ?IsPowerPolicyOwner@FxPkgPnp@@QEAAEXZ @ 0x1C0004828 (-IsPowerPolicyOwner@FxPkgPnp@@QEAAEXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetSystemPowerAction@FxDevicePowerIrpTracker@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C001D1D0 (-GetSystemPowerAction@FxDevicePowerIrpTracker@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

__int64 __fastcall FxPkgPnp::GetSystemPowerAction(FxPkgPnp *this)
{
  FxPkgPnp *v1; // rdx

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)this, 0x1Fu)
    && FxPkgPnp::IsPowerPolicyOwner(v1) )
  {
    return FxDevicePowerIrpTracker::GetSystemPowerAction(&v1->m_PowerPolicyMachine.m_Owner->m_DevicePowerIrpTracker);
  }
  else
  {
    return v1->m_SystemPowerAction;
  }
}
