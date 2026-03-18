/*
 * XREFs of imp_VfWdfCollectionGetLastItem @ 0x1C00BF390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCollectionGetLastItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetLastItem(DriverGlobals, Collection);
}
