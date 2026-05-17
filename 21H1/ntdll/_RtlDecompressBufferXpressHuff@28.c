/*
 * XREFs of _RtlDecompressBufferXpressHuff@28 @ 0x4B374780
 * Callers:
 *     <none>
 * Callees:
 *     _XpressBuildHuffmanDecodingTable@8 @ 0x4B375041 (_XpressBuildHuffmanDecodingTable@8.c)
 */

int __stdcall RtlDecompressBufferXpressHuff(
        unsigned int a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // ecx
  unsigned int v10; // edi
  _BYTE *v11; // esi
  int v12; // edi
  int v13; // eax
  _BYTE *v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  __int16 v17; // cx
  int v18; // eax
  unsigned __int64 v19; // kr08_8
  int v20; // ecx
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // ax
  int v24; // edi
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edx
  unsigned int v28; // edi
  bool v29; // sf
  char v30; // cl
  int v31; // eax
  _BYTE *v32; // ecx
  char v33; // al
  int v34; // eax
  _DWORD *v35; // ecx
  __int16 v36; // cx
  int v37; // eax
  unsigned __int64 v38; // kr10_8
  int v39; // ecx
  __int16 v40; // cx
  int v41; // eax
  __int16 v42; // ax
  int v43; // edi
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edx
  int v47; // eax
  __int16 v48; // [esp+0h] [ebp-24h]
  unsigned int v49; // [esp+0h] [ebp-24h]
  __int16 v50; // [esp+0h] [ebp-24h]
  __int16 v51; // [esp+4h] [ebp-20h]
  int v52; // [esp+4h] [ebp-20h]
  int v53; // [esp+4h] [ebp-20h]
  unsigned int v54; // [esp+8h] [ebp-1Ch]
  unsigned int v55; // [esp+Ch] [ebp-18h]
  _BYTE *v56; // [esp+10h] [ebp-14h]
  unsigned int v57; // [esp+14h] [ebp-10h]
  unsigned int v58; // [esp+14h] [ebp-10h]
  unsigned int v59; // [esp+14h] [ebp-10h]
  unsigned int v60; // [esp+18h] [ebp-Ch]
  _BYTE *v61; // [esp+1Ch] [ebp-8h]
  unsigned int v62; // [esp+1Ch] [ebp-8h]
  int v63; // [esp+20h] [ebp-4h]
  int v64; // [esp+20h] [ebp-4h]
  int v65; // [esp+20h] [ebp-4h]

  if ( !a7 )
    return -1073741592;
  v8 = a3;
  v9 = &a3[a4];
  v60 = (unsigned int)&a3[a4];
  v10 = (a7 + 3) & 0xFFFFFFFC;
  v11 = (_BYTE *)a1;
  v54 = v10;
  v61 = (_BYTE *)a1;
  v55 = a2 + a1;
LABEL_4:
  if ( v9 - v8 < 260 )
  {
    if ( v11 != (_BYTE *)v55 )
      return -1073741246;
    goto LABEL_93;
  }
  if ( XpressBuildHuffmanDecodingTable(v10, v8) )
    return -1073741246;
  v12 = 16;
  v13 = *((unsigned __int16 *)v8 + 129);
  v14 = v11 + 0x10000;
  v15 = *((unsigned __int16 *)v8 + 128) << 16;
  v8 += 260;
  v16 = v13 + v15;
  v56 = v11 + 0x10000;
  if ( (unsigned int)(v11 + 0x10000) > v55 )
  {
    v14 = (_BYTE *)(a2 + a1);
    v56 = (_BYTE *)(a2 + a1);
  }
  if ( v11 < v14 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *(_WORD *)(v54 + 2 * (v16 >> 22) + 1056);
        v48 = v17;
        if ( v17 > 0 )
        {
          v20 = v17 & 0xF;
          v16 <<= v20;
          v12 -= v20;
          v17 = v48;
        }
        else
        {
          v16 <<= 10;
          v12 -= 10;
          do
          {
            --v12;
            v19 = 2LL * v16;
            v18 = HIDWORD(v19);
            v16 = v19;
            v17 = *(_WORD *)(v54 + 2 * (__int16)(v18 - v17) + 3104);
          }
          while ( v17 <= 0 );
          v11 = v61;
        }
        v63 = v12;
        v21 = (v17 >> 4) - 256;
        v57 = v16;
        v51 = v21;
        if ( v12 < 0 )
        {
          if ( v11 >= v56 - 188 )
            goto LABEL_66;
          if ( (unsigned int)(v8 + 1) >= v60 )
            return -1073741246;
          v22 = *(unsigned __int16 *)v8;
          v8 += 2;
          v16 += v22 << -(char)v12;
          v12 += 16;
          v57 = v16;
          v63 = v12;
        }
        if ( v21 >= 0 )
          break;
        *v11++ = v21;
        v61 = v11;
      }
      if ( !v21 && (unsigned int)v8 >= v60 && v11 == (_BYTE *)v55 )
        goto LABEL_93;
      v23 = v21 / 16;
      v52 = v21 / 16;
      v24 = v21 % 16;
      if ( v24 == 15 )
      {
        if ( (unsigned int)v8 >= v60 )
          return -1073741246;
        v25 = *v8++;
        if ( v25 == 255 )
        {
          if ( (unsigned int)(v8 + 1) >= v60 )
            return -1073741246;
          v26 = *(unsigned __int16 *)v8;
          v8 += 2;
          if ( !v26 )
          {
            if ( (unsigned int)(v8 + 3) >= v60 )
              return -1073741246;
            v26 = *(_DWORD *)v8;
            v8 += 4;
          }
          if ( v26 < 0xF || &v11[v26 + 3] < v11 )
            return -1073741246;
          LOBYTE(v23) = v21 / 16;
          v25 = v26 - 15;
        }
        v24 = v25 + 15;
      }
      v27 = v57;
      v49 = v24;
      v28 = v24 + 3;
      v58 = (1 << v52) + (v57 >> (31 - v23) >> 1);
      v16 = v27 << v52;
      v29 = v63 - v52 < 0;
      v64 = v63 - v52;
      v62 = v28;
      if ( v29 )
      {
        v30 = v64;
        if ( v11 >= v56 - 188 )
          goto LABEL_85;
        if ( (unsigned int)(v8 + 1) >= v60 )
          return -1073741246;
        v31 = *(unsigned __int16 *)v8 << -(char)v64;
        v8 += 2;
        v16 += v31;
        v64 += 16;
      }
      v32 = &v11[-v58];
      if ( (unsigned int)&v11[-v58] < a1 )
        return -1073741246;
      if ( v58 < 4 )
        break;
LABEL_49:
      *(_DWORD *)v11 = *(_DWORD *)v32;
      *((_DWORD *)v11 + 1) = *((_DWORD *)v32 + 1);
      if ( v28 >= 9 )
      {
        v11 += 8;
        v35 = v32 + 8;
        v28 -= 8;
        while ( v11 < v56 - 188 )
        {
          *(_DWORD *)v11 = *v35;
          *((_DWORD *)v11 + 1) = v35[1];
          *((_DWORD *)v11 + 2) = v35[2];
          *((_DWORD *)v11 + 3) = v35[3];
          if ( v28 < 0x11 )
            goto LABEL_50;
          v11 += 16;
          v35 += 4;
          v28 -= 16;
        }
        if ( (unsigned int)&v11[v28] <= v55 )
        {
          qmemcpy(v11, v35, v28);
          v11 += v28;
LABEL_57:
          v12 = v64;
          goto LABEL_58;
        }
        return -1073741246;
      }
LABEL_50:
      v11 += v28;
      v61 = v11;
LABEL_10:
      v12 = v64;
    }
    if ( v58 == 1 )
    {
      *v11 = *v32;
      v11[1] = *v32;
      v33 = *v32;
    }
    else
    {
      *v11 = *v32;
      v11[1] = v32[1];
      if ( v58 == 2 )
      {
        v28 -= 2;
        v34 = 2;
        goto LABEL_48;
      }
      v33 = v32[2];
    }
    v28 = v49;
    v11[2] = v33;
    v34 = 3;
