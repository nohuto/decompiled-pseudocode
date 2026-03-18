/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x140354470
 * Callers:
 *     sub_14070529C @ 0x14070529C (sub_14070529C.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140896388 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1409DD328 (ViPoolLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1403544A0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
