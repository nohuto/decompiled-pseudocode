/*
 * XREFs of MiNodeLargeFreeZeroPages2 @ 0x140556FA0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeLargeFreeZeroPages2(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r15
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rsi
  __m128i v9; // xmm1
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r11
  __m128i v16; // xmm0
  __m128i v17; // xmm0

  v2 = 0LL;
  v3 = 8LL * a2;
  v4 = MiLargePageSizes;
  v5 = 0LL;
  v6 = ((__int64)a2 << 8) + a1 + 48;
  v7 = 2LL;
  do
  {
    v8 = *v4;
    v9 = 0LL;
    v10 = v3;
    v11 = (__int64 *)v6;
    v12 = 2LL;
    do
    {
      v13 = 0LL;
      v14 = 4LL;
      do
      {
        v15 = 2LL;
        do
        {
          v16.m128i_i64[0] = *v11;
          v16.m128i_i64[1] = v11[1];
          v11 += 2;
          v17 = _mm_add_epi64(v16, v9);
          v9 = v17;
          --v15;
        }
        while ( v15 );
        ++v13;
        --v14;
      }
      while ( v14 );
      v10 += 4LL;
      --v12;
    }
    while ( v12 );
    v6 += 1072LL;
    ++v4;
    v5 += 134LL;
    v2 += _mm_add_epi64(v17, _mm_srli_si128(v17, 8)).m128i_u64[0] * v8;
    --v7;
  }
  while ( v7 );
  return v2;
}
