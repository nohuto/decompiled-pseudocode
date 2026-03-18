/*
 * XREFs of ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C00833D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00820B0 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_SxWakeSetInstance(
        FxDevice *Device,
        _FX_DRIVER_GLOBALS *__formal,
        unsigned int a3,
        _BYTE *InBuffer)
{
  LOBYTE(__formal) = *InBuffer;
  FxPkgPnp::PowerPolicySetSxWakeState(Device->m_PkgPnp, __formal);
  return 0LL;
}
