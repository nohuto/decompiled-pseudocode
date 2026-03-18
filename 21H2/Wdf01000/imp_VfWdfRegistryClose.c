/*
 * XREFs of imp_VfWdfRegistryClose @ 0x1C00C34C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  WdfVersion.Functions.pfnWdfRegistryClose(DriverGlobals, Key);
}
