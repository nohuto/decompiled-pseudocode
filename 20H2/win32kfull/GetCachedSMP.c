/*
 * XREFs of GetCachedSMP @ 0x1C01007BC
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C0100710 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0100938 (ComputeBytesPerScanLine.c)
 *     FindCachedSMP @ 0x1C010098C (FindCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1C0148890 (CreateStandardMonoPattern.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, __int16 *a2)
{
  __int16 *v2; // rbx
  __int64 v3; // r15
  char v4; // dl
  char v5; // al
  __m128i *CachedSMP; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbp
  __m128i v9; // xmm0
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // r10
  int v12; // r11d
  char *v13; // rsi
  char *v14; // r12
  unsigned int v15; // edi
  unsigned __int16 v16; // cx
  __int16 v17; // r13
  unsigned __int64 v18; // r10
  int v19; // eax
  __int16 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rsi
  size_t v23; // r15
  unsigned int i; // ecx
  char *v26; // [rsp+28h] [rbp-60h]
  __m128i v27; // [rsp+30h] [rbp-58h]

  v2 = a2;
  v3 = a1;
  v4 = *((_BYTE *)a2 + 4);
  if ( !v4 )
  {
    *((_BYTE *)v2 + 4) = 8;
    v4 = 8;
  }
  v5 = *((_BYTE *)v2 + 5);
  if ( !v5 )
  {
    *((_BYTE *)v2 + 5) = 15;
    v5 = 15;
  }
  if ( *((unsigned __int8 *)v2 + 3) >= 0x12u )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v4 != 8 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  if ( v5 != 15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  CachedSMP = (__m128i *)FindCachedSMP(a1, *((unsigned __int8 *)v2 + 3));
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  v7 = *((unsigned __int8 *)v2 + 2);
  v8 = CachedSMP + 1;
  v27 = *CachedSMP;
  v9 = _mm_srli_si128(*CachedSMP, 8);
  v2[5] = v9.m128i_i16[2];
  v2[4] = v9.m128i_i16[1];
  v10 = ComputeBytesPerScanLine(1LL, v7, v9.m128i_u16[1]);
  v13 = (char *)*((_QWORD *)v2 + 2);
  v14 = v13;
  v15 = v12 * v10;
  v16 = v10;
  v2[3] = v10;
  v26 = v13;
  if ( v13 )
  {
    v17 = *v2;
    v18 = HIWORD(v11);
    v19 = v18;
    if ( (*v2 & 1) == 0 )
    {
      v8 = (__m128i *)((char *)v8 + (int)v18 * (v12 - 1));
      v19 = -(int)v18;
    }
    if ( (_WORD)v12 )
    {
      v20 = v27.m128i_i16[6];
      v21 = v16;
      v22 = v19;
      v23 = (unsigned int)v18;
      do
      {
        --v20;
        memmove(v14, v8, v23);
        v14 += v21;
        v8 = (__m128i *)((char *)v8 + v22);
      }
      while ( v20 );
      v2 = a2;
      v13 = v26;
      v3 = a1;
    }
    if ( (v17 & 2) != 0 )
    {
      for ( i = v15; i; --i )
      {
        *v13 = ~*v13;
        ++v13;
      }
    }
  }
  EngReleaseSemaphore(hsem);
  if ( !v15 )
    return (unsigned int)CreateStandardMonoPattern(v3, v2);
  return v15;
}
