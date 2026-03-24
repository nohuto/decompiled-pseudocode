/*
 * XREFs of imp_VfWdfRegistryWdmGetHandle @ 0x1C00C26D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfRegistryWdmGetHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return WdfVersion.Functions.pfnWdfRegistryWdmGetHandle(DriverGlobals, Key);
}
