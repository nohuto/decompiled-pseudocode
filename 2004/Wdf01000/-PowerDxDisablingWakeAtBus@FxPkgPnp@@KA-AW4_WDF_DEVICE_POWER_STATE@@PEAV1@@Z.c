/*
 * XREFs of ?PowerDxDisablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxDisablingWakeAtBus(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 819LL;
}
