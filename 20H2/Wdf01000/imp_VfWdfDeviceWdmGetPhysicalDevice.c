/*
 * XREFs of imp_VfWdfDeviceWdmGetPhysicalDevice @ 0x1C00BC3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetPhysicalDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetPhysicalDevice(DriverGlobals, Device);
}
