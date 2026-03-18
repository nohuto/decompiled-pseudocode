/*
 * XREFs of NtUserfnINOUTLPRECT @ 0x1C0153D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPRECT(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v9 = 0LL;
  v7 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v7 = (__int128 *)MmUserProbeAddress;
  v9 = *v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  return result;
}
