/*
 * XREFs of ?_DispatchWaitWake@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0039850
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0088098 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::_DispatchWaitWake(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::DispatchWaitWake(This, Irp);
}
