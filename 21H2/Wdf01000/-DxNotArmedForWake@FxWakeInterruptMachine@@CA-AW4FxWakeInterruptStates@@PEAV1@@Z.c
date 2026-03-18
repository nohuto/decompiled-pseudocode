/*
 * XREFs of ?DxNotArmedForWake@FxWakeInterruptMachine@@CA?AW4FxWakeInterruptStates@@PEAV1@@Z @ 0x1C008E370
 * Callers:
 *     <none>
 * Callees:
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C0087BB0 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxWakeInterruptMachine::DxNotArmedForWake(FxWakeInterruptMachine *This)
{
  FxPkgPnp::AckPendingWakeInterruptOperation(This->m_PkgPnp, 1u);
  return 10LL;
}
