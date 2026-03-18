/*
 * XREFs of imp_VfWdfInterruptQueueWorkItemForIsr @ 0x1C00C1ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfInterruptQueueWorkItemForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptQueueWorkItemForIsr)(
           DriverGlobals,
           Interrupt);
}
