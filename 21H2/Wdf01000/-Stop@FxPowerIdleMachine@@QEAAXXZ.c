/*
 * XREFs of ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0089844
 * Callers:
 *     ?PowerPolRestartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008ADC0 (-PowerPolRestartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B440 (-PowerPolStartingFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingSendStatus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B8D0 (-PowerPolStoppingSendStatus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0016824 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPowerIdleMachine::Stop(FxPowerIdleMachine *this)
{
  KIRQL v2; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventStop);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v2);
}
