/*
 * XREFs of _RtlCompressBufferXpressLzStandard@36 @ 0x4B3740DB
 * Callers:
 *     _RtlCompressBufferXpressLz@32 @ 0x4B373B10 (_RtlCompressBufferXpressLz@32.c)
 * Callees:
 *     _RtlpMakeXpressCallback@12 @ 0x4B375013 (_RtlpMakeXpressCallback@12.c)
 */

int __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned __int8 *v13; // edi
  unsigned __int8 *v14; // esi
  int v15; // edx
  int v16; // eax
  unsigned __int8 *v17; // ecx
  unsigned __int8 v18; // dl
  int v19; // eax
  int *v20; // ecx
  unsigned __int8 *v21; // edx
  int v22; // ebx
  char *v23; // eax
  unsigned __int8 v24; // dh
  unsigned __int8 *v25; // edx
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // edx
  unsigned __int8 *v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // edx
  __int16 v32; // ax
  unsigned __int8 *v33; // ecx
  unsigned int v34; // edx
  unsigned __int8 v35; // al
  unsigned int v36; // edx
  _WORD *v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  int *v40; // ecx
  int *v41; // edx
  unsigned __int8 v42; // al
  unsigned int v43; // edi
  unsigned int v45; // [esp+18h] [ebp-38h]
  unsigned int v46; // [esp+1Ch] [ebp-34h]
  unsigned int v47; // [esp+20h] [ebp-30h]
  int v48; // [esp+20h] [ebp-30h]
  _BYTE *v49; // [esp+24h] [ebp-2Ch]
  int v50; // [esp+24h] [ebp-2Ch]
  unsigned __int8 *v51; // [esp+28h] [ebp-28h]
  int v52; // [esp+2Ch] [ebp-24h]
  _BYTE *v53; // [esp+2Ch] [ebp-24h]
  unsigned __int8 *v54; // [esp+30h] [ebp-20h]
  unsigned int XpressCallback; // [esp+34h] [ebp-1Ch]
  _BYTE *v56; // [esp+38h] [ebp-18h]
  int *v57; // [esp+3Ch] [ebp-14h]
  unsigned int v58; // [esp+40h] [ebp-10h]
  unsigned __int8 *v59; // [esp+44h] [ebp-Ch]
  int v60; // [esp+48h] [ebp-8h]
  unsigned __int8 v61; // [esp+4Eh] [ebp-2h]
  unsigned __int8 v62; // [esp+4Eh] [ebp-2h]
  unsigned __int8 v63; // [esp+4Fh] [ebp-1h]
  unsigned __int8 v64; // [esp+4Fh] [ebp-1h]
  unsigned __int8 v65; // [esp+4Fh] [ebp-1h]

  v47 = a2;
  v11 = (unsigned int)&a1[a2];
  v58 = v11;
  v45 = a3 + a4;
  if ( a4 < 0x40 || a2 < 8 )
    return -1073741789;
  v51 = 0;
  XpressCallback = v11 - 38;
  v46 = a3 + a4 - 41;
  if ( v11 < 0x26 )
    XpressCallback = v11;
  v12 = 2;
  *(_BYTE *)(a3 + 4) = *a1;
  v13 = (unsigned __int8 *)(a3 + 5);
  v57 = (int *)a3;
  v14 = a1 + 1;
  v60 = 2;
  if ( v47 >= 0x40 )
  {
    memset32((void *)a6, (int)a1, 0xAF6u);
    memset32((void *)(a6 + 11224), (int)a1, 0x12EEu);
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = a6 + 4 * *v14;
        v16 = v14[2] + 4 * v14[1];
        v17 = *(unsigned __int8 **)(v15 + 8 * v16);
        *(_DWORD *)(v15 + 8 * v16) = v14;
        v18 = *v14;
        v54 = v17;
        if ( *v17 == *v14 && v17[1] == v14[1] && v17[2] == v14[2] && v14 - v17 < 0x2000 )
          break;
        *v13 = v18;
        v19 = 2 * v12;
        ++v13;
        ++v14;
        if ( v12 <= 0 )
        {
          v20 = v57;
          v12 = 1;
          v57 = (int *)v13;
          v13 += 4;
          v60 = 1;
          *v20 = v19;
          if ( (unsigned int)v14 >= XpressCallback )
          {
            v11 = v58;
            if ( (unsigned int)v14 >= v58 - 38 )
              goto LABEL_88;
            XpressCallback = RtlpMakeXpressCallback(v14);
          }
          if ( (unsigned int)v13 >= v46 )
            goto LABEL_87;
        }
        else
        {
          v12 *= 2;
          v60 = v19;
        }
      }
      v59 = v14;
      v49 = v14 + 3;
      v63 = v14[3];
      v61 = v17[3];
      if ( v63 != v61 )
      {
        v52 = v18 + 2 * v16;
        v21 = *(unsigned __int8 **)(a6 + 4 * (v52 + v63) + 11224);
        *(_DWORD *)(a6 + 4 * (v52 + v61) + 11224) = v17;
        v22 = v60;
        if ( v14 - v21 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v21 )
        {
          v14 += 3;
          LOWORD(v17) = (_WORD)v17 + 3;
          goto LABEL_48;
        }
        *(_DWORD *)(a6 + 4 * (v52 + HIBYTE(*(_DWORD *)v14)) + 11224) = v14;
        v17 = v21;
        v54 = v21;
      }
      v22 = v60;
      v23 = (char *)(v14 + 4);
      v24 = v14[4];
      v56 = v14 + 4;
      v64 = v17[4];
      if ( v24 != v64 )
      {
        v48 = 2
            * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(*v14 + *v49, 3), 1)
             + 4 * (unsigned __int8)__ROL1__(*v14 ^ __ROR1__(v14[1] + v14[2] + 97, 1), 3));
        v25 = *(unsigned __int8 **)(a6 + 4 * (v48 + v24) + 11224);
        *(_DWORD *)(a6 + 4 * (v48 + v64) + 11224) = v54;
        if ( v14 - v25 >= 0x2000 )
        {
          v26 = v14 + 4;
LABEL_52:
          LOWORD(v17) = (_WORD)v17 + 4;
          v14 = v26;
          v22 = v60;
          goto LABEL_48;
        }
        v26 = v14 + 4;
        if ( *(_DWORD *)v14 != *(_DWORD *)v25 || *v56 != v25[4] || v14 == v25 )
          goto LABEL_52;
        v22 = v60;
        *(_DWORD *)(a6 + 4 * (v48 + (unsigned __int8)*v56) + 11224) = v14;
        v17 = v25;
        v23 = (char *)(v14 + 4);
        v54 = v25;
      }
      v53 = v14 + 5;
      v65 = v14[5];
      v62 = v17[5];
      if ( v65 != v62 )
      {
        v50 = 2
            * ((v14[2] ^ (unsigned __int8)__ROL1__(*v14, *v23))
             + 4
             * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(*v49, 3), 1)
              + (unsigned __int8)__ROL1__(*v23 ^ (__ROR1__(*v14, 1) + 69), 3)));
        v27 = *(unsigned __int8 **)(a6 + 4 * (v50 + v65) + 11224);
        *(_DWORD *)(a6 + 4 * (v50 + v62) + 11224) = v54;
        if ( v14 - v27 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v27 )
        {
          v28 = v14 + 5;
LABEL_54:
          LOWORD(v17) = (_WORD)v17 + 5;
          v14 = v28;
          v22 = v60;
          goto LABEL_48;
        }
        v28 = v14 + 5;
        if ( *v56 != v27[4] || *v53 != v27[5] || v14 == v27 )
          goto LABEL_54;
        v22 = v60;
        *(_DWORD *)(a6 + 4 * (v50 + (unsigned __int8)*v53) + 11224) = v14;
        v17 = v27;
      }
      v29 = v58;
      v17 += 6;
      v14 += 6;
      if ( (unsigned int)(v59 + 6) >= v58 - 38 )
      {
LABEL_45:
        while ( (unsigned int)v14 < v29 )
        {
          if ( *v14 != *v17 )
            break;
          ++v14;
          ++v17;
        }
      }
      else
      {
        while ( 1 )
        {
          v30 = *(_DWORD *)v17;
          if ( *(_DWORD *)v14 != *(_DWORD *)v17 )
            break;
          v30 = *((_DWORD *)v17 + 1);
          if ( *((_DWORD *)v14 + 1) != v30 )
          {
            v17 += 4;
            v14 += 4;
            break;
          }
          v30 = *((_DWORD *)v17 + 2);
          if ( *((_DWORD *)v14 + 2) != v30 )
          {
            v17 += 8;
            v14 += 8;
            break;
          }
          v30 = *((_DWORD *)v17 + 3);
          if ( *((_DWORD *)v14 + 3) != v30 )
          {
            v17 += 12;
            v14 += 12;
            break;
          }
          v30 = *((_DWORD *)v17 + 4);
          if ( *((_DWORD *)v14 + 4) != v30 )
          {
            v17 += 16;
            v14 += 16;
            break;
          }
          v30 = *((_DWORD *)v17 + 5);
          if ( *((_DWORD *)v14 + 5) != v30 )
          {
            v17 += 20;
            v14 += 20;
            break;
          }
          v30 = *((_DWORD *)v17 + 6);
          if ( *((_DWORD *)v14 + 6) != v30 )
          {
            v17 += 24;
            v14 += 24;
            break;
          }
          v30 = *((_DWORD *)v17 + 7);
          if ( *((_DWORD *)v14 + 7) != v30 )
          {
            v17 += 28;
            v14 += 28;
            break;
          }
          v29 = v58;
          v14 += 32;
          v17 += 32;
          if ( (unsigned int)v14 >= v58 - 38 )
            goto LABEL_45;
        }
        if ( *v14 == (_BYTE)v30 )
        {
          if ( v14[1] == v17[1] )
          {
            if ( v14[2] == v17[2] )
            {
              v14 += 3;
              LOWORD(v17) = (_WORD)v17 + 3;
            }
            else
            {
              v14 += 2;
              LOWORD(v17) = (_WORD)v17 + 2;
            }
          }
          else
          {
            ++v14;
            LOWORD(v17) = (_WORD)v17 + 1;
          }
        }
      }
