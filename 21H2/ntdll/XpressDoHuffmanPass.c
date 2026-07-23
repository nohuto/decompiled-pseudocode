/*
 * XREFs of XpressDoHuffmanPass @ 0x18005B890
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B090 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010CE74 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, char *a4, int a5)
{
  char *v7; // rax
  __int128 *v8; // rdx
  __int64 v9; // r9
  __int128 v12; // xmm0
  char *v13; // r12
  char *v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // ax
  char *v17; // r14
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rcx
  unsigned __int16 v21; // dx
  unsigned __int16 *v22; // r11
  unsigned __int64 v23; // rcx
  __int64 v24; // r11
  char *v25; // r10
  __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // si
  unsigned __int64 v29; // r9
  __int16 v30; // ax
  unsigned __int16 v31; // bx
  unsigned __int8 v32; // r11
  int v33; // ecx
  bool v34; // sf
  char v35; // cl
  unsigned __int16 v36; // dx
  char v37; // cl
  unsigned __int64 v38; // rcx
  unsigned __int16 v39; // dx
  __int16 v40; // r8

  v7 = a4;
  v8 = (__int128 *)(a1 + 31264);
  v9 = 2LL;
  do
  {
    v7 += 128;
    v12 = *v8;
    v8 += 8;
    *((_OWORD *)v7 - 8) = v12;
    *((_OWORD *)v7 - 7) = *(v8 - 7);
    *((_OWORD *)v7 - 6) = *(v8 - 6);
    *((_OWORD *)v7 - 5) = *(v8 - 5);
    *((_OWORD *)v7 - 4) = *(v8 - 4);
    *((_OWORD *)v7 - 3) = *(v8 - 3);
    *((_OWORD *)v7 - 2) = *(v8 - 2);
    *((_OWORD *)v7 - 1) = *(v8 - 1);
    --v9;
  }
  while ( v9 );
  v13 = a4 + 256;
  v14 = a4 + 258;
  v15 = 16LL;
  v16 = 0;
  v17 = a4 + 260;
LABEL_4:
  v18 = *(_DWORD *)a2;
  a2 += 4;
  v19 = 2 * v18 + 1;
  if ( v18 >= 0 )
  {
LABEL_5:
    v20 = *a2++;
    v21 = *(_WORD *)(a1 + 4 * v20 + 2);
    v22 = (unsigned __int16 *)(a1 + 4 * v20);
    v23 = *v22;
    if ( v15 >= v23 )
    {
      v15 -= *v22;
      v16 = v21 | (v16 << v23);
    }
    else
    {
      *(_WORD *)v13 = (v16 << v15) | (v21 >> (v23 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 += 16LL - (unsigned int)v23;
      v16 = v22[1];
    }
    goto LABEL_15;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v24 = *a2;
    v25 = (char *)(a2 + 1);
    v26 = a1 + 4 * v24;
    v27 = *(unsigned __int16 *)(v26 + 1024);
    v28 = *(_WORD *)(v26 + 1026);
    if ( v15 < v27 )
    {
      *(_WORD *)v13 = (v16 << v15) | (v28 >> (v27 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v29 = 16 - v27 + v15;
      v30 = *(_WORD *)(v26 + 1026);
    }
    else
    {
      v29 = v15 - v27;
      v30 = v28 | (v16 << v27);
    }
    if ( (v24 & 0xF) == 0xF )
    {
      v35 = *v25++;
      *v17++ = v35;
      if ( v35 == -1 )
      {
        v36 = *(_WORD *)v25;
        *v17 = *(_WORD *)v25;
        v37 = v25[1];
        v25 += 2;
        v17[1] = v37;
        v17 += 2;
        if ( !v36 )
        {
          *v17 = *v25;
          v17[1] = v25[1];
          v17[2] = v25[2];
          v17[3] = v25[3];
          v17 += 4;
          v25 += 4;
        }
      }
    }
    v31 = *(_WORD *)v25;
    v32 = (unsigned __int8)v24 >> 4;
    if ( v29 < v32 )
    {
      *(_WORD *)v13 = (v30 << v29) | (v31 >> (v32 - v29));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 = 16LL - v32 + v29;
      v16 = *(_WORD *)v25;
    }
    else
    {
      v15 = v29 - v32;
      v16 = v31 | (v30 << v32);
    }
    a2 = (unsigned __int8 *)(v25 + 2);
LABEL_15:
    v33 = 2 * v19;
    v34 = v19 < 0;
    v19 *= 2;
    if ( !v34 )
      goto LABEL_5;
    if ( !v33 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v38 = *(unsigned __int16 *)(a1 + 1024);
    v39 = *(_WORD *)(a1 + 1026);
    v40 = *(_WORD *)(a1 + 1024);
    if ( v15 >= v38 )
    {
      LOBYTE(v15) = v15 - v40;
      v16 = v39 | (v16 << v38);
    }
    else
    {
      *(_WORD *)v13 = (v16 << v15) | (v39 >> (v38 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      LOBYTE(v15) = 16 - v40 + v15;
      v16 = *(_WORD *)(a1 + 1026);
    }
  }
  *(_WORD *)v13 = v16 << v15;
  *(_WORD *)v14 = 0;
  return v17;
}
