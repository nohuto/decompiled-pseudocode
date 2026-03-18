/*
 * XREFs of imp_VfWdfChildListGetDevice @ 0x1C00BF140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfChildListGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCHILDLIST__ *ChildList)
{
  return WdfVersion.Functions.pfnWdfChildListGetDevice(DriverGlobals, ChildList);
}
