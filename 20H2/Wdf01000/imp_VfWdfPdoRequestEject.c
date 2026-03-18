/*
 * XREFs of imp_VfWdfPdoRequestEject @ 0x1C00BE340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoRequestEject(DriverGlobals, Device);
}
