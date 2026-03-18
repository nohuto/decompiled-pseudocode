/*
 * XREFs of imp_VfWdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C00C12D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_POWER_FRAMEWORK_SETTINGS *))WdfVersion.Functions.pfnWdfDeviceWdmAssignPowerFrameworkSettings)(
           DriverGlobals,
           Device,
           PowerFrameworkSettings);
}
