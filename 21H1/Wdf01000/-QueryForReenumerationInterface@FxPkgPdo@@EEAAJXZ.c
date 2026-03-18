/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x1C0079720
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C007F77C (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForReenumerationInterface(FxPkgPdo *this)
{
  return FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
}
