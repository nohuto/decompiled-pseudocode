/*
 * XREFs of imp_VfWdfPdoInitAllowForwardingRequestToParent @ 0x1C00BE200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitAllowForwardingRequestToParent(DriverGlobals, DeviceInit);
}
