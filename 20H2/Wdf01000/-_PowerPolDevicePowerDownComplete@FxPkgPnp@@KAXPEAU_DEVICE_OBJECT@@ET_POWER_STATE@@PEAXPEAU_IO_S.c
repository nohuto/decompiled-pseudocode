/*
 * XREFs of ?_PowerPolDevicePowerDownComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0010E70
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007B2F8 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::_PowerPolDevicePowerDownComplete(
        _DEVICE_OBJECT *DeviceObject,
        unsigned __int8 MinorFunction,
        _POWER_STATE PowerState,
        FxPkgPnp *Context)
{
  unsigned __int8 v5; // r8

  if ( Context->m_PowerMachine.m_PowerDownFailure )
  {
    Context->m_PowerMachine.m_PowerDownFailure = 0;
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerDownFailed, PowerState.SystemState);
    if ( !Context->m_ReleaseHardwareAfterDescendantsOnFailure )
      FxPkgPnp::PnpProcessEvent(Context, PnpEventPowerDownFailed, v5);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolPowerDown, PowerState.SystemState);
  }
}
