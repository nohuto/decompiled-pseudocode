/*
 * XREFs of imp_VfWdfCollectionGetLastItem @ 0x1C00C0340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCollectionGetLastItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetLastItem(DriverGlobals, Collection);
}
