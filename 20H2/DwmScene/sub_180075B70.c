/*
 * XREFs of sub_180075B70 @ 0x180075B70
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180075B70(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_18006156C((__int64)(a1 + 1), (__int64)&v5);
  a1[114] = *a2;
  a1[115] = a2[1];
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 88LL))(a1, a2);
  if ( BYTE8(v5) )
    return sub_180061A34(v5);
  return result;
}
