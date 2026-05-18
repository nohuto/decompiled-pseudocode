/*
 * XREFs of sub_180074B7C @ 0x180074B7C
 * Callers:
 *     sub_18001A2E0 @ 0x18001A2E0 (sub_18001A2E0.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180074B7C(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  sub_18006156C(a1 + 8, (__int64)&v3);
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 8LL))(a1, &v3);
  if ( BYTE8(v3) )
    return sub_180061A34(v3);
  return result;
}
