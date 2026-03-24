/*
 * XREFs of NtPrePrepareComplete @ 0x1403D08C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrePrepareComplete(EnlistmentHandle, TmVirtualClock);
}
