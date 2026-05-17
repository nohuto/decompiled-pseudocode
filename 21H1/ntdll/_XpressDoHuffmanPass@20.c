/*
 * XREFs of _XpressDoHuffmanPass@20 @ 0x4B3757AC
 * Callers:
 *     _RtlCompressBufferXpressHuffMax@36 @ 0x4B372E62 (_RtlCompressBufferXpressHuffMax@36.c)
 *     _RtlCompressBufferXpressHuffStandard@36 @ 0x4B37343F (_RtlCompressBufferXpressHuffStandard@36.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(unsigned __int16 *a1, int *a2, unsigned int a3, char *a4, int a5)
{
  unsigned __int16 v6; // si
  unsigned int v7; // edi
  char *v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int16 *v12; // ecx
  unsigned int v13; // eax
  char *v14; // ecx
  unsigned __int16 *v15; // ecx
  unsigned __int8 v16; // al
  char *v17; // ebx
  unsigned __int16 *v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int16 v21; // si
  char *v22; // ecx
  unsigned int v23; // edi
  char v24; // al
  unsigned __int16 v25; // cx
  char v26; // al
  unsigned int v27; // eax
  char *v28; // eax
  unsigned int v29; // eax
  unsigned __int16 v30; // bx
  char *v31; // ecx
  unsigned __int8 v33; // [esp+Ch] [ebp-24h]
  unsigned __int16 v34; // [esp+10h] [ebp-20h]
  int v35; // [esp+14h] [ebp-1Ch]
  unsigned __int16 *v36; // [esp+18h] [ebp-18h]
  _WORD *v37; // [esp+18h] [ebp-18h]
  unsigned __int16 v38; // [esp+18h] [ebp-18h]
  unsigned __int16 v39; // [esp+1Ch] [ebp-14h]
  unsigned int v40; // [esp+1Ch] [ebp-14h]
  char *v42; // [esp+24h] [ebp-Ch]
  char *v43; // [esp+28h] [ebp-8h]
  char v44; // [esp+2Eh] [ebp-2h]
  unsigned __int8 v45; // [esp+2Fh] [ebp-1h]

  v43 = a4 + 256;
  qmemcpy(a4, a1 + 9480, 0x100u);
  v6 = 0;
  v42 = a4 + 258;
  v7 = 16;
  v8 = a4 + 260;
LABEL_2:
  v9 = *a2++;
  v10 = 2 * v9 + 1;
  v35 = v10;
  if ( v9 >= 0 )
  {
LABEL_3:
    v35 = v10;
    v11 = *(unsigned __int8 *)a2;
    a2 = (int *)((char *)a2 + 1);
    v12 = &a1[2 * v11];
    v13 = *v12;
    v36 = v12;
    v39 = v12[1];
    if ( v7 < v13 )
    {
      v14 = v43;
      v43 = v42;
      v42 = v8;
      v8 += 2;
      *(_WORD *)v14 = (v6 << v7) | (v39 >> (*v36 - v7));
      v6 = v36[1];
      v7 = v7 - v13 + 16;
    }
    else
    {
      v7 -= v13;
      v6 = v39 | (v6 << *v12);
    }
    goto LABEL_6;
  }
  while ( (unsigned int)a2 < a3 )
  {
    v15 = a1;
    _mm_lfence();
    v16 = *(_BYTE *)a2;
    v17 = (char *)a2 + 1;
    v45 = v16;
    v33 = v16;
    v18 = &v15[2 * v16];
    v19 = v18[512];
    v37 = v18 + 512;
    v34 = v18[513];
    v40 = v7 - v19;
    if ( v7 < v19 )
    {
      v22 = v43;
      v43 = v42;
      v42 = v8;
      v8 += 2;
      *(_WORD *)v22 = (v6 << v7) | (v34 >> (*v37 - v7));
      v20 = v40 + 16;
      v40 += 16;
      v21 = v37[1];
    }
    else
    {
      v20 = v7 - v19;
      v21 = v34 | (v6 << *v37);
    }
    v23 = v20;
    if ( (v33 & 0xF) == 0xF )
    {
      v24 = *v17++;
      *v8++ = v24;
      if ( v24 == -1 )
      {
        v25 = *(_WORD *)v17;
        *v8 = *(_WORD *)v17;
        v26 = v17[1];
        v17 += 2;
        v8[1] = v26;
        v8 += 2;
        if ( !v25 )
        {
          *v8 = *v17;
          v8[1] = v17[1];
          v8[2] = v17[2];
          v8[3] = v17[3];
          v8 += 4;
          v17 += 4;
        }
      }
    }
    v27 = v45 >> 4;
    v7 = v23 - v27;
    v44 = v45 >> 4;
    v38 = *(_WORD *)v17;
    if ( v40 < v27 )
    {
      *(_WORD *)v43 = (v21 << v40) | (v38 >> (v44 - v40));
      v28 = v42;
      v6 = *(_WORD *)v17;
      v42 = v8;
      v8 += 2;
      v43 = v28;
      v7 += 16;
    }
    else
    {
      v6 = v38 | (v21 << v44);
    }
    a2 = (int *)(v17 + 2);
LABEL_6:
    v10 = 2 * v35;
    if ( v35 >= 0 )
      goto LABEL_3;
    v35 *= 2;
    if ( !v10 )
      goto LABEL_2;
  }
  if ( a5 )
  {
    v29 = a1[512];
    v30 = a1[513];
    if ( v7 < v29 )
    {
      v31 = v43;
      v43 = v42;
      v42 = v8;
      v8 += 2;
      *(_WORD *)v31 = (v6 << v7) | (v30 >> (a1[512] - v7));
      LOBYTE(v7) = v7 - v29 + 16;
      v6 = a1[513];
    }
    else
    {
      LOBYTE(v7) = v7 - v29;
      v6 = v30 | (v6 << a1[512]);
    }
  }
  *(_WORD *)v43 = v6 << v7;
  *(_WORD *)v42 = 0;
  return v8;
}
