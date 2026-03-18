/*
 * XREFs of imp_WdfDeviceSetDeviceInterfaceState @ 0x1C005D510
 * Callers:
 *     <none>
 * Callees:
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B7E0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 */

void __fastcall imp_WdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfDeviceSetDeviceInterfaceStateWorker(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    RefString,
    IsInterfaceEnabled,
    WdfUseDefault);
}
