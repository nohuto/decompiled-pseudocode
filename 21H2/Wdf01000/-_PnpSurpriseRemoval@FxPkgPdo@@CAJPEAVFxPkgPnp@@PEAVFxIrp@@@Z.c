/*
 * XREFs of ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0083A60
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C005BC88 (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0088878 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPdo::_PnpSurpriseRemoval(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceDescriptionEntry::DeviceSurpriseRemoved((FxDeviceDescriptionEntry *)This[1].m_Globals);
  return FxPkgPnp::PnpSurpriseRemoval(This, Irp);
}
