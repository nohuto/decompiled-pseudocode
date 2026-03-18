/*
 * XREFs of imp_VfWdfRequestCreateFromIrp @ 0x1C00C3B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        __int64 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, _IRP *, __int64, WDFREQUEST__ **))WdfVersion.Functions.pfnWdfRequestCreateFromIrp)(
           DriverGlobals,
           RequestAttributes,
           Irp,
           RequestFreesIrp,
           Request);
}
