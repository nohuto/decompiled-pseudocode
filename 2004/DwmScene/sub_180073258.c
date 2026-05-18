/*
 * XREFs of sub_180073258 @ 0x180073258
 * Callers:
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18007777C @ 0x18007777C (sub_18007777C.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180073258(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  sub_1800615B4(a1 + 312, (__int64)&v3);
  sub_18007777C(a1);
  result = *(_QWORD *)(a1 + 296);
  if ( *(_QWORD *)(a1 + 288) != result )
    result = sub_1801163DC(&unk_1802085C8, 5LL, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  if ( BYTE8(v3) )
    return sub_180061A34(v3);
  return result;
}
