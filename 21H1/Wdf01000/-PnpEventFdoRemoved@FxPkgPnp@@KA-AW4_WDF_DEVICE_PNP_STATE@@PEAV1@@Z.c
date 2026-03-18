/*
 * XREFs of ?PnpEventFdoRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFdoRemoved(FxPkgPnp *This)
{
  return ((__int64 (__fastcall *)(FxPkgPnp *))This->PnpEventFdoRemovedOverload)(This);
}
