/*
 * XREFs of imp_VfWdfRequestGetFileObject @ 0x1C00BEC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetFileObject(DriverGlobals, Request);
}
