/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0
 * Callers:
 *     sub_1406B6278 @ 0x1406B6278 (sub_1406B6278.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14093F428 (IopIssueSystemEnvironmentRequest.c)
 *     ViPtLogStackTrace @ 0x140A9DFBC (ViPtLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
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
