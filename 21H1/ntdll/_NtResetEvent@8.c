/*
 * XREFs of _NtResetEvent@8 @ 0x4B2F4100
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return Wow64SystemServiceCall();
}
