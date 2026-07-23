/*
 * XREFs of _NtRecoverEnlistment@8 @ 0x4B2F4010
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return Wow64SystemServiceCall();
}
