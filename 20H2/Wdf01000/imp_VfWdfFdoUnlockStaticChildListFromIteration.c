/*
 * XREFs of imp_VfWdfFdoUnlockStaticChildListFromIteration @ 0x1C00BCD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfFdoUnlockStaticChildListFromIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  WdfVersion.Functions.pfnWdfFdoUnlockStaticChildListFromIteration(DriverGlobals, Fdo);
}
