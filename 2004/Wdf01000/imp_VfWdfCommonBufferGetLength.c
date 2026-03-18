/*
 * XREFs of imp_VfWdfCommonBufferGetLength @ 0x1C00BF4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfCommonBufferGetLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetLength(DriverGlobals, CommonBuffer);
}
