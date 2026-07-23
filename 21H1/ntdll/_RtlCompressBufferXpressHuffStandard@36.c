/*
 * XREFs of _RtlCompressBufferXpressHuffStandard@36 @ 0x4B37343F
 * Callers:
 *     _RtlCompressBufferXpressHuff@32 @ 0x4B372E00 (_RtlCompressBufferXpressHuff@32.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpMakeXpressCallback@12 @ 0x4B375013 (_RtlpMakeXpressCallback@12.c)
 *     _XpressBuildHuffmanEncodings@4 @ 0x4B375409 (_XpressBuildHuffmanEncodings@4.c)
 *     _XpressDoHuffmanPass@20 @ 0x4B3757AC (_XpressDoHuffmanPass@20.c)
 */

int __fastcall RtlCompressBufferXpressHuffStandard(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int8 *v9; // esi
  unsigned int v10; // ebx
  int v11; // edi
  void *v12; // ecx
  unsigned __int8 *v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  unsigned __int8 *v16; // ebx
  unsigned __int8 v17; // al
  int v18; // edx
  int v19; // eax
  unsigned __int8 *v20; // edi
  unsigned __int8 v21; // dl
  unsigned __int8 *v22; // edx
  unsigned __int8 v23; // dh
  char *v24; // eax
  unsigned __int8 *v25; // edx
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // edx
  unsigned __int8 *v28; // eax
  _BYTE *v29; // edi
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ecx
  int *v34; // eax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // edi
  char v38; // cl
  _BYTE *v39; // eax
  unsigned __int8 v40; // cl
  unsigned int v41; // edx
  _WORD *v42; // ebx
  int v43; // eax
  int v44; // ecx
  int *v45; // eax
  int *v46; // edx
  unsigned __int8 v47; // al
  int v48; // eax
  int v49; // ebx
  int result; // eax
  size_t v51; // [esp-4h] [ebp-74h]
  unsigned __int8 *v52; // [esp+1Ch] [ebp-54h]
  unsigned __int8 *v53; // [esp+20h] [ebp-50h]
  unsigned int v54; // [esp+24h] [ebp-4Ch]
  int v55; // [esp+2Ch] [ebp-44h]
  int v57; // [esp+34h] [ebp-3Ch]
  int v59; // [esp+3Ch] [ebp-34h]
  int v60; // [esp+40h] [ebp-30h]
  unsigned int v61; // [esp+44h] [ebp-2Ch]
  _BYTE *v62; // [esp+48h] [ebp-28h]
  unsigned int v63; // [esp+48h] [ebp-28h]
  int v64; // [esp+48h] [ebp-28h]
  unsigned __int8 *v65; // [esp+4Ch] [ebp-24h]
  int v66; // [esp+50h] [ebp-20h]
  int v67; // [esp+50h] [ebp-20h]
  _BYTE *v68; // [esp+50h] [ebp-20h]
  unsigned __int8 *v69; // [esp+54h] [ebp-1Ch]
  unsigned __int8 *XpressCallback; // [esp+58h] [ebp-18h]
  _BYTE *v71; // [esp+5Ch] [ebp-14h]
  int *v72; // [esp+60h] [ebp-10h]
  int v73; // [esp+64h] [ebp-Ch]
  unsigned __int8 *v74; // [esp+68h] [ebp-8h]
  unsigned __int8 v75; // [esp+6Eh] [ebp-2h]
  unsigned __int8 v76; // [esp+6Fh] [ebp-1h]
  unsigned __int8 v77; // [esp+6Fh] [ebp-1h]
  unsigned __int8 v78; // [esp+6Fh] [ebp-1h]

  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v61 = a1 + a2;
  if ( a4 < 0x12C )
    return -1073741789;
  memset32((void *)a6, a1, 0xAF6u);
  memset32((void *)(a6 + 11224), a1, 0x12EEu);
  v11 = a6;
  v54 = v10 - 40;
  v57 = a3;
  v12 = (void *)(a6 + 47520);
  while ( 2 )
  {
    LODWORD(v51) = 2048;
    v60 = 0;
    v59 = 0;
    memset(v12, 0, v51);
    v13 = v9 + 0x10000;
    v69 = v9 + 0x10000;
    if ( (unsigned int)(v9 + 0x10000) > v10 )
    {
      v13 = (unsigned __int8 *)v10;
      v69 = (unsigned __int8 *)v10;
    }
    v14 = (unsigned int)(v13 - 40);
    XpressCallback = &v9[a2];
    if ( v13 - 40 < &v9[a2] )
      XpressCallback = v13 - 40;
    v15 = 1;
    v16 = (unsigned __int8 *)(v11 + 49828);
    v73 = 1;
    v72 = (int *)(v11 + 49824);
    v74 = (unsigned __int8 *)(v11 + 49828);
    if ( v9 == (unsigned __int8 *)a1 )
    {
      v15 = 2;
      v73 = 2;
      ++*(_DWORD *)(v11 + 4 * *v9 + 47520);
      v17 = *v9++;
      *v16 = v17;
      v16 = (unsigned __int8 *)(v11 + 49829);
      v74 = (unsigned __int8 *)(v11 + 49829);
    }
    if ( (unsigned int)v9 >= v14 )
      goto LABEL_88;
    do
    {
      while ( 1 )
      {
        v52 = v9;
        v18 = v11 + 4 * *v9;
        v65 = v9 + 1;
        v19 = v9[2] + 4 * v9[1];
        v20 = *(unsigned __int8 **)(v18 + 8 * v19);
        *(_DWORD *)(v18 + 8 * v19) = v9;
        if ( *v20 != *v9 || v20[1] != *v65 || v20[2] != v9[2] || v9 - v20 >= 0x10000 )
          goto LABEL_47;
        v21 = v9[3];
        v53 = v9;
        v62 = v9 + 3;
        v76 = v20[3];
        if ( v21 != v76 )
        {
          v66 = *v9 + 2 * v19;
          v22 = *(unsigned __int8 **)(a6 + 4 * (v66 + v21) + 11224);
          *(_DWORD *)(a6 + 4 * (v66 + v76) + 11224) = v20;
          if ( v9 - v22 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v22 )
          {
            v9 += 3;
            v29 = v20 + 3;
            goto LABEL_45;
          }
          v20 = v22;
          *(_DWORD *)(a6 + 4 * (v66 + HIBYTE(*(_DWORD *)v9)) + 11224) = v9;
        }
        v23 = v9[4];
        v24 = (char *)(v9 + 4);
        v71 = v9 + 4;
        v77 = v20[4];
        if ( v23 != v77 )
        {
          v67 = 2
              * ((unsigned __int8)__ROR1__(*v65 ^ __ROL1__(*v9 + *v62, 3), 1)
               + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(*v65 + v9[2] + 97, 1), 3));
          v25 = *(unsigned __int8 **)(a6 + 4 * (v67 + v23) + 11224);
          *(_DWORD *)(a6 + 4 * (v67 + v77) + 11224) = v20;
          if ( v9 - v25 >= 0x10000 )
          {
            v26 = v9 + 4;
LABEL_51:
            v29 = v20 + 4;
            v9 = v26;
            v16 = v74;
            goto LABEL_45;
          }
          v26 = v9 + 4;
          if ( *(_DWORD *)v9 != *(_DWORD *)v25 || *v71 != v25[4] || v9 == v25 )
            goto LABEL_51;
          v20 = v25;
          v16 = v74;
          *(_DWORD *)(a6 + 4 * (v67 + (unsigned __int8)*v71) + 11224) = v9;
          v24 = (char *)(v9 + 4);
        }
        v68 = v9 + 5;
        v78 = v9[5];
        v75 = v20[5];
        if ( v78 != v75 )
        {
          v55 = 2
              * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, *v24))
               + 4
               * ((unsigned __int8)__ROR1__(*v65 ^ __ROL1__(*v62, 3), 1)
                + (unsigned __int8)__ROL1__(*v24 ^ (__ROR1__(*v9, 1) + 69), 3)));
          v27 = *(unsigned __int8 **)(a6 + 4 * (v55 + v78) + 11224);
          *(_DWORD *)(a6 + 4 * (v55 + v75) + 11224) = v20;
          if ( v9 - v27 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v27 )
          {
            v28 = v9 + 5;
LABEL_53:
            v29 = v20 + 5;
            v9 = v28;
            v16 = v74;
            goto LABEL_45;
          }
          v28 = v9 + 5;
          if ( *v71 != v27[4] || *v68 != v27[5] || v9 == v27 )
            goto LABEL_53;
          v20 = v27;
          v16 = v74;
          *(_DWORD *)(a6 + 4 * (v55 + (unsigned __int8)*v68) + 11224) = v9;
        }
        v9 += 6;
        v29 = v20 + 6;
        if ( (unsigned int)v9 >= v54 )
        {
LABEL_42:
          while ( (unsigned int)v9 < v61 )
          {
            if ( *v9 != *v29 )
              break;
            ++v9;
            ++v29;
          }
        }
        else
        {
          while ( 1 )
          {
            v30 = *(_DWORD *)v9;
            v31 = *(_DWORD *)v29;
            if ( *(_DWORD *)v9 != *(_DWORD *)v29 )
              break;
            v30 = *((_DWORD *)v9 + 1);
            v31 = *((_DWORD *)v29 + 1);
            if ( v30 != v31 )
            {
              v9 += 4;
              v29 += 4;
              break;
            }
            v30 = *((_DWORD *)v9 + 2);
            v31 = *((_DWORD *)v29 + 2);
            if ( v30 != v31 )
            {
              v9 += 8;
              v29 += 8;
              break;
            }
            v30 = *((_DWORD *)v9 + 3);
            v31 = *((_DWORD *)v29 + 3);
            if ( v30 != v31 )
            {
              v9 += 12;
              v29 += 12;
              break;
            }
            v30 = *((_DWORD *)v9 + 4);
            v31 = *((_DWORD *)v29 + 4);
            if ( v30 != v31 )
            {
              v9 += 16;
              v29 += 16;
              break;
            }
            v30 = *((_DWORD *)v9 + 5);
            v31 = *((_DWORD *)v29 + 5);
            if ( v30 != v31 )
            {
              v9 += 20;
              v29 += 20;
              break;
            }
            v30 = *((_DWORD *)v9 + 6);
            v31 = *((_DWORD *)v29 + 6);
            if ( v30 != v31 )
            {
              v9 += 24;
              v29 += 24;
              break;
            }
            v30 = *((_DWORD *)v9 + 7);
            v31 = *((_DWORD *)v29 + 7);
            if ( v30 != v31 )
            {
              v9 += 28;
              v29 += 28;
              break;
            }
            v9 += 32;
            v29 += 32;
            if ( (unsigned int)v9 >= v54 )
              goto LABEL_42;
          }
          if ( (_BYTE)v30 == (_BYTE)v31 )
          {
            if ( v9[1] == v29[1] )
            {
              if ( v9[2] == v29[2] )
              {
                v9 += 3;
                v29 += 3;
              }
              else
              {
                v9 += 2;
                v29 += 2;
              }
            }
            else
            {
              ++v9;
              ++v29;
            }
          }
        }
