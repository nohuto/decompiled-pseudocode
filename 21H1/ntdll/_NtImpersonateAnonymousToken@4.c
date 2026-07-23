/*
 * XREFs of _NtImpersonateAnonymousToken@4 @ 0x4B2F3940
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  return Wow64SystemServiceCall();
}
