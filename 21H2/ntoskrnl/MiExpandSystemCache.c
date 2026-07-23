/*
 * XREFs of MiExpandSystemCache @ 0x1402310DC
 * Callers:
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiSetSystemCacheReverseMap @ 0x140231284 (MiSetSystemCacheReverseMap.c)
 *     MiZeroSystemCacheViewCount @ 0x14023136C (MiZeroSystemCacheViewCount.c)
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     InsertTailListPte @ 0x14031CFF0 (InsertTailListPte.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(__int16 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *Pool; // rdi
  unsigned __int64 v7; // r9
  __m128i v8; // xmm1
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rbx

  *a2 = 0LL;
  if ( (unsigned __int64)qword_140C4E088 <= 0x4000000 )
    return 0LL;
  Pool = (__int64 *)MiAllocatePool(64LL, 320LL, 1666410829LL, a4);
  if ( !Pool )
    return 0LL;
  v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v8 = _mm_cvtsi32_si128(*a1);
  v9 = Pool + 9;
  v10 = 4LL;
  v11 = _mm_slli_epi64(
          _mm_and_si128(
            _mm_unpacklo_epi32(
              _mm_unpacklo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi16(v8, v8), 0), (__m128i)0LL),
              (__m128i)0LL),
            (__m128i)_xmm),
          6u);
  do
  {
    v12.m128i_i64[0] = *(v9 - 5);
    v12.m128i_i64[1] = *v9;
    *(v9 - 7) = 0LL;
    v13 = _mm_or_si128(_mm_and_si128(v12, (__m128i)_xmm_ffffffffffff003fffffffffffff003f), v11);
    *(v9 - 5) = v13.m128i_i64[0];
    *v9 = _mm_srli_si128(v13, 8).m128i_u64[0];
    *(v9 - 2) = v7;
    v9 += 10;
    --v10;
  }
  while ( v10 );
  v14 = 8LL;
  v15 = MiObtainSystemVa(1LL);
  v16 = v15;
  if ( !v15 )
  {
LABEL_12:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (unsigned int)(v15 >> 9) & 0xFFFFFFF8,
                        ((unsigned int)(v15 >> 9) & 0xFFFFFFF8) + 4088,
                        0,
                        8,
                        0) )
  {
    *a2 = v16;
    goto LABEL_12;
  }
  MiZeroSystemCacheViewCount(v17 << 25 >> 16);
  MiSetSystemCacheReverseMap(v16, Pool);
  do
  {
    InsertTailListPte(a1 + 892, v17);
    v17 += 512LL;
    --v14;
  }
  while ( v14 );
  return v17;
}
