/*
 * XREFs of imp_VfWdfDeviceEnqueueRequest @ 0x1C00BF9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfDeviceEnqueueRequest)(
           DriverGlobals,
           Device,
           Request);
}
