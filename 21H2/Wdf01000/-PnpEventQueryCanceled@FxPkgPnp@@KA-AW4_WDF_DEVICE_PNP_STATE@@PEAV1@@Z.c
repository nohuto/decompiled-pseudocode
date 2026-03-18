/*
 * XREFs of ?PnpEventQueryCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084270
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C0088810 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryCanceled(FxPkgPnp *This)
{
  FxPkgPnp::PnpPowerDereferenceSelf(This);
  return 281LL;
}
