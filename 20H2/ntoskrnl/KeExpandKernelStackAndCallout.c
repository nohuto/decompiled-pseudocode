/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140331040
 * Callers:
 *     IovpLogStackTrace @ 0x1409C8988 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal(
           (void (__fastcall *)(ULONG_PTR))Callout,
           (ULONG_PTR)Parameter,
           Size,
           2,
           0LL);
}
