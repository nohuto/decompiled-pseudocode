/*
 * XREFs of NtRecoverEnlistment @ 0x1403D0B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return __imp_NtRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
}
