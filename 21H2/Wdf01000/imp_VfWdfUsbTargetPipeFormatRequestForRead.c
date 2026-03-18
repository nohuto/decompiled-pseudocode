/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForRead @ 0x1C00C4770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForRead)(
           DriverGlobals,
           Pipe,
           Request,
           ReadMemory,
           ReadOffset);
}
