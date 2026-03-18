/*
 * XREFs of ?NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ @ 0x1C008EE08
 * Callers:
 *     ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AB60 (-PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartedNotIdleCapableDirectedDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B3A0 (-PowerPolStartedNotIdleCapableDirectedDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolTimerExpiredNoWakeUndoPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BD10 (-PowerPolTimerExpiredNoWakeUndoPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolTimerExpiredWakeCapableUndoPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C030 (-PowerPolTimerExpiredWakeCapableUndoPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C1F0 (-PowerPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_PO.c)
 *     ?PowerPolWakeCapableUsbSSCompleted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008C690 (-PowerPolWakeCapableUsbSSCompleted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0012F54 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

void __fastcall FxPoxInterface::NotifyDeviceDirectedPoweredDown(FxPoxInterface *this)
{
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    if ( _InterlockedCompareExchange(&this->m_DirectedTransitionActive, 0, 0) )
      FxDevicePwrRequirementMachine::ProcessEvent(
        this->m_DevicePowerRequirementMachine,
        DprEventDeviceDirectedPoweredDown);
  }
}
