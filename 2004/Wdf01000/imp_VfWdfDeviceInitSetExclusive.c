/*
 * XREFs of imp_VfWdfDeviceInitSetExclusive @ 0x1C00BFD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetExclusive(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsExclusive)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetExclusive(DriverGlobals, DeviceInit, IsExclusive);
}
