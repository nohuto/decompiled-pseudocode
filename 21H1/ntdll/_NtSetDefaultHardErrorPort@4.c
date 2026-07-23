/*
 * XREFs of _NtSetDefaultHardErrorPort@4 @ 0x4B2F4250
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  return Wow64SystemServiceCall();
}
