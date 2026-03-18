/*
 * XREFs of imp_VfWdfDeviceGetDefaultQueue @ 0x1C00C09E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

WDFQUEUE__ *__fastcall imp_VfWdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDefaultQueue(DriverGlobals, Device);
}
