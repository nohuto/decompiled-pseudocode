/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14025D2A0
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 *     IovpLogStackTrace @ 0x140A80FC8 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}
