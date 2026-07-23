/*
 * XREFs of _LZNT1CompressChunk@28 @ 0x4B3724B6
 * Callers:
 *     _RtlCompressBufferLZNT1@32 @ 0x4B372940 (_RtlCompressBufferLZNT1@32.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LZNT1CompressChunk(
        int (__thiscall *a1)(_DWORD, char *, int),
        char *a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        _DWORD *a6,
        int a7)
{
  unsigned int v7; // edi
  _BYTE *v8; // ebx
  unsigned __int8 v9; // cl
  char *v10; // esi
  int *v11; // eax
  char *v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // edx
  __int16 v17; // cx
  __int16 v18; // ax
  __int16 v19; // cx
  int v20; // edx
  __int16 v21; // ax
  unsigned __int8 *v22; // eax
  bool v23; // zf
  bool v24; // cf
  unsigned __int8 *v25; // ecx
  unsigned int v26; // edi
  __int16 v27; // ax
  int v29; // esi
  __int16 v30; // ax
  size_t v31; // [esp-4h] [ebp-3Ch]
  char *Src; // [esp+10h] [ebp-28h]
  int *v33; // [esp+14h] [ebp-24h]
  int v34; // [esp+18h] [ebp-20h]
  unsigned __int8 *v36; // [esp+20h] [ebp-18h]
  int v37; // [esp+24h] [ebp-14h]
  unsigned int v38; // [esp+28h] [ebp-10h]
  char *v39; // [esp+2Ch] [ebp-Ch]
  _BYTE *v40; // [esp+2Ch] [ebp-Ch]
  char v41; // [esp+30h] [ebp-8h]
  char v42; // [esp+36h] [ebp-2h]
  unsigned __int8 v43; // [esp+37h] [ebp-1h]

  v37 = 0;
  v7 = a3;
  Src = a2;
  v42 = 0;
  if ( (unsigned int)(a2 + 4096) < a3 )
  {
    v7 = (unsigned int)(a2 + 4096);
    a3 = (unsigned int)(a2 + 4096);
  }
  v8 = a4;
  v38 = (unsigned int)(a4 + 4095);
  if ( (unsigned int)(a4 + 4095) >= a5 )
    v38 = a5;
  v41 = 0;
  v9 = 0;
  v36 = a4 + 2;
  v10 = a4 + 3;
  v39 = a4 + 3;
  v43 = 0;
  *(_DWORD *)a7 = a2;
  *(_DWORD *)(a7 + 4) = v7;
  *(_DWORD *)(a7 + 8) = 4098;
  if ( (unsigned int)a2 >= v7 )
  {
LABEL_49:
    if ( (unsigned int)v36 >= v38 )
      --v10;
    else
      *v36 = v9;
    v29 = v10 - v8;
    *a6 = v29;
    v30 = (v29 - 3) & 0xFFF | 0xB000;
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      *v8 = v29 - 3;
      v8[1] = HIBYTE(v30);
    }
    else
    {
      *(_WORD *)v8 = v30;
    }
    if ( v42 )
      return 0;
    else
      return 279;
  }
  v11 = FormatMaxDisplacement;
  v12 = a2;
  v33 = FormatMaxDisplacement;
  do
  {
    if ( &a2[*v11] >= v12 )
    {
      v15 = a7;
    }
    else
    {
      v13 = v37;
      do
      {
        v14 = dword_4B2A4F24[v13++];
        v33 = &FormatMaxDisplacement[v13];
      }
      while ( &a2[*v33] < v12 );
      v15 = a7;
      v10 = v39;
      v37 = v13;
      v7 = a3;
      *(_DWORD *)(a7 + 8) = v14;
    }
    if ( (unsigned int)(v12 + 3) <= v7 )
    {
      v16 = a1(a1, v12, v15);
      v34 = v16;
      if ( v16 )
      {
        v40 = v10 + 1;
        if ( (unsigned int)(v10 + 1) >= v38 )
          break;
        v17 = (_WORD)v12 - *(_WORD *)(a7 + 12) - 1;
        v18 = v16 - 3;
        if ( v37 )
        {
          switch ( v37 )
          {
            case 1:
              v18 &= 0x7FFu;
              v19 = v17 << 11;
              break;
            case 2:
              v18 &= 0x3FFu;
              v19 = v17 << 10;
              break;
            case 3:
              v18 &= 0x1FFu;
              v19 = v17 << 9;
              break;
            case 4:
              v18 = (unsigned __int8)v18;
              v19 = v17 << 8;
              break;
            case 5:
              v18 &= 0x7Fu;
              v19 = v17 << 7;
              break;
            case 6:
              v19 = v17 << 6;
              v18 &= 0x3Fu;
              break;
            case 7:
              v19 = 32 * v17;
              v18 &= 0x1Fu;
              break;
            default:
              v19 = 16 * v17;
              v18 &= 0xFu;
              break;
          }
        }
        else
        {
          v18 &= 0xFFFu;
          v19 = v17 << 12;
        }
        LOBYTE(v20) = v43 | (1 << v41);
        v21 = v19 | v18;
        *v10++ = v21;
        *v40 = HIBYTE(v21);
        goto LABEL_36;
      }
      v9 = v43;
    }
    if ( (unsigned int)v10 >= v38 )
      break;
    v42 |= *v12;
    *v10 = *v12;
    v34 = 1;
    v20 = v9 & ~(1 << v41);
LABEL_36:
    ++v10;
    v12 += v34;
    v22 = (unsigned __int8 *)v10;
    v39 = v10;
    v23 = ((v41 + 1) & 7) == 0;
    v41 = (v41 + 1) & 7;
    v9 = v20;
    v43 = v20;
    if ( v23 )
    {
      v39 = v10;
      v43 = v20;
      v24 = (unsigned int)v12 < v7;
      if ( (unsigned int)v12 >= v7 )
        goto LABEL_40;
      v25 = v36;
      ++v10;
      v36 = v22;
      v39 = (char *)(v22 + 1);
      *v25 = v20;
      v9 = 0;
      v43 = 0;
    }
    v24 = (unsigned int)v12 < v7;
LABEL_40:
    a2 = Src;
    v11 = v33;
  }
  while ( v24 );
  v24 = (unsigned int)v12 < v7;
  v8 = a4;
  if ( !v24 )
  {
    v9 = v43;
    goto LABEL_49;
  }
  v26 = v7 - (_DWORD)Src;
  if ( (unsigned int)&a4[v26 + 2] <= a5 )
  {
    LODWORD(v31) = v26;
    memcpy(a4 + 2, Src, v31);
    *a6 = v26 + 2;
    v27 = (v26 - 1) & 0xFFF | 0x3000;
    if ( ((unsigned __int8)a4 & 1) != 0 )
    {
      *a4 = v26 - 1;
      a4[1] = HIBYTE(v27);
    }
    else
    {
      *(_WORD *)a4 = v27;
    }
    return 0;
  }
  return -1073741789;
}