LABEL_45:
        v32 = v9 - v29;
        if ( v9 - v53 != 3 || v32 <= 0x1000 )
          break;
LABEL_47:
        v11 = a6;
        v9 = v65;
        ++*(_DWORD *)(a6 + 4 * *v52 + 47520);
        *v16++ = *v52;
        v74 = v16;
        v33 = 2 * v73;
        if ( v73 <= 0 )
        {
          v34 = v72;
          v72 = (int *)v16;
          v16 += 4;
          v73 = 1;
          v74 = v16;
          *v34 = v33;
          if ( v65 >= XpressCallback )
          {
            if ( v65 >= v69 - 40 )
              goto LABEL_87;
LABEL_69:
            XpressCallback = (unsigned __int8 *)RtlpMakeXpressCallback(v9);
          }
        }
        else
        {
          v73 *= 2;
        }
      }
      if ( v32 < 0x100 )
        v35 = (unsigned __int8)XpressHighBitIndexTable[v32];
      else
        v35 = (unsigned __int8)XpressHighBitIndexTable[v32 >> 8] + 8;
      v60 += v35;
      v36 = v9 - v53 - 3;
      v37 = (-1 << v35) + v9 - v29;
      v38 = 16 * v35;
      v39 = v16 + 1;
      if ( v36 < 0xF )
      {
        v40 = v36 + v38;
        *v16 = v40;
        v42 = v16 + 1;
      }
      else
      {
        v40 = v38 + 15;
        v63 = v9 - v53 - 3;
        v41 = v9 - v53 - 18;
        *v16 = v40;
        v42 = v16 + 2;
        if ( v41 >= 0xFF )
        {
          *v39 = -1;
          if ( v63 >= 0x10000 )
          {
            *v42 = 0;
            *(_DWORD *)(v39 + 3) = v63;
            v42 = v39 + 7;
            v43 = 7;
          }
          else
          {
            *v42 = v63;
            v42 = v39 + 3;
            v43 = 3;
          }
        }
        else
        {
          *v39 = v41;
          v43 = 1;
        }
        v59 += v43;
      }
      ++*(_DWORD *)(a6 + 4 * v40 + 48544);
      *v42 = v37;
      v16 = (unsigned __int8 *)(v42 + 1);
      v74 = v16;
      v44 = 2 * v73 + 1;
      if ( v73 <= 0 )
      {
        v45 = v72;
        v72 = (int *)v16;
        v16 += 4;
        v73 = 1;
        v74 = v16;
        *v45 = v44;
      }
      else
      {
        v73 = 2 * v73 + 1;
      }
      v11 = a6;
    }
    while ( v9 < XpressCallback );
    if ( v9 < v69 - 40 )
      goto LABEL_69;
    v11 = a6;
