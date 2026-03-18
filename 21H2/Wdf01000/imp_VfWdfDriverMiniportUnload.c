/*
 * XREFs of imp_VfWdfDriverMiniportUnload @ 0x1C00C1990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDriverMiniportUnload(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  WdfVersion.Functions.pfnWdfDriverMiniportUnload(DriverGlobals, Driver);
}
