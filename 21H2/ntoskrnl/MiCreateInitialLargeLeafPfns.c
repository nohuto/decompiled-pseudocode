/*
 * XREFs of MiCreateInitialLargeLeafPfns @ 0x1403F63D4
 * Callers:
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCreateInitialLargeLeafPfns(__int64 a1, __int64 a2, int a3, char a4, unsigned __int16 a5, int a6)
{
  __m128i v6; // xmm2
  __int64 v8; // r10
  __m128i v9; // xmm1
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rdi
  __m128i *v12; // rcx
  char result; // al
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __m128i *v17; // r8
  __int128 v18; // [rsp+10h] [rbp-28h] BYREF
  __m128i v19; // [rsp+20h] [rbp-18h] BYREF

  v6 = (__m128i)xmmword_140C4E5C0;
  v8 = a1;
  v9 = (__m128i)xmmword_140C4E5D0;
  v19 = (__m128i)xmmword_140C4E5E0;
  v10 = _mm_srli_si128((__m128i)xmmword_140C4E5E0, 8).m128i_u64[0];
  v11 = MiLargePageSizes[a3];
  v19.m128i_i64[1] = (v10 ^ ((unsigned __int64)a5 << 39)) & 0x1FF8000000000LL ^ v10;
  v18 = xmmword_140C4E5D0;
  v12 = (__m128i *)(48 * a1 - 0x58000000000LL);
  if ( a6 )
  {
    *((_QWORD *)&v18 + 1) |= 0x8000000000000000uLL;
    v9 = _mm_loadu_si128((const __m128i *)&v18);
  }
  result = v19.m128i_i8[2] & 0x3F;
  v19.m128i_i8[2] = v19.m128i_i8[2] & 0x3F | (a4 << 6);
  v14 = v11 - 1;
  v15 = _mm_loadu_si128(&v19);
  do
  {
    if ( (v14 & v8) == 0 )
    {
      if ( !--a2 )
        return result;
      v12 += 3;
      ++v8;
    }
    if ( ((v8 ^ (v8 + a2 - 1)) & ~(v11 - 1)) != 0 )
      v16 = v11 - (v8 & v14);
    else
      v16 = a2;
    result = 48 * v16;
    v17 = &v12[3 * v16];
    if ( (unsigned __int64)(48 * v16) <= 0x1000 )
    {
      while ( v12 != v17 )
      {
        *v12 = v6;
        v12[1] = v9;
        v12[2] = v15;
        v12 += 3;
      }
    }
    else
    {
      while ( v12 != v17 )
      {
        _mm_stream_si128(v12, v6);
        _mm_stream_si128(v12 + 1, v9);
        _mm_stream_si128(v12 + 2, v15);
        v12 += 3;
      }
      _mm_sfence();
    }
    v8 += v16;
    v12 = v17;
    a2 -= v16;
  }
  while ( a2 );
  return result;
}
