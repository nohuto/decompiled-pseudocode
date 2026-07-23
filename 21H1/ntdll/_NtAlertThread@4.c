/*
 * XREFs of _NtAlertThread@4 @ 0x4B2F3070
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAlertThread(HANDLE ThreadHandle)
{
  return Wow64SystemServiceCall();
}
