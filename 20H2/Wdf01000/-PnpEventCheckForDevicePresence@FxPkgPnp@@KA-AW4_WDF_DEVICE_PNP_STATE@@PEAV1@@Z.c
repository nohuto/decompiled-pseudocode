/*
 * XREFs of ?PnpEventCheckForDevicePresence@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0079A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventCheckForDevicePresence(FxPkgPnp *This)
{
  return ((__int64 (__fastcall *)(FxPkgPnp *))This->PnpEventCheckForDevicePresenceOverload)(This);
}
