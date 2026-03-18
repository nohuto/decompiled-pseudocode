/*
 * XREFs of imp_VfWdfPdoClearEjectionRelationsDevices @ 0x1C00C3130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoClearEjectionRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoClearEjectionRelationsDevices(DriverGlobals, Device);
}
