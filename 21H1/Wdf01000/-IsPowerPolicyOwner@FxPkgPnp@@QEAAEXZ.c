/*
 * XREFs of ?IsPowerPolicyOwner@FxPkgPnp@@QEAAEXZ @ 0x1C0004828
 * Callers:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C00804B4 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxPkgPnp::IsPowerPolicyOwner(FxPkgPnp *this)
{
  return this->m_PowerPolicyMachine.m_Owner != 0LL;
}
