/*
 * XREFs of ?PnpEventInitSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00840D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C002BFE4 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitSurpriseRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  return 261LL;
}
