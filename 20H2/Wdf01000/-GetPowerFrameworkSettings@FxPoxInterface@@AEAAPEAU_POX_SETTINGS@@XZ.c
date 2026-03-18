/*
 * XREFs of ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C008C0DC
 * Callers:
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086B40 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C008C114 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C440 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008C540 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C008C730 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C008C8A8 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008CAA0 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 * Callees:
 *     <none>
 */

_POX_SETTINGS *__fastcall FxPoxInterface::GetPowerFrameworkSettings(FxPoxInterface *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 4) != 0 )
    return this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings;
  return (_POX_SETTINGS *)v1;
}
