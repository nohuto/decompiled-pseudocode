/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x1C0078E40
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C007EE9C (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForReenumerationInterface(FxPkgPdo *this)
{
  return FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
}
