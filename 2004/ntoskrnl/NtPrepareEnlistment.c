/*
 * XREFs of NtPrepareEnlistment @ 0x1403CD320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareEnlistment(EnlistmentHandle, TmVirtualClock);
}
