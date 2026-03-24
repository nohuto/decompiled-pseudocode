/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1402D3350
 * Callers:
 *     IovpLogStackTrace @ 0x1409C5978 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140329FF0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}
