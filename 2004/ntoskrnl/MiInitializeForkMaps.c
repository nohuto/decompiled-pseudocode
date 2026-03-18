/*
 * XREFs of MiInitializeForkMaps @ 0x140555D6C
 * Callers:
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140368E74 (MiMapSinglePage.c)
 *     memset @ 0x14040A280 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  __m128i si128; // xmm0
  ULONG_PTR v5; // rax

  memset(a2, 0, 0x48uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(a2 + 1) = si128;
  a2[3] = si128.m128i_i64[0];
  *a2 = a1;
  v5 = MiMapSinglePage(0LL, 0LL, 1073741856LL, 2uLL);
  a2[7] = v5;
  return v5 != 0;
}
