/*
 * XREFs of ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C001057C
 * Callers:
 *     ?PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E8D0 (-PowerPolSystemSleepFromDeviceWaitingUnarmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000F8F0 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010280 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010370 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00105A8 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 */

bool __fastcall FxPkgPnp::PowerPolicyIsWakeEnabled(FxPkgPnp *this)
{
  return this->m_PowerPolicyMachine.m_Owner && FxPkgPnp::PowerPolicyGetCurrentWakeReason(this);
}
