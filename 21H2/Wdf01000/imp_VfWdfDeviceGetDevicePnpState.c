/*
 * XREFs of imp_VfWdfDeviceGetDevicePnpState @ 0x1C00C0A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceGetDevicePnpState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetDevicePnpState)(
           DriverGlobals,
           Device);
}