LABEL_48:
    v11 += v34;
    v61 = v11;
    if ( !v28 )
      goto LABEL_10;
    goto LABEL_49;
  }
  while ( 1 )
  {
    if ( v11 >= v14 )
    {
      v9 = &a3[a4];
      v10 = (a7 + 3) & 0xFFFFFFFC;
      goto LABEL_4;
    }
    v36 = *(_WORD *)(v54 + 2 * (v16 >> 22) + 1056);
    v50 = v36;
    if ( v36 > 0 )
    {
      v39 = v36 & 0xF;
      v16 <<= v39;
      v12 -= v39;
      v36 = v50;
    }
    else
    {
      v16 <<= 10;
      v12 -= 10;
      do
      {
        --v12;
        v38 = 2LL * v16;
        v37 = HIDWORD(v38);
        v16 = v38;
        v36 = *(_WORD *)(v54 + 2 * (__int16)(v37 - v36) + 3104);
      }
      while ( v36 <= 0 );
      v11 = v61;
    }
    v65 = v12;
    v40 = (v36 >> 4) - 256;
    v59 = v16;
    v51 = v40;
    if ( v12 < 0 )
    {
LABEL_66:
      if ( (unsigned int)(v8 + 1) < v60 )
      {
        v41 = *(unsigned __int16 *)v8;
        v8 += 2;
        v40 = v51;
        v16 += v41 << -(char)v12;
        v12 += 16;
        v59 = v16;
        v65 = v12;
        goto LABEL_68;
      }
      return -1073741246;
    }
LABEL_68:
    if ( v40 >= 0 )
      break;
    *v11++ = v40;
LABEL_58:
    v14 = v56;
    v61 = v11;
  }
  if ( !v40 && (unsigned int)v8 >= v60 && v11 == (_BYTE *)v55 )
  {
LABEL_93:
    *a6 = &v11[-a1];
    return 0;
  }
  v42 = v40 / 16;
  v53 = v40 / 16;
  v43 = v40 % 16;
  if ( v43 != 15 )
  {
LABEL_84:
    v46 = v59;
    v28 = v43 + 3;
    v62 = v28;
    v58 = (1 << v53) + (v59 >> (31 - v42) >> 1);
    v16 = v46 << v53;
    v30 = v65 - v53;
    v64 = v65 - v53;
    if ( v64 < 0 )
    {
LABEL_85:
      if ( (unsigned int)(v8 + 1) >= v60 )
        return -1073741246;
      v47 = *(unsigned __int16 *)v8 << -v30;
      v8 += 2;
      v16 += v47;
      v64 += 16;
    }
    if ( (unsigned int)&v11[-v58] >= a1 && (unsigned int)&v11[v28] <= v55 )
    {
      qmemcpy(v11, &v11[-v58], v62);
      v11 += v28;
      goto LABEL_57;
    }
    return -1073741246;
  }
  if ( (unsigned int)v8 >= v60 )
    return -1073741246;
  v44 = *v8++;
  if ( v44 != 255 )
  {
LABEL_83:
    v43 = v44 + 15;
    goto LABEL_84;
  }
  if ( (unsigned int)(v8 + 1) >= v60 )
    return -1073741246;
  v45 = *(unsigned __int16 *)v8;
  v8 += 2;
  if ( !v45 )
  {
    if ( (unsigned int)(v8 + 3) >= v60 )
      return -1073741246;
    v45 = *(_DWORD *)v8;
    v8 += 4;
  }
  if ( v45 >= 0xF && &v11[v45 + 3] >= v11 )
  {
    LOBYTE(v42) = v40 / 16;
    v44 = v45 - 15;
    goto LABEL_83;
  }
  return -1073741246;
}
