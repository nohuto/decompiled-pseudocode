/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x180058F40
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x180058A10 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__m128i *a1, __int64 a2)
{
  __int16 v2; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int16 *v14; // rbx
  __int16 v15; // di
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  unsigned __int64 v20; // r8
  bool v21; // zf
  __int16 *v22; // rdx
  int v23; // ebx
  unsigned __int16 *v24; // rsi
  __int64 v25; // rdx
  __int64 i; // r11
  int v27; // ecx
  unsigned __int64 v28; // rdi
  __int64 v30; // rcx
  __int16 *v31; // rax
  __int16 *v32; // rdx
  __int64 v33; // rcx
  __int16 *v34; // rax
  __int64 v35; // rcx
  __int16 *v36; // rax
  __int64 v37; // rcx
  __int16 *v38; // rax
  __int64 v39; // rcx
  __int16 *v40; // rax
  __int64 v41; // rcx
  __int16 *v42; // rax
  __int64 v43; // rax
  __int16 *j; // rdx
  __m128i *v45; // rdi
  __int64 k; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2000200u), 0);
  a1[64] = v7;
  a1[65] = v7;
  do
  {
    v8 = *(_BYTE *)(v5 + a2);
    v9 = v8 & 0xF;
    if ( (v8 & 0xF) != 0 )
    {
      a1->m128i_i16[2 * v5] = a1[64].m128i_i16[v9];
      a1[64].m128i_i16[v9] = 2 * v6;
      v8 = *(_BYTE *)(v5 + a2);
    }
    v10 = (unsigned __int64)v8 >> 4;
    if ( v10 )
    {
      a1->m128i_i16[2 * v5 + 1] = a1[64].m128i_i16[v10];
      a1[64].m128i_i16[v10] = 2 * v6 + 1;
    }
    v5 = v6 + 1;
    v6 = v5;
  }
  while ( v5 < 0x100 );
  v11 = -1024;
  v12 = 1024LL;
  v13 = 15LL;
  v14 = &a1[65].m128i_u16[7];
  v15 = -1023;
  while ( 1 )
  {
    v16 = v15 == v11;
    if ( v15 < v11 )
    {
      v32 = &a1[194].m128i_i16[v12];
      v12 -= (unsigned __int16)(((unsigned __int16)(v11 - v15 - 1) >> 1) + 1);
      do
      {
        *v32-- = v15;
        v15 += 2;
        v16 = v15 == v11;
      }
      while ( v15 < v11 );
    }
    if ( v16 )
      return 3221226050LL;
    v15 = v11 + 1;
    v17 = *v14;
    if ( v17 != 512 )
    {
      v18 = (__int64)a1[194].m128i_i64 + 2 * v12;
      do
      {
        v18 -= 2LL;
        --v12;
        *(_WORD *)(v18 + 2) = v13 + 16 * v17;
        v17 = a1->m128i_u16[v17];
      }
      while ( v17 != 512 );
    }
    --v13;
    v19 = -(__int16)v12;
    --v14;
    v11 = -(__int16)v12;
    if ( v13 <= 0xA )
    {
      v20 = 1023LL;
      v21 = v15 == v19;
      if ( v15 < v19 )
      {
        v22 = &a1[193].m128i_i16[7];
        v20 = 1023LL - (unsigned __int16)(((unsigned __int16)(v19 - v15 - 1) >> 1) + 1);
        do
        {
          *v22-- = v15;
          v15 += 2;
          v21 = v15 == v11;
        }
        while ( v15 < v11 );
      }
      if ( !v21 )
      {
        v23 = 0;
        v24 = &a1[65].m128i_u16[2];
        v25 = 10LL;
        do
        {
          for ( i = *v24; i != 512; --v20 )
          {
            v2 = v25 + 16 * i;
            if ( v23 )
              return 3221226050LL;
            v27 = 10 - v25;
            if ( (v20 + 1) << (10 - (unsigned __int8)v25) > 0x400 )
              return 3221226050LL;
            v28 = v20 << v27;
            switch ( v27 )
            {
              case 0:
                goto LABEL_25;
              case 1:
                goto LABEL_24;
              case 2:
                goto LABEL_23;
              case 3:
                a1[66].m128i_i16[v28 + 7] = v2;
                a1[66].m128i_i16[v28 + 6] = v2;
                a1[66].m128i_i16[v28 + 5] = v2;
                a1[66].m128i_i16[v28 + 4] = v2;
LABEL_23:
                a1[66].m128i_i16[v28 + 3] = v2;
                a1[66].m128i_i16[v28 + 2] = v2;
LABEL_24:
                a1[66].m128i_i16[v28 + 1] = v2;
LABEL_25:
                a1[66].m128i_i16[v28] = v2;
                break;
              case 4:
                v30 = 4LL;
                v31 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v31 - 1) = v2;
                  *v31 = v2;
                  v31[1] = v2;
                  v31[2] = v2;
                  v31 += 4;
                  --v30;
                }
                while ( v30 );
                break;
              case 5:
                v33 = 8LL;
                v34 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v34 - 1) = v2;
                  *v34 = v2;
                  v34[1] = v2;
                  v34[2] = v2;
                  v34 += 4;
                  --v33;
                }
                while ( v33 );
                break;
              case 6:
                v35 = 16LL;
                v36 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v36 - 1) = v2;
                  *v36 = v2;
                  v36[1] = v2;
                  v36[2] = v2;
                  v36 += 4;
                  --v35;
                }
                while ( v35 );
                break;
              case 7:
                v39 = 32LL;
                v40 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v40 - 1) = v2;
                  *v40 = v2;
                  v40[1] = v2;
                  v40[2] = v2;
                  v40 += 4;
                  --v39;
                }
                while ( v39 );
                break;
              case 8:
                v37 = 64LL;
                v38 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v38 - 1) = v2;
                  *v38 = v2;
                  v38[1] = v2;
                  v38[2] = v2;
                  v38 += 4;
                  --v37;
                }
                while ( v37 );
                break;
              case 9:
                v41 = 128LL;
                v42 = &a1[66].m128i_i16[v28 + 1];
                do
                {
                  *(v42 - 1) = v2;
                  *v42 = v2;
                  v42[1] = v2;
                  v42[2] = v2;
                  v42 += 4;
                  --v41;
                }
                while ( v41 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( !v20 )
              v23 = 1;
            i = a1->m128i_u16[i];
          }
          v20 >>= 1;
          --v24;
          --v25;
        }
        while ( v25 );
        if ( v23 )
          return 0LL;
        v43 = 2LL;
        for ( j = &a1[64].m128i_i16[2]; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v43 > 0xF )
          {
            if ( a1[64].m128i_i16[1] == 512 )
              return 3221226050LL;
            v45 = a1 + 66;
            for ( k = 512LL; k; --k )
            {
              v45->m128i_i16[0] = v2;
              v45 = (__m128i *)((char *)v45 + 2);
            }
            return 0LL;
          }
        }
      }
      return 3221226050LL;
    }
  }
}
