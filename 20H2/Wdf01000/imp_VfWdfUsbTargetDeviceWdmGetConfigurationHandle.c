/*
 * XREFs of imp_VfWdfUsbTargetDeviceWdmGetConfigurationHandle @ 0x1C00BF6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfUsbTargetDeviceWdmGetConfigurationHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return WdfVersion.Functions.pfnWdfUsbTargetDeviceWdmGetConfigurationHandle(DriverGlobals, UsbDevice);
}
