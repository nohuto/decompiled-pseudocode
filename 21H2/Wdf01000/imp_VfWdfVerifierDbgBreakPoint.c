/*
 * XREFs of imp_VfWdfVerifierDbgBreakPoint @ 0x1C00C49B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfVerifierDbgBreakPoint(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  WdfVersion.Functions.pfnWdfVerifierDbgBreakPoint(DriverGlobals);
}
