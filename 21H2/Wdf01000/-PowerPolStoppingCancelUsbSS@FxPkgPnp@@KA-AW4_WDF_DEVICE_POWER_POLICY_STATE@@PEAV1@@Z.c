/*
 * XREFs of ?PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B620
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C000DB44 (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0017C84 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C008C814 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingCancelUsbSS(FxPkgPnp *This)
{
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1377 : 1374;
}
