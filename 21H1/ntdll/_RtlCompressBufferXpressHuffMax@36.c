/*
 * XREFs of _RtlCompressBufferXpressHuffMax@36 @ 0x4B372E62
 * Callers:
 *     _RtlCompressBufferXpressHuff@32 @ 0x4B372E00 (_RtlCompressBufferXpressHuff@32.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpMakeXpressCallback@12 @ 0x4B375013 (_RtlpMakeXpressCallback@12.c)
 *     _XpressBuildHuffmanEncodings@4 @ 0x4B375409 (_XpressBuildHuffmanEncodings@4.c)
 *     _XpressDoHuffmanPass@20 @ 0x4B3757AC (_XpressDoHuffmanPass@20.c)
 */

int __fastcall RtlCompressBufferXpressHuffMax(
        unsigned int a1,
        int a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int8 *v9; // esi
  unsigned int v10; // edi
  int result; // eax
  char *v12; // ebx
  unsigned __int8 *v13; // eax
  unsigned int v14; // eax
  char *v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  char *v18; // edi
  char v19; // al
  unsigned __int8 *v20; // ebx
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int8 *XpressCallback; // eax
  unsigned __int8 *v26; // ecx
  int v27; // eax
  unsigned __int8 *v28; // edx
  int v29; // eax
  int v30; // eax
  unsigned __int8 *v31; // esi
  unsigned int v32; // eax
  _DWORD *v33; // ecx
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // esi
  int v36; // eax
  int v37; // edx
  unsigned int v38; // esi
  unsigned __int8 *v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  bool v42; // cc
  int *v43; // edx
  int v44; // ecx
  _BYTE *v45; // ebx
  unsigned int v46; // edx
  char v47; // cl
  unsigned __int8 v48; // cl
  _WORD *v49; // edi
  int v50; // eax
  char v51; // al
  int v52; // ebx
  int v53; // edi
  bool v54; // zf
  size_t v55; // [esp-4h] [ebp-64h]
  size_t v56; // [esp-4h] [ebp-64h]
  int v57; // [esp+1Ch] [ebp-44h]
  int v59; // [esp+24h] [ebp-3Ch]
  int v60; // [esp+28h] [ebp-38h]
  unsigned __int8 *v61; // [esp+2Ch] [ebp-34h]
  unsigned __int8 *v62; // [esp+30h] [ebp-30h]
  unsigned __int8 *v63; // [esp+34h] [ebp-2Ch]
  char *v64; // [esp+38h] [ebp-28h]
  int v65; // [esp+38h] [ebp-28h]
  unsigned int v66; // [esp+38h] [ebp-28h]
  unsigned int v67; // [esp+3Ch] [ebp-24h]
  unsigned int v68; // [esp+40h] [ebp-20h]
  unsigned int v69; // [esp+44h] [ebp-1Ch]
  unsigned __int8 *v70; // [esp+48h] [ebp-18h]
  char *v72; // [esp+50h] [ebp-10h]
  int v73; // [esp+54h] [ebp-Ch]
  unsigned int v74; // [esp+58h] [ebp-8h]
  unsigned __int8 *v75; // [esp+5Ch] [ebp-4h]

  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v67 = a1 + a2;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return -1073741637;
    v12 = a6;
    LODWORD(v55) = 0x20000;
    memset(a6, 0, v55);
    v57 = a3;
    *((_DWORD *)a6 + 0x8000) = 0;
    v62 = 0;
    v72 = a6 + 674576;
    while ( 1 )
    {
      LODWORD(v56) = 2048;
      v60 = 0;
      v59 = 0;
      memset(v12 + 672272, 0, v56);
      v13 = v9 + 0x10000;
      v61 = v9 + 0x10000;
      if ( (unsigned int)(v9 + 0x10000) > v10 )
      {
        v13 = (unsigned __int8 *)v10;
        v61 = (unsigned __int8 *)v10;
      }
      v14 = (unsigned int)(v13 - 5);
      v68 = v14;
      v63 = &v9[a2];
      if ( v14 < (unsigned int)&v9[a2] )
        v63 = (unsigned __int8 *)v14;
      v15 = v72;
      v16 = 1;
      v17 = a1;
      v73 = 1;
      v18 = v72 + 4;
      v64 = v72 + 4;
      if ( v9 == (unsigned __int8 *)a1 )
      {
        v16 = 2;
        v73 = 2;
        ++*(_DWORD *)&v12[4 * *v9 + 672272];
        v19 = *v9++;
        *v18 = v19;
        v18 = v72 + 5;
        v17 = a1;
        v64 = v72 + 5;
      }
      if ( (unsigned int)v9 < v68 )
        break;
LABEL_89:
      while ( v9 < v61 )
      {
        ++*(_DWORD *)&v12[4 * *v9 + 672272];
        v51 = *v9++;
        *v18++ = v51;
        if ( v16 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v16;
          v16 = 1;
          v15 = v18;
          v18 += 4;
        }
        else
        {
          v16 *= 2;
        }
      }
      for ( ; v16 > 0; v16 = 2 * v16 + 1 )
        ;
      *(_DWORD *)v15 = 2 * v16 + 1;
      if ( (unsigned int)v9 < v67 )
      {
        v52 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 168324);
        v52 = 1;
      }
      if ( v57 + v59 + 4 * ((unsigned int)(v60 + 31 + XpressBuildHuffmanEncodings(a6 + 655360)) >> 5) + 258 >= a4 + a3 )
        return -1073741789;
      v72 = a6 + 674576;
      v53 = XpressDoHuffmanPass(v18, v57, v52);
      v54 = v52 == 0;
      v12 = a6;
      v57 = v53;
      if ( !v54 )
      {
        result = 0;
        *a5 = v53 - a3;
        return result;
      }
      v10 = v67;
    }
    v20 = v9;
    v21 = (int)&v9[-v17] % 0x20000;
    do
    {
      v22 = (unsigned __int16)XpressHashFunction[*v20] ^ (unsigned __int16)word_4B2A4B20[v20[2]] ^ (unsigned __int16)word_4B2A4920[v20[1]];
      v23 = *(_DWORD *)&a6[4 * v22];
      *(_DWORD *)&a6[4 * v22] = v20++;
      *(_DWORD *)&a6[4 * v21 + 0x20000] = v23;
      v24 = v68;
      v21 = (v21 + 1) & 0x1FFFF;
    }
    while ( (unsigned int)v20 < v68 );
    v18 = v64;
    v16 = v73;
    v12 = a6;
