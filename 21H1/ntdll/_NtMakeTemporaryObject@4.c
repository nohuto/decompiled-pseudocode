/*
 * XREFs of _NtMakeTemporaryObject@4 @ 0x4B2F3A70
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtMakeTemporaryObject(HANDLE Handle)
{
  return Wow64SystemServiceCall();
}
