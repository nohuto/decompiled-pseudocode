/*
 * XREFs of imp_VfWdfRequestGetInformation @ 0x1C00C2C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetInformation(DriverGlobals, Request);
}
