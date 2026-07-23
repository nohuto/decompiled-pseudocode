/*
 * XREFs of _RtlCompressBufferXpressLzMax@36 @ 0x4B373B72
 * Callers:
 *     _RtlCompressBufferXpressLz@32 @ 0x4B373B10 (_RtlCompressBufferXpressLz@32.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpMakeXpressCallback@12 @ 0x4B375013 (_RtlpMakeXpressCallback@12.c)
 */

int __fastcall RtlCompressBufferXpressLzMax(
        _BYTE *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE *v9; // ebx
  unsigned int v11; // edx
  int v12; // ebx
  char *v13; // edi
  _BYTE *v14; // esi
  _BYTE *v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  unsigned __int8 *v18; // ebx
  char *v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  __int16 v22; // ax
  char *XpressCallback; // eax
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int *v29; // ecx
  unsigned int v30; // edx
  int v31; // eax
  _BYTE *v32; // eax
  _BYTE *v33; // edi
  int v34; // eax
  int v35; // edx
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  char v41; // cl
  unsigned int v42; // eax
  _WORD *v43; // ecx
  unsigned int v44; // eax
  int v45; // eax
  char v46; // al
  unsigned int v47; // esi
  size_t v48; // [esp-4h] [ebp-6Ch]
  unsigned int v49; // [esp+18h] [ebp-50h]
  unsigned int v51; // [esp+24h] [ebp-44h]
  unsigned int v52; // [esp+28h] [ebp-40h]
  unsigned __int8 *v53; // [esp+2Ch] [ebp-3Ch]
  char *v54; // [esp+30h] [ebp-38h]
  char *v55; // [esp+34h] [ebp-34h]
  char *v56; // [esp+38h] [ebp-30h]
  __int16 v57; // [esp+3Ch] [ebp-2Ch]
  unsigned int v58; // [esp+40h] [ebp-28h]
  unsigned int v59; // [esp+44h] [ebp-24h]
  int v60; // [esp+48h] [ebp-20h]
  int v61; // [esp+4Ch] [ebp-1Ch]
  int *v63; // [esp+54h] [ebp-14h]
  int v64; // [esp+58h] [ebp-10h]
  char *v65; // [esp+5Ch] [ebp-Ch]
  unsigned int v66; // [esp+60h] [ebp-8h]
  _BYTE *v67; // [esp+64h] [ebp-4h]
  unsigned int v68; // [esp+64h] [ebp-4h]

  v60 = 0;
  v9 = &a1[a2];
  v58 = (unsigned int)&a1[a2];
  v52 = a3 + a4;
  if ( a4 < 0x40 || a2 < 8 )
    return -1073741789;
  if ( (unsigned int)a1 <= 0x2001 )
    return -1073741637;
  LODWORD(v48) = 0x20000;
  memset(a6, 0, v48);
  v11 = (unsigned int)(v9 - 5);
  v56 = 0;
  v12 = 2;
  v51 = v52 - 41;
  v63 = (int *)a3;
  v49 = v11;
  v13 = a1 + 1;
  *(_BYTE *)(a3 + 4) = *a1;
  v14 = (_BYTE *)(a3 + 5);
  v15 = a1;
  v64 = 2;
  v67 = (_BYTE *)(a3 + 5);
  v57 = 0;
  v53 = a1;
  while ( 2 )
  {
    v16 = (unsigned int)(v15 + 0x2000);
    v59 = (unsigned int)(v15 + 0x2000);
    if ( (unsigned int)(v15 + 0x2000) > v11 )
    {
      v16 = v11;
      v59 = v11;
    }
    v55 = &v13[a2];
    if ( v16 < (unsigned int)&v13[a2] )
      v55 = (char *)v16;
    v17 = v57 & 0x3FFF;
    v57 &= 0x3FFFu;
    if ( (unsigned int)v15 < v16 )
    {
      v18 = v53;
      v57 += v16 - (_WORD)v53;
      v19 = &a6[4 * v17 + 0x20000];
      do
      {
        v19 += 4;
        v20 = (unsigned __int16)word_4B2A4B20[v18[2]] ^ (unsigned __int16)XpressHashFunction[*v18] ^ (unsigned __int16)word_4B2A4920[v18[1]];
        *((_DWORD *)v19 - 1) = *(_DWORD *)&a6[4 * v20];
        *(_DWORD *)&a6[4 * v20] = v18++;
        v16 = v59;
      }
      while ( (unsigned int)v18 < v59 );
      v14 = v67;
      v53 = v18;
      v12 = v64;
    }
LABEL_14:
    v21 = (unsigned int)(v13 - 0x2000);
    v22 = 0x2000 - (_WORD)a1;
    v65 = v13 - 0x2000;
    while ( 1 )
    {
      if ( v13 < v55 )
        goto LABEL_18;
      if ( (unsigned int)v13 >= v16 )
        break;
      XpressCallback = (char *)RtlpMakeXpressCallback(v13);
      v21 = (unsigned int)v65;
      v55 = XpressCallback;
      v22 = 0x2000 - (_WORD)a1;
LABEL_18:
      v24 = *(_DWORD *)&a6[4 * ((v22 + (_WORD)v21) & 0x3FFF) + 0x20000];
      v61 = *(_DWORD *)v13;
      if ( v24 >= v21 )
      {
        v25 = v61 ^ *(_DWORD *)v24;
        v21 = (unsigned int)v65;
        if ( !v25 )
          goto LABEL_32;
        if ( (v25 & 0xFFFFFF) == 0 )
          goto LABEL_31;
        v24 = *(_DWORD *)&a6[4 * (((_WORD)v24 - (_WORD)a1) & 0x3FFF) + 0x20000];
        if ( v24 >= (unsigned int)v65 )
        {
          v26 = v61 ^ *(_DWORD *)v24;
          if ( !v26 )
            goto LABEL_32;
          if ( (v26 & 0xFFFFFF) == 0 )
          {
LABEL_31:
            v30 = 0;
            v60 = (int)&v13[-v24];
            v65 = v13 - 0x2000;
            v31 = 3;
            v66 = 3;
            v68 = 0;
            goto LABEL_68;
          }
          v24 = *(_DWORD *)&a6[4 * (((_WORD)v24 - (_WORD)a1) & 0x3FFF) + 0x20000];
          if ( v24 >= (unsigned int)v65 )
          {
            v27 = v61 ^ *(_DWORD *)v24;
            if ( !v27 )
            {
LABEL_32:
              v30 = 0;
              v66 = 3;
              v68 = 0;
LABEL_33:
              v54 = v13;
              v32 = v13 + 36;
              v33 = v13 + 4;
              v24 += 4;
              if ( (unsigned int)v32 >= v58 )
              {
LABEL_44:
                if ( (unsigned int)v33 >= v58 )
                  goto LABEL_48;
                do
                {
                  if ( *v33 != *(_BYTE *)v24 )
                    break;
                  ++v33;
                  ++v24;
                }
                while ( (unsigned int)v33 < v58 );
              }
              else
              {
                while ( 1 )
                {
                  v34 = *(_DWORD *)v33;
                  v35 = *(_DWORD *)v24;
                  if ( *(_DWORD *)v33 != *(_DWORD *)v24 )
                    break;
                  v34 = *((_DWORD *)v33 + 1);
                  v35 = *(_DWORD *)(v24 + 4);
                  if ( v34 != v35 )
                  {
                    v33 += 4;
                    v24 += 4;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 2);
                  v35 = *(_DWORD *)(v24 + 8);
                  if ( v34 != v35 )
                  {
                    v33 += 8;
                    v24 += 8;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 3);
                  v35 = *(_DWORD *)(v24 + 12);
                  if ( v34 != v35 )
                  {
                    v33 += 12;
                    v24 += 12;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 4);
                  v35 = *(_DWORD *)(v24 + 16);
                  if ( v34 != v35 )
                  {
                    v33 += 16;
                    v24 += 16;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 5);
                  v35 = *(_DWORD *)(v24 + 20);
                  if ( v34 != v35 )
                  {
                    v33 += 20;
                    v24 += 20;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 6);
                  v35 = *(_DWORD *)(v24 + 24);
                  if ( v34 != v35 )
                  {
                    v33 += 24;
                    v24 += 24;
                    break;
                  }
                  v34 = *((_DWORD *)v33 + 7);
                  v35 = *(_DWORD *)(v24 + 28);
                  if ( v34 != v35 )
                  {
                    v33 += 28;
                    v24 += 28;
                    break;
                  }
                  v33 += 32;
                  v24 += 32;
                  if ( (unsigned int)(v33 + 32) >= v58 )
                  {
                    v30 = v68;
                    goto LABEL_44;
                  }
                }
                if ( (_BYTE)v34 == (_BYTE)v35 )
                {
                  if ( v33[1] != *(_BYTE *)(v24 + 1) )
                  {
                    ++v33;
                    ++v24;
                    goto LABEL_47;
                  }
                  v30 = v68;
                  if ( v33[2] == *(_BYTE *)(v24 + 2) )
                  {
                    v33 += 3;
                    v24 += 3;
                  }
                  else
                  {
                    v33 += 2;
                    v24 += 2;
                  }
LABEL_48:
                  v31 = v33 - v54;
                  if ( v33 - v54 <= v66 )
                  {
                    v13 = v54;
                    v30 += v31;
                  }
                  else
                  {
                    v66 = v33 - v54;
                    v60 = (int)&v33[-v24];
                    v13 = v54;
                    if ( v24 > (unsigned int)v54 )
                      goto LABEL_50;
                  }
                  LOWORD(v24) = v24 - v31;
                  v31 = v66;
                  while ( 1 )
                  {
                    v68 = ++v30;
                    if ( v30 >= 0x18 )
                      break;
LABEL_68:
                    v24 = *(_DWORD *)&a6[4 * (((_WORD)v24 - (_WORD)a1) & 0x3FFF) + 0x20000];
                    v12 = v64;
                    if ( v24 < (unsigned int)v65 )
                      break;
                    v31 = v66;
                    if ( v61 == *(_DWORD *)v24 )
                      goto LABEL_33;
                  }
LABEL_50:
                  v13 += v31;
                  v36 = v31 - 3;
                  v37 = 8 * v60 - 8;
                  if ( v36 < 7 )
                  {
                    v38 = v36 + v37;
                    *(_WORD *)v14 = v38;
                    v14 += 2;
                    v60 = v38;
                    goto LABEL_83;
                  }
                  v39 = v37 | 7;
                  v40 = v36 - 7;
                  *(_WORD *)v14 = v39;
                  v14 += 2;
                  v60 = v39;
                  v67 = v14;
                  if ( v56 )
                  {
                    v41 = *v56;
                    if ( v40 >= 0xF )
                    {
                      *v56 = v41 | 0xF0;
                      v56 = 0;
                      goto LABEL_78;
                    }
                    *v56 = v41 | (16 * v40);
                    v56 = 0;
                  }
                  else
                  {
                    v56 = v14;
                    if ( v40 < 0xF )
                    {
                      *v14++ = v40;
                      goto LABEL_83;
                    }
                    *v14++ = 15;
LABEL_78:
                    v42 = v40 - 15;
                    v43 = v14 + 1;
                    if ( v42 < 0xFF )
                    {
                      *v14++ = v42;
                      goto LABEL_83;
                    }
                    *v14 = -1;
                    v44 = v42 + 22;
                    v14 += 3;
                    v67 = v43 + 1;
                    if ( v44 >= 0x10000 )
                    {
                      *v43 = 0;
                      *(_DWORD *)v14 = v44;
                      v14 = v43 + 3;
LABEL_83:
                      v67 = v14;
                    }
                    else
                    {
                      *v43 = v44;
                    }
                  }
                  v29 = v63;
                  v45 = 2 * v12 + 1;
                  if ( v12 <= 0 )
                  {
                    *v63 = v45;
                    v12 = 1;
                    v29 = (int *)v14;
                    v64 = 1;
                    v14 += 4;
                    v63 = v29;
                    v67 = v14;
                  }
                  else
                  {
                    v12 = 2 * v12 + 1;
                    v64 = v45;
                  }
                  if ( (unsigned int)v14 < v51 )
                  {
                    v16 = v59;
                    goto LABEL_14;
                  }
                  goto LABEL_91;
                }
              }
LABEL_47:
              v30 = v68;
              goto LABEL_48;
            }
            if ( (v27 & 0xFFFFFF) == 0 )
              goto LABEL_31;
          }
        }
      }
      v28 = 2 * v12;
      *v14 = v61;
      ++v21;
      ++v14;
      v65 = (char *)v21;
      ++v13;
      v67 = v14;
      if ( v12 <= 0 )
      {
        v12 = 1;
        v64 = 1;
        *v63 = v28;
        v29 = (int *)v14;
        v14 += 4;
        v63 = v29;
        v67 = v14;
        if ( (unsigned int)v14 >= v51 )
          goto LABEL_91;
        v22 = 0x2000 - (_WORD)a1;
        v16 = v59;
      }
      else
      {
        v16 = v59;
        v12 *= 2;
        v22 = 0x2000 - (_WORD)a1;
        v64 = v12;
      }
    }
    v11 = v49;
    v15 = v53;
    if ( (unsigned int)v13 < v49 )
      continue;
    break;
  }
  v29 = v63;
LABEL_91:
  if ( (unsigned int)v13 >= v58 )
  {
LABEL_97:
    if ( (unsigned int)v14 >= v52 )
      return -1073741789;
    for ( ; v12 > 0; v12 = 2 * v12 + 1 )
      ;
    v47 = (unsigned int)&v14[-a3];
    *v29 = 2 * v12 + 1;
    *a5 = v47;
    if ( v47 < 8 )
      *a5 = 8;
    return 0;
  }
  else
  {
    while ( (unsigned int)v14 < v52 )
    {
      v46 = *v13++;
      *v14++ = v46;
      if ( v12 <= 0 )
      {
        *v29 = 2 * v12;
        v12 = 1;
        v29 = (int *)v14;
        v14 += 4;
      }
      else
      {
        v12 *= 2;
      }
      if ( (unsigned int)v13 >= v58 )
        goto LABEL_97;
    }
    return -1073741789;
  }
}