LABEL_48:
      v31 = v14 - v59 - 3;
      v32 = 8 * ((_WORD)v14 - (_WORD)v17) - 8;
      if ( v31 >= 7 )
      {
        v33 = v51;
        *(_WORD *)v13 = v32 | 7;
        v34 = v14 - v59 - 10;
        v13 += 2;
        if ( v51 )
        {
          v35 = *v51;
          v51 = 0;
          if ( v34 < 0xF )
          {
            *v33 = v35 | (16 * v34);
            goto LABEL_80;
          }
          *v33 = v35 | 0xF0;
        }
        else
        {
          v51 = v13;
          if ( v34 < 0xF )
          {
            *v13++ = v34;
            goto LABEL_80;
          }
          *v13++ = 15;
        }
        v36 = v14 - v59 - 25;
        v37 = v13 + 1;
        if ( v36 >= 0xFF )
        {
          v38 = v36 + 22;
          *v13 = -1;
          v13 += 3;
          if ( v38 >= 0x10000 )
          {
            *v37 = 0;
            *(_DWORD *)v13 = v38;
            v13 = (unsigned __int8 *)(v37 + 3);
          }
          else
          {
            *v37 = v38;
          }
        }
        else
        {
          *v13++ = v36;
        }
      }
      else
      {
        *(_WORD *)v13 = v31 + v32;
        v13 += 2;
      }
