/*
 * XREFs of sub_18011CF24 @ 0x18011CF24
 * Callers:
 *     sub_18011D330 @ 0x18011D330 (sub_18011D330.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CF24(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128i si128; // [rsp+30h] [rbp-28h]
  _QWORD *v8; // [rsp+40h] [rbp-18h]

  v8 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(a3) = 0;
  LOBYTE(v6[0]) = 0;
  sub_18000FB34(v6, 0x17uLL, a3, "Operation was cancelled");
  sub_1801152FC((__int64)a1, v6, 0);
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