LABEL_16:
    v15 = v72;
    while ( 1 )
    {
      if ( v9 >= v63 )
      {
        if ( (unsigned int)v9 >= v24 )
          goto LABEL_89;
        XpressCallback = (unsigned __int8 *)RtlpMakeXpressCallback(v9);
        v16 = v73;
        v63 = XpressCallback;
      }
      v26 = *(unsigned __int8 **)&v12[4 * ((int)&v9[-a1] % 0x20000) + 0x20000];
      v65 = *(_DWORD *)v9;
      if ( v26 + 0x10000 <= v9 )
        goto LABEL_73;
      v27 = v65 ^ *(_DWORD *)v26;
      v12 = a6;
      if ( !v27 )
        goto LABEL_22;
      if ( (v27 & 0xFFFFFF) != 0 )
      {
        v26 = *(unsigned __int8 **)&a6[4 * ((int)&v26[-a1] % 0x20000) + 0x20000];
        if ( v26 + 0x10000 <= v9 )
          goto LABEL_73;
        v29 = v65 ^ *(_DWORD *)v26;
        if ( !v29 )
          goto LABEL_22;
        if ( (v29 & 0xFFFFFF) != 0 )
        {
          v26 = *(unsigned __int8 **)&a6[4 * ((int)&v26[-a1] % 0x20000) + 0x20000];
          if ( v26 + 0x10000 <= v9 )
            goto LABEL_73;
          v30 = v65 ^ *(_DWORD *)v26;
          if ( !v30 )
          {
LABEL_22:
            v74 = 3;
            v70 = v9 - 0x10000;
            v28 = v9;
            v75 = v9;
            v69 = 0;
            goto LABEL_34;
          }
          if ( (v30 & 0xFFFFFF) != 0 )
            goto LABEL_73;
        }
      }
      v62 = v26;
      v70 = v9 - 0x10000;
      v28 = v9;
      v31 = v9 - 0x10000;
      v32 = 0;
      v75 = v28;
      v69 = 0;
      v74 = 3;
      while ( 1 )
      {
        v26 = *(unsigned __int8 **)&v12[4 * ((int)&v26[-a1] % 0x20000) + 0x20000];
        if ( v26 <= v31 )
        {
LABEL_69:
          v38 = v74;
          goto LABEL_70;
        }
        v12 = a6;
        if ( v65 == *(_DWORD *)v26 )
          break;
LABEL_68:
        v69 = ++v32;
        if ( v32 >= 0xC )
          goto LABEL_69;
      }
      v9 = v28;
LABEL_34:
      v33 = v26 + 4;
      v34 = v9 + 36;
      v35 = v9 + 4;
      if ( (unsigned int)v34 >= v67 )
      {
LABEL_45:
        if ( (unsigned int)v35 < v67 )
        {
          do
          {
            if ( *v35 != *(_BYTE *)v33 )
              break;
            ++v35;
            v33 = (_DWORD *)((char *)v33 + 1);
          }
          while ( (unsigned int)v35 < v67 );
          v12 = a6;
        }
      }
      else
      {
        while ( 1 )
        {
          v36 = *(_DWORD *)v35;
          v37 = *v33;
          if ( *(_DWORD *)v35 != *v33 )
            break;
          v36 = *((_DWORD *)v35 + 1);
          v37 = v33[1];
          if ( v36 != v37 )
          {
            v35 += 4;
            ++v33;
            break;
          }
          v36 = *((_DWORD *)v35 + 2);
          v37 = v33[2];
          if ( v36 != v37 )
          {
            v35 += 8;
            v33 += 2;
            break;
          }
          v36 = *((_DWORD *)v35 + 3);
          v37 = v33[3];
          if ( v36 != v37 )
          {
            v35 += 12;
            v33 += 3;
            break;
          }
          v36 = *((_DWORD *)v35 + 4);
          v37 = v33[4];
          if ( v36 != v37 )
          {
            v35 += 16;
            v33 += 4;
            break;
          }
          v36 = *((_DWORD *)v35 + 5);
          v37 = v33[5];
          if ( v36 != v37 )
          {
            v35 += 20;
            v33 += 5;
            break;
          }
          v36 = *((_DWORD *)v35 + 6);
          v37 = v33[6];
          if ( v36 != v37 )
          {
            v35 += 24;
            v33 += 6;
            break;
          }
          v36 = *((_DWORD *)v35 + 7);
          v37 = v33[7];
          if ( v36 != v37 )
          {
            v35 += 28;
            v33 += 7;
            break;
          }
          v35 += 32;
          v33 += 8;
          if ( (unsigned int)(v35 + 32) >= v67 )
          {
            v28 = v75;
            goto LABEL_45;
          }
        }
        if ( (_BYTE)v36 == (_BYTE)v37 )
        {
          v12 = a6;
          if ( v35[1] != *((_BYTE *)v33 + 1) )
          {
            ++v35;
            v33 = (_DWORD *)((char *)v33 + 1);
            goto LABEL_59;
          }
          v28 = v75;
          if ( v35[2] == *((_BYTE *)v33 + 2) )
          {
            v35 += 3;
            v33 = (_DWORD *)((char *)v33 + 3);
          }
          else
          {
            v35 += 2;
            v33 = (_DWORD *)((char *)v33 + 2);
          }
        }
        else
        {
LABEL_59:
          v28 = v75;
        }
      }
      v38 = v35 - v28;
      v39 = (unsigned __int8 *)v33;
      v26 = (unsigned __int8 *)v33 - v38;
      if ( v38 <= v74 )
      {
        v32 = v38 + v69;
        goto LABEL_67;
      }
      v74 = v38;
      v62 = v26;
      if ( v39 <= v28 )
      {
        v32 = v69;
LABEL_67:
        v31 = v70;
        goto LABEL_68;
      }
LABEL_70:
      v9 = &v28[v38];
      v40 = v28 - v62;
      if ( v74 == 3 && v40 > 0x1000 )
        break;
      if ( v40 < 0x100 )
        v44 = (unsigned __int8)XpressHighBitIndexTable[v40];
      else
        v44 = (unsigned __int8)XpressHighBitIndexTable[v40 >> 8] + 8;
      v60 += v44;
      v45 = v18 + 1;
      v46 = (-1 << v44) + v40;
      v47 = 16 * v44;
      if ( v74 - 3 < 0xF )
      {
        v48 = v74 - 3 + v47;
        *v18 = v48;
        v49 = v18 + 1;
      }
      else
      {
        v48 = v47 + 15;
        v66 = v74 - 3;
        *v18 = v48;
        v49 = v18 + 2;
        if ( v74 - 18 >= 0xFF )
        {
          *v45 = -1;
          if ( v66 >= 0x10000 )
          {
            *v49 = 0;
            *(_DWORD *)(v45 + 3) = v66;
            v49 = v45 + 7;
            v50 = 7;
          }
          else
          {
            *v49 = v66;
            v49 = v45 + 3;
            v50 = 3;
          }
        }
        else
        {
          *v45 = v74 - 18;
          v50 = 1;
        }
        v59 += v50;
      }
      v12 = a6;
      ++*(_DWORD *)&a6[4 * v48 + 673296];
      *v49 = v46;
      v41 = 2 * v73 + 1;
      v18 = (char *)(v49 + 1);
      v42 = v73 <= 0;
LABEL_74:
      if ( !v42 )
      {
        v16 = v41;
        v24 = v68;
        v73 = v16;
        goto LABEL_16;
      }
      v43 = (int *)v72;
      v15 = v18;
      v72 = v18;
      v18 += 4;
      *v43 = v41;
      v16 = 1;
      v24 = v68;
      v73 = 1;
    }
    v9 = v75;
    v16 = v73;
LABEL_73:
    ++v9;
    ++*(_DWORD *)&v12[4 * (unsigned __int8)v65 + 672272];
    v41 = 2 * v16;
    *v18++ = v65;
    v42 = v16 <= 0;
    goto LABEL_74;
  }
  return -1073741789;
}
