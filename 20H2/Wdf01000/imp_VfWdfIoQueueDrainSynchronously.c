/*
 * XREFs of imp_VfWdfIoQueueDrainSynchronously @ 0x1C00BD0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoQueueDrainSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueDrainSynchronously(DriverGlobals, Queue);
}
