/*
 * XREFs of ?_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C0083390
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C000E878 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_S0IdleSetInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned __int8 a3,
        unsigned __int8 *InBuffer)
{
  FxPkgPnp::PowerPolicySetS0IdleState(Device->m_PkgPnp, *InBuffer, a3);
  return 0LL;
}
