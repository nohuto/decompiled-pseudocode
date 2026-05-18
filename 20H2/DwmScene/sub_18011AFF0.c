/*
 * XREFs of sub_18011AFF0 @ 0x18011AFF0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011AFF0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __m128i v7; // [rsp+28h] [rbp-40h] BYREF
  __m128i si128; // [rsp+38h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  v7.m128i_i16[0] = 0;
  if ( (unsigned int)sub_1801187C4(a1, a3, &v7) )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  else
  {
    *(__m128i *)a2 = v7;
    *(__m128i *)(a2 + 16) = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
    v7.m128i_i16[0] = 0;
  }
  unknown_libname_101(v7.m128i_i64);
  unknown_libname_101((__int64 *)a4);
  return a2;
}
