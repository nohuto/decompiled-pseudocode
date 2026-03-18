/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0083D70
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C002BFE4 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C00305C8 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned __int8 v3; // dl

  FxPkgPnp::ReleasePowerThread(This, a2);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 261LL;
}
