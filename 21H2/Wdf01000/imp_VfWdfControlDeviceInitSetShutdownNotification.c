/*
 * XREFs of imp_VfWdfControlDeviceInitSetShutdownNotification @ 0x1C00BF550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfControlDeviceInitSetShutdownNotification(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *Notification)(WDFDEVICE__ *),
        __int64 Flags)
{
  WdfVersion.Functions.pfnWdfControlDeviceInitSetShutdownNotification(DriverGlobals, DeviceInit, Notification, Flags);
}
