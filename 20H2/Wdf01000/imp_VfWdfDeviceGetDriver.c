/*
 * XREFs of imp_VfWdfDeviceGetDriver @ 0x1C00BBAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

WDFDRIVER__ *__fastcall imp_VfWdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDriver(DriverGlobals, Device);
}
