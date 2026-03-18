/*
 * XREFs of ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0020830
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0020848 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpQueryResources(FxPkgPdo *This, FxIrp *Irp)
{
  return FxPkgPdo::PnpQueryResources(This, Irp);
}
