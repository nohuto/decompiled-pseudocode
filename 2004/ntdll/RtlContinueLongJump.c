/*
 * XREFs of RtlContinueLongJump @ 0x180078760
 * Callers:
 *     RtlRestoreContext @ 0x1800A1170 (RtlRestoreContext.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwContinueEx @ 0x18009E220 (ZwContinueEx.c)
 */

__int64 __fastcall RtlContinueLongJump(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  LODWORD(v2) = 2;
  v3 = 0LL;
  return ZwContinueEx(a1, &v2);
}