LABEL_87:
    v15 = v73;
LABEL_88:
    v46 = v72;
    while ( v9 < v69 )
    {
      ++*(_DWORD *)(v11 + 4 * *v9 + 47520);
      v47 = *v9++;
      *v16++ = v47;
      if ( v15 <= 0 )
      {
        *v46 = 2 * v15;
        v15 = 1;
        v46 = (int *)v16;
        v16 += 4;
      }
      else
      {
        v15 *= 2;
      }
    }
    for ( ; v15 > 0; v15 = 2 * v15 + 1 )
      ;
    *v46 = 2 * v15 + 1;
    if ( (unsigned int)v9 < v61 )
    {
      v64 = 0;
    }
    else
    {
      ++*(_DWORD *)(v11 + 48544);
      v64 = 1;
    }
    if ( v57 + v59 + 4 * ((unsigned int)(v60 + 31 + XpressBuildHuffmanEncodings(v11 + 30608)) >> 5) + 258 >= a4 + a3 )
      return -1073741789;
    v48 = XpressDoHuffmanPass(v16, v57, v64);
    v12 = (void *)(v11 + 47520);
    v49 = v48;
    v57 = v48;
    if ( !v64 )
    {
      v10 = v61;
      continue;
    }
    break;
  }
  result = 0;
  *a5 = v49 - a3;
  return result;
}
