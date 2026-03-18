/*
 * XREFs of imp_VfWdfFdoGetDefaultChildList @ 0x1C00BCA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

WDFCHILDLIST__ *__fastcall imp_VfWdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  return WdfVersion.Functions.pfnWdfFdoGetDefaultChildList(DriverGlobals, Fdo);
}
