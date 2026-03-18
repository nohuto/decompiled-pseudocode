/*
 * XREFs of MiExpandSystemCache @ 0x140300998
 * Callers:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 * Callees:
 *     InsertTailListPte @ 0x140223440 (InsertTailListPte.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiSetSystemCacheReverseMap @ 0x140300B40 (MiSetSystemCacheReverseMap.c)
 *     MiZeroSystemCacheViewCount @ 0x140300C28 (MiZeroSystemCacheViewCount.c)
 *     MiObtainSystemVa @ 0x14030124C (MiObtainSystemVa.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 *Pool; // rdi
  unsigned __int64 v5; // r9
  __m128i v6; // xmm1
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx

  *a2 = 0LL;
  if ( (unsigned __int64)qword_140C4DF88 <= 0x4000000 )
    return 0LL;
  Pool = (__int64 *)MiAllocatePool(64, 0x140uLL, 0x6353694Du);
  if ( !Pool )
    return 0LL;
  v5 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v6 = _mm_cvtsi32_si128(*(__int16 *)a1);
  v7 = Pool + 9;
  v8 = 4LL;
  v9 = _mm_slli_epi64(
         _mm_and_si128(
           _mm_unpacklo_epi32(
             _mm_unpacklo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi16(v6, v6), 0), (__m128i)0LL),
             (__m128i)0LL),
           (__m128i)_xmm),
         6u);
  do
  {
    v10.m128i_i64[0] = *(v7 - 5);
    v10.m128i_i64[1] = *v7;
    *(v7 - 7) = 0LL;
    v11 = _mm_or_si128(_mm_and_si128(v10, (__m128i)_xmm_ffffffffffff003fffffffffffff003f), v9);
    *(v7 - 5) = v11.m128i_i64[0];
    *v7 = _mm_srli_si128(v11, 8).m128i_u64[0];
    *(v7 - 2) = v5;
    v7 += 10;
    --v8;
  }
  while ( v8 );
  v12 = 8LL;
  v13 = MiObtainSystemVa(1LL);
  v14 = v13;
  if ( !v13 )
  {
LABEL_12:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(v15, v15 + 4088, 0, 8, 0) )
  {
    *a2 = v14;
    goto LABEL_12;
  }
  MiZeroSystemCacheViewCount(v15 << 25 >> 16);
  MiSetSystemCacheReverseMap(v14, Pool);
  do
  {
    InsertTailListPte(a1 + 223, (unsigned __int64 *)v15);
    v15 += 512LL;
    --v12;
  }
  while ( v12 );
  return v15;
}
