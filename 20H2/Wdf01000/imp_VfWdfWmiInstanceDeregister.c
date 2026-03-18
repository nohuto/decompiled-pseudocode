/*
 * XREFs of imp_VfWdfWmiInstanceDeregister @ 0x1C00BFAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfWmiInstanceDeregister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  WdfVersion.Functions.pfnWdfWmiInstanceDeregister(DriverGlobals, WmiInstance);
}
