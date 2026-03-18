/*
 * XREFs of imp_VfWdfCxDeviceInitSetRequestAttributes @ 0x1C00C0660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetRequestAttributes(DriverGlobals, CxDeviceInit, RequestAttributes);
}
