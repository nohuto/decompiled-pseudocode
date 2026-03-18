/*
 * XREFs of imp_VfWdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C00BF650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetIoInCallerContextCallback(DriverGlobals, CxDeviceInit, EvtIoInCallerContext);
}
