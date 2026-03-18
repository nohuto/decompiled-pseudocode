/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140322850
 * Callers:
 *     IovpLogStackTrace @ 0x1409C2958 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1403544A0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}
