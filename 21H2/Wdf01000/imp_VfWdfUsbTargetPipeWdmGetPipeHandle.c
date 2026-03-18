/*
 * XREFs of imp_VfWdfUsbTargetPipeWdmGetPipeHandle @ 0x1C00C4950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *UsbPipe)
{
  return WdfVersion.Functions.pfnWdfUsbTargetPipeWdmGetPipeHandle(DriverGlobals, UsbPipe);
}
