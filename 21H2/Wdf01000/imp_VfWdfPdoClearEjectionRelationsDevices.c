/*
 * XREFs of imp_VfWdfPdoClearEjectionRelationsDevices @ 0x1C00C2130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoClearEjectionRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoClearEjectionRelationsDevices(DriverGlobals, Device);
}
