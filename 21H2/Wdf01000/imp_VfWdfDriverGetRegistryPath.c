/*
 * XREFs of imp_VfWdfDriverGetRegistryPath @ 0x1C00C1950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

wchar_t *__fastcall imp_VfWdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverGetRegistryPath(DriverGlobals, Driver);
}
