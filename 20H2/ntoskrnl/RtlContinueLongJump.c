/*
 * XREFs of RtlContinueLongJump @ 0x14058DFA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 */

NTSTATUS __fastcall RtlContinueLongJump(_CONTEXT *a1)
{
  __int128 ContinueArgument; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  ContinueArgument = 0LL;
  LODWORD(ContinueArgument) = 2;
  v3 = 0LL;
  return NtContinueEx(a1, &ContinueArgument);
}
