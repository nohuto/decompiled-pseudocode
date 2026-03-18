/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1402AD3D0
 * Callers:
 *     sub_1406B9AE8 @ 0x1406B9AE8 (sub_1406B9AE8.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14089D358 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1409E33A8 (ViPoolLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
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
