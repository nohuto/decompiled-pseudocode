/*
 * XREFs of ?PowerPolicyHandleSystemQueryPower@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C000CFA0
 * Callers:
 *     ?_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000C540 (-_DispatchQueryPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000CC5C (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyHandleSystemQueryPower(FxPkgPnp *this, int QueryState)
{
  if ( QueryState >= 5 || QueryState <= this->m_SystemWake )
    return 0LL;
  WPP_IFR_SF_d(this->m_Globals, 3u, 0xCu, 0x3Cu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, QueryState - 1);
  return 3221226195LL;
}
