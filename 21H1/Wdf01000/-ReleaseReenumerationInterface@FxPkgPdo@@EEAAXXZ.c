/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C00797A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C0082754 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPdo::ReleaseReenumerationInterface(FxPkgPdo *this)
{
  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
}
