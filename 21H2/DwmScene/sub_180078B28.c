/*
 * XREFs of sub_180078B28 @ 0x180078B28
 * Callers:
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007D04C @ 0x18007D04C (sub_18007D04C.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180078B28(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  sub_180066E84(a1 + 312, (__int64)&v3);
  sub_18007D04C(a1);
  result = *(_QWORD *)(a1 + 296);
  if ( *(_QWORD *)(a1 + 288) != result )
    result = sub_18011BCAC(&unk_18020F648, 5LL, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  if ( BYTE8(v3) )
    return sub_180067304(v3);
  return result;
}
