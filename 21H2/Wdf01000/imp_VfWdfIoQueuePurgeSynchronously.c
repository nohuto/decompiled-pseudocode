/*
 * XREFs of imp_VfWdfIoQueuePurgeSynchronously @ 0x1C00C21A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueuePurgeSynchronously(DriverGlobals, Queue);
}
