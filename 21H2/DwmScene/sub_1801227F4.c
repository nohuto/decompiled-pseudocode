/*
 * XREFs of sub_1801227F4 @ 0x1801227F4
 * Callers:
 *     sub_180122C00 @ 0x180122C00 (sub_180122C00.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801227F4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  _QWORD *v8; // [rsp+40h] [rbp-18h]

  v8 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(a3) = 0;
  LOBYTE(v6[0]) = 0;
  sub_18000FC14(v6, 0x17uLL, a3, "Operation was cancelled");
  sub_18011ABCC((__int64)a1, v6, 0);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v4 = v6[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v4 = *(_QWORD *)(v6[0] - 8);
      if ( (unsigned __int64)(v6[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
