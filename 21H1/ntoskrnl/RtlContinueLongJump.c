/*
 * XREFs of RtlContinueLongJump @ 0x140589E80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     NtContinueEx @ 0x1403F6580 (NtContinueEx.c)
 */

__int64 __fastcall RtlContinueLongJump(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  return NtContinueEx(a1, (unsigned __int64)&v5, a3, a4, 2);
}
