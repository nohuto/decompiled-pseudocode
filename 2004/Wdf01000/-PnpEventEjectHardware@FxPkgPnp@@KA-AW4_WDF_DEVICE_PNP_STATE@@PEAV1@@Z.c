/*
 * XREFs of ?PnpEventEjectHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventEjectHardware(FxPkgPnp *This)
{
  return ((__int64 (__fastcall *)(FxPkgPnp *))This->PnpEventEjectHardwareOverload)(This);
}
