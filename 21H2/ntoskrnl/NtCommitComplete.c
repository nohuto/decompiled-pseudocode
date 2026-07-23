/*
 * XREFs of NtCommitComplete @ 0x1403D0870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtCommitComplete(EnlistmentHandle, TmVirtualClock);
}
