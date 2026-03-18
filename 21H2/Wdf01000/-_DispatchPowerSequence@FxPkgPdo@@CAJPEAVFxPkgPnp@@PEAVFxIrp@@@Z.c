/*
 * XREFs of ?_DispatchPowerSequence@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000CDE4 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

__int64 __fastcall FxPkgPdo::_DispatchPowerSequence(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePowerRequest(This, Irp, 0xC00000BB);
}
