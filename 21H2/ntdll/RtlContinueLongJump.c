/*
 * XREFs of RtlContinueLongJump @ 0x180079890
 * Callers:
 *     RtlRestoreContext @ 0x1800A19B0 (RtlRestoreContext.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwContinueEx @ 0x18009EA10 (ZwContinueEx.c)
 */

NTSTATUS __fastcall RtlContinueLongJump(struct _CONTEXT *a1)
{
  __int128 ContinueArgument; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  ContinueArgument = 0LL;
  LODWORD(ContinueArgument) = 2;
  v3 = 0LL;
  return ZwContinueEx(a1, &ContinueArgument);
}