LABEL_80:
      v39 = 2 * v22 + 1;
      if ( v22 <= 0 )
      {
        v40 = v57;
        v12 = 1;
        v57 = (int *)v13;
        v13 += 4;
        *v40 = v39;
      }
      else
      {
        v12 = 2 * v22 + 1;
      }
      v60 = v12;
      if ( (unsigned int)v14 >= XpressCallback )
      {
        v11 = v58;
        if ( (unsigned int)v14 >= v58 - 38 )
          break;
        XpressCallback = RtlpMakeXpressCallback(v14);
      }
      if ( (unsigned int)v13 >= v46 )
      {
LABEL_87:
        v11 = v58;
        break;
      }
    }
  }
LABEL_88:
  v41 = v57;
  if ( (unsigned int)v14 < v11 )
  {
    while ( (unsigned int)v13 < v45 )
    {
      v42 = *v14++;
      *v13++ = v42;
      if ( v12 <= 0 )
      {
        *v41 = 2 * v12;
        v12 = 1;
        v41 = (int *)v13;
        v13 += 4;
      }
      else
      {
        v12 *= 2;
      }
      if ( (unsigned int)v14 >= v11 )
        goto LABEL_94;
    }
    return -1073741789;
  }
LABEL_94:
  if ( (unsigned int)v13 >= v45 )
    return -1073741789;
  for ( ; v12 > 0; v12 = 2 * v12 + 1 )
    ;
  v43 = (unsigned int)&v13[-a3];
  *v41 = 2 * v12 + 1;
  *a5 = v43;
  if ( v43 < 8 )
    *a5 = 8;
  return 0;
}
