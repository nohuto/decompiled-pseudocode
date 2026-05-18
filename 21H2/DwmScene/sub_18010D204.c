/*
 * XREFs of sub_18010D204 @ 0x18010D204
 * Callers:
 *     sub_18010F6E0 @ 0x18010F6E0 (sub_18010F6E0.c)
 * Callees:
 *     sub_18010CDEC @ 0x18010CDEC (sub_18010CDEC.c)
 *     sub_18010CE84 @ 0x18010CE84 (sub_18010CE84.c)
 *     sub_18010D18C @ 0x18010D18C (sub_18010D18C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18010D204(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // xmm0_8
  __int64 **v6; // rbx
  int v8; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-30h]
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = a1;
  v8 = 0;
  sub_18010D18C((__int64)a1, &v8);
  v4 = a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  if ( a2->m128i_i64[0] != v5 )
  {
    v6 = (__int64 **)(a1 + 1);
    do
    {
      sub_18010CDEC((__int64)(a1 + 1), **v6, v4);
      sub_18010CE84(a1, (__int64)v10, (size_t *)(**v6 + 16), **v6);
      v4 += 40LL;
    }
    while ( v4 != v5 );
  }
  return a1;
}
