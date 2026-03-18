/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1402F8490
 * Callers:
 *     sub_1406AF3E0 @ 0x1406AF3E0 (sub_1406AF3E0.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1408976A8 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1409DD388 (ViPoolLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402F84C0 (KeExpandKernelStackAndCalloutInternal.c)
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
