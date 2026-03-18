/*
 * XREFs of imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C00C3320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfPdoRemoveEjectionRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
