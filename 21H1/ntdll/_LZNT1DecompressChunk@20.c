/*
 * XREFs of _LZNT1DecompressChunk@20 @ 0x4B2F505C
 * Callers:
 *     _RtlDecompressBufferLZNT1@28 @ 0x4B372A50 (_RtlDecompressBufferLZNT1@28.c)
 *     _RtlDecompressFragmentLZNT1@32 @ 0x4B372BD0 (_RtlDecompressFragmentLZNT1@32.c)
 * Callees:
 *     <none>
 */

int __stdcall LZNT1DecompressChunk(unsigned int a1, unsigned int a2, _BYTE *a3, int a4, _DWORD *a5)
{
  _BYTE *v5; // edi
  int v7; // ebx
  char v8; // al
  unsigned int v9; // esi
  int v10; // ecx
  _BYTE *v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  int v14; // ecx
  _BYTE *v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // ecx
  _BYTE *v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  int v22; // ecx
  _BYTE *v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // esi
  int v26; // ecx
  _BYTE *v27; // esi
  unsigned int v28; // ecx
  unsigned int v29; // esi
  int v30; // ecx
  _BYTE *v31; // esi
  unsigned int v32; // ecx
  unsigned int v33; // esi
  int v34; // ecx
  _BYTE *v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // esi
  int v38; // ecx
  _BYTE *v39; // esi
  unsigned int v40; // ecx
  unsigned int v41; // esi
  int v42; // ecx
  _BYTE *v43; // esi
  unsigned int v44; // ecx
  unsigned int v45; // esi
  int v46; // ecx
  _BYTE *v47; // esi
  unsigned int v48; // ecx
  unsigned int v49; // esi
  int v50; // ecx
  _BYTE *v51; // esi
  unsigned int v52; // ecx
  unsigned int v53; // esi
  int v54; // ecx
  _BYTE *v55; // esi
  unsigned int v56; // ecx
  unsigned int v57; // esi
  int v58; // ecx
  _BYTE *v59; // esi
  unsigned int v60; // ecx
  unsigned int v61; // esi
  int v62; // ecx
  _BYTE *v63; // esi
  unsigned int v64; // ecx
  unsigned int v65; // esi
  int v66; // ecx
  _BYTE *v67; // esi
  unsigned int v68; // ecx
  unsigned int v69; // esi
  int v70; // ecx
  _BYTE *v71; // esi
  unsigned int v72; // ecx
  _BYTE *v74; // [esp+Ch] [ebp-Ch]
  _BYTE *v75; // [esp+Ch] [ebp-Ch]
  _BYTE *v76; // [esp+Ch] [ebp-Ch]
  _BYTE *v77; // [esp+Ch] [ebp-Ch]
  _BYTE *v78; // [esp+Ch] [ebp-Ch]
  _BYTE *v79; // [esp+Ch] [ebp-Ch]
  _BYTE *v80; // [esp+Ch] [ebp-Ch]
  _BYTE *v81; // [esp+Ch] [ebp-Ch]
  _BYTE *v82; // [esp+Ch] [ebp-Ch]
  _BYTE *v83; // [esp+Ch] [ebp-Ch]
  _BYTE *v84; // [esp+Ch] [ebp-Ch]
  _BYTE *v85; // [esp+Ch] [ebp-Ch]
  _BYTE *v86; // [esp+Ch] [ebp-Ch]
  _BYTE *v87; // [esp+Ch] [ebp-Ch]
  _BYTE *v88; // [esp+Ch] [ebp-Ch]
  _BYTE *v89; // [esp+Ch] [ebp-Ch]
  unsigned int v90; // [esp+10h] [ebp-8h]
  unsigned int v91; // [esp+14h] [ebp-4h]
  unsigned int v92; // [esp+2Ch] [ebp+14h]
  unsigned int v93; // [esp+2Ch] [ebp+14h]

  v5 = (_BYTE *)a1;
  v92 = a4 - 17;
  v91 = a2 - 8;
  v90 = a1;
  v7 = 13;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    if ( (unsigned int)a3 >= v92 || (unsigned int)v5 >= v91 )
                    {
                      v93 = v92 + 17;
                      goto LABEL_89;
                    }
                    v8 = *a3;
                    if ( (*a3 & 1) != 0 )
                      break;
                    *v5 = a3[1];
                    if ( (v8 & 2) != 0 )
                      goto LABEL_25;
                    v5[1] = a3[2];
                    if ( (v8 & 4) != 0 )
                      goto LABEL_37;
                    v5[2] = a3[3];
                    if ( (v8 & 8) != 0 )
                      goto LABEL_48;
                    v5[3] = a3[4];
                    if ( (v8 & 0x10) != 0 )
                      goto LABEL_58;
                    v5[4] = a3[5];
                    if ( (v8 & 0x20) != 0 )
                      goto LABEL_67;
                    v5[5] = a3[6];
                    if ( (v8 & 0x40) != 0 )
                      goto LABEL_75;
                    v5[6] = a3[7];
                    if ( v8 < 0 )
                      goto LABEL_82;
                    v5[7] = a3[8];
                    a3 += 9;
                    v5 += 8;
                  }
                  while ( (unsigned int)v5 > v90 )
                    v90 = dword_4B2F510E[--v7] + a1;
                  v74 = a3 + 1;
                  v9 = *(unsigned __int16 *)(a3 + 1);
                  v10 = dword_4B2F5152[v7] & v9;
                  v11 = &v5[-(v9 >> v7) - 1];
                  if ( (unsigned int)v11 < a1 )
                    return -1073741246;
                  v12 = v10 + 3;
                  if ( (unsigned int)&v5[v12] >= v91 )
                  {
                    v93 = v92 + 17;
                    a3 = v74 - 1;
                    goto LABEL_92;
                  }
                  qmemcpy(v5, v11, v12);
                  a3 = v74;
                  v5 = &v5[v12 - 1];
                  if ( (v8 & 2) != 0 )
                    break;
                  v5[1] = v74[2];
                  if ( (v8 & 4) != 0 )
                    goto LABEL_37;
                  v5[2] = v74[3];
                  if ( (v8 & 8) != 0 )
                    goto LABEL_48;
                  v5[3] = v74[4];
                  if ( (v8 & 0x10) != 0 )
                    goto LABEL_58;
                  v5[4] = v74[5];
                  if ( (v8 & 0x20) != 0 )
                    goto LABEL_67;
                  v5[5] = v74[6];
                  if ( (v8 & 0x40) != 0 )
                    goto LABEL_75;
                  v5[6] = v74[7];
                  if ( v8 < 0 )
                    goto LABEL_82;
                  v5[7] = v74[8];
                  a3 = v74 + 9;
                  v5 += 8;
                }
LABEL_25:
                ++v5;
                while ( (unsigned int)v5 > v90 )
                  v90 = dword_4B2F510E[--v7] + a1;
                v75 = a3 + 1;
                v13 = *((unsigned __int16 *)a3 + 1);
                v14 = dword_4B2F5152[v7] & v13;
                v15 = &v5[-(v13 >> v7) - 1];
                if ( (unsigned int)v15 < a1 )
                  return -1073741246;
                v16 = v14 + 3;
                if ( (unsigned int)&v5[v16] >= v91 )
                {
                  v93 = v92 + 17;
                  a3 = v75 - 1;
                  goto LABEL_103;
                }
                qmemcpy(v5, v15, v16);
                a3 = v75;
                v5 = &v5[v16 - 2];
                if ( (v8 & 4) != 0 )
                  break;
                v5[2] = v75[3];
                if ( (v8 & 8) != 0 )
                  goto LABEL_48;
                v5[3] = v75[4];
                if ( (v8 & 0x10) != 0 )
                  goto LABEL_58;
                v5[4] = v75[5];
                if ( (v8 & 0x20) != 0 )
                  goto LABEL_67;
                v5[5] = v75[6];
                if ( (v8 & 0x40) != 0 )
                  goto LABEL_75;
                v5[6] = v75[7];
                if ( v8 < 0 )
                  goto LABEL_82;
                v5[7] = v75[8];
                a3 = v75 + 9;
                v5 += 8;
              }
LABEL_37:
              v5 += 2;
              while ( (unsigned int)v5 > v90 )
                v90 = dword_4B2F510E[--v7] + a1;
              v76 = a3 + 1;
              v17 = *(unsigned __int16 *)(a3 + 3);
              v18 = dword_4B2F5152[v7] & v17;
              v19 = &v5[-(v17 >> v7) - 1];
              if ( (unsigned int)v19 < a1 )
                return -1073741246;
              v20 = v18 + 3;
              if ( (unsigned int)&v5[v20] >= v91 )
              {
                v93 = v92 + 17;
                a3 = v76 - 1;
                goto LABEL_114;
              }
              qmemcpy(v5, v19, v20);
              a3 = v76;
              v5 = &v5[v20 - 3];
              if ( (v8 & 8) != 0 )
                break;
              v5[3] = v76[4];
              if ( (v8 & 0x10) != 0 )
                goto LABEL_58;
              v5[4] = v76[5];
              if ( (v8 & 0x20) != 0 )
                goto LABEL_67;
              v5[5] = v76[6];
              if ( (v8 & 0x40) != 0 )
                goto LABEL_75;
              v5[6] = v76[7];
              if ( v8 < 0 )
                goto LABEL_82;
              v5[7] = v76[8];
              a3 = v76 + 9;
              v5 += 8;
            }
LABEL_48:
            v5 += 3;
            while ( (unsigned int)v5 > v90 )
              v90 = dword_4B2F510E[--v7] + a1;
            v77 = a3 + 1;
            v21 = *((unsigned __int16 *)a3 + 2);
            v22 = dword_4B2F5152[v7] & v21;
            v23 = &v5[-(v21 >> v7) - 1];
            if ( (unsigned int)v23 < a1 )
              return -1073741246;
            v24 = v22 + 3;
            if ( (unsigned int)&v5[v24] >= v91 )
            {
              v93 = v92 + 17;
              a3 = v77 - 1;
              goto LABEL_125;
            }
            qmemcpy(v5, v23, v24);
            a3 = v77;
            v5 = &v5[v24 - 4];
            if ( (v8 & 0x10) != 0 )
              break;
            v5[4] = v77[5];
            if ( (v8 & 0x20) != 0 )
              goto LABEL_67;
            v5[5] = v77[6];
            if ( (v8 & 0x40) != 0 )
              goto LABEL_75;
            v5[6] = v77[7];
            if ( v8 < 0 )
              goto LABEL_82;
            v5[7] = v77[8];
            a3 = v77 + 9;
            v5 += 8;
          }
LABEL_58:
          v5 += 4;
          while ( (unsigned int)v5 > v90 )
            v90 = dword_4B2F510E[--v7] + a1;
          v78 = a3 + 1;
          v25 = *(unsigned __int16 *)(a3 + 5);
          v26 = dword_4B2F5152[v7] & v25;
          v27 = &v5[-(v25 >> v7) - 1];
          if ( (unsigned int)v27 < a1 )
            return -1073741246;
          v28 = v26 + 3;
          if ( (unsigned int)&v5[v28] >= v91 )
          {
            v93 = v92 + 17;
            a3 = v78 - 1;
            goto LABEL_136;
          }
          qmemcpy(v5, v27, v28);
          a3 = v78;
          v5 = &v5[v28 - 5];
          if ( (v8 & 0x20) != 0 )
            break;
          v5[5] = v78[6];
          if ( (v8 & 0x40) != 0 )
            goto LABEL_75;
          v5[6] = v78[7];
          if ( v8 < 0 )
            goto LABEL_82;
          v5[7] = v78[8];
          a3 = v78 + 9;
          v5 += 8;
        }
LABEL_67:
        v5 += 5;
        while ( (unsigned int)v5 > v90 )
          v90 = dword_4B2F510E[--v7] + a1;
        v79 = a3 + 1;
        v29 = *((unsigned __int16 *)a3 + 3);
        v30 = dword_4B2F5152[v7] & v29;
        v31 = &v5[-(v29 >> v7) - 1];
        if ( (unsigned int)v31 < a1 )
          return -1073741246;
        v32 = v30 + 3;
        if ( (unsigned int)&v5[v32] >= v91 )
        {
          v93 = v92 + 17;
          a3 = v79 - 1;
          goto LABEL_147;
        }
        qmemcpy(v5, v31, v32);
        a3 = v79;
        v5 = &v5[v32 - 6];
        if ( (v8 & 0x40) != 0 )
          break;
        v5[6] = v79[7];
        if ( v8 < 0 )
          goto LABEL_82;
        v5[7] = v79[8];
        a3 = v79 + 9;
        v5 += 8;
      }
LABEL_75:
      v5 += 6;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v80 = a3 + 1;
      v33 = *(unsigned __int16 *)(a3 + 7);
      v34 = dword_4B2F5152[v7] & v33;
      v35 = &v5[-(v33 >> v7) - 1];
      if ( (unsigned int)v35 < a1 )
        return -1073741246;
      v36 = v34 + 3;
      if ( (unsigned int)&v5[v36] >= v91 )
      {
        v93 = v92 + 17;
        a3 = v80 - 1;
        goto LABEL_158;
      }
      qmemcpy(v5, v35, v36);
      a3 = v80;
      v5 = &v5[v36 - 7];
      if ( v8 < 0 )
        break;
      v5[7] = v80[8];
      a3 = v80 + 9;
      v5 += 8;
    }
LABEL_82:
    v5 += 7;
    while ( (unsigned int)v5 > v90 )
      v90 = dword_4B2F510E[--v7] + a1;
    v81 = a3 + 1;
    v37 = *((unsigned __int16 *)a3 + 4);
    v38 = dword_4B2F5152[v7] & v37;
    v39 = &v5[-(v37 >> v7) - 1];
    if ( (unsigned int)v39 < a1 )
      return -1073741246;
    v40 = v38 + 3;
    if ( (unsigned int)&v5[v40] >= v91 )
      break;
    qmemcpy(v5, v39, v40);
    v5 += v40;
    a3 = v81 + 9;
  }
  v93 = v92 + 17;
  a3 = v81 - 1;
  while ( a3 + 8 != (_BYTE *)v93 && v5 != (_BYTE *)a2 )
  {
    if ( v8 < 0 )
    {
      if ( (unsigned int)(a3 + 10) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v89 = a3 + 1;
      v69 = *((unsigned __int16 *)a3 + 4);
      v70 = dword_4B2F5152[v7] & v69;
      v71 = &v5[-(v69 >> v7) - 1];
      if ( (unsigned int)v71 < a1 )
        return -1073741246;
      v72 = v70 + 3;
      if ( (unsigned int)&v5[v72] > a2 )
        return -1073741246;
      qmemcpy(v5, v71, v72);
      v5 += v72;
      a3 = v89;
    }
    else
    {
      *v5++ = a3[8];
    }
    a3 += 9;
LABEL_89:
    if ( a3 == (_BYTE *)v93 )
      break;
    v8 = *a3;
LABEL_92:
    if ( a3 + 1 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 1) != 0 )
    {
      if ( (unsigned int)(a3 + 3) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v82 = a3 + 1;
      v41 = *(unsigned __int16 *)(a3 + 1);
      v42 = dword_4B2F5152[v7] & v41;
      v43 = &v5[-(v41 >> v7) - 1];
      if ( (unsigned int)v43 < a1 )
        return -1073741246;
      v44 = v42 + 3;
      if ( (unsigned int)&v5[v44] > a2 )
        return -1073741246;
      qmemcpy(v5, v43, v44);
      v5 += v44;
      a3 = v82;
    }
    else
    {
      *v5++ = a3[1];
    }
LABEL_103:
    if ( a3 + 2 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 2) != 0 )
    {
      if ( (unsigned int)(a3 + 4) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v83 = a3 + 1;
      v45 = *((unsigned __int16 *)a3 + 1);
      v46 = dword_4B2F5152[v7] & v45;
      v47 = &v5[-(v45 >> v7) - 1];
      if ( (unsigned int)v47 < a1 )
        return -1073741246;
      v48 = v46 + 3;
      if ( (unsigned int)&v5[v48] > a2 )
        return -1073741246;
      qmemcpy(v5, v47, v48);
      v5 += v48;
      a3 = v83;
    }
    else
    {
      *v5++ = a3[2];
    }
LABEL_114:
    if ( a3 + 3 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 4) != 0 )
    {
      if ( (unsigned int)(a3 + 5) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v84 = a3 + 1;
      v49 = *(unsigned __int16 *)(a3 + 3);
      v50 = dword_4B2F5152[v7] & v49;
      v51 = &v5[-(v49 >> v7) - 1];
      if ( (unsigned int)v51 < a1 )
        return -1073741246;
      v52 = v50 + 3;
      if ( (unsigned int)&v5[v52] > a2 )
        return -1073741246;
      qmemcpy(v5, v51, v52);
      v5 += v52;
      a3 = v84;
    }
    else
    {
      *v5++ = a3[3];
    }
LABEL_125:
    if ( a3 + 4 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 8) != 0 )
    {
      if ( (unsigned int)(a3 + 6) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v85 = a3 + 1;
      v53 = *((unsigned __int16 *)a3 + 2);
      v54 = dword_4B2F5152[v7] & v53;
      v55 = &v5[-(v53 >> v7) - 1];
      if ( (unsigned int)v55 < a1 )
        return -1073741246;
      v56 = v54 + 3;
      if ( (unsigned int)&v5[v56] > a2 )
        return -1073741246;
      qmemcpy(v5, v55, v56);
      v5 += v56;
      a3 = v85;
    }
    else
    {
      *v5++ = a3[4];
    }
LABEL_136:
    if ( a3 + 5 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 0x10) != 0 )
    {
      if ( (unsigned int)(a3 + 7) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v86 = a3 + 1;
      v57 = *(unsigned __int16 *)(a3 + 5);
      v58 = dword_4B2F5152[v7] & v57;
      v59 = &v5[-(v57 >> v7) - 1];
      if ( (unsigned int)v59 < a1 )
        return -1073741246;
      v60 = v58 + 3;
      if ( (unsigned int)&v5[v60] > a2 )
        return -1073741246;
      qmemcpy(v5, v59, v60);
      v5 += v60;
      a3 = v86;
    }
    else
    {
      *v5++ = a3[5];
    }
LABEL_147:
    if ( a3 + 6 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 0x20) != 0 )
    {
      if ( (unsigned int)(a3 + 8) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v87 = a3 + 1;
      v61 = *((unsigned __int16 *)a3 + 3);
      v62 = dword_4B2F5152[v7] & v61;
      v63 = &v5[-(v61 >> v7) - 1];
      if ( (unsigned int)v63 < a1 )
        return -1073741246;
      v64 = v62 + 3;
      if ( (unsigned int)&v5[v64] > a2 )
        return -1073741246;
      qmemcpy(v5, v63, v64);
      v5 += v64;
      a3 = v87;
    }
    else
    {
      *v5++ = a3[6];
    }
LABEL_158:
    if ( a3 + 7 == (_BYTE *)v93 || v5 == (_BYTE *)a2 )
      break;
    if ( (v8 & 0x40) != 0 )
    {
      if ( (unsigned int)(a3 + 9) > v93 )
        return -1073741246;
      while ( (unsigned int)v5 > v90 )
        v90 = dword_4B2F510E[--v7] + a1;
      v88 = a3 + 1;
      v65 = *(unsigned __int16 *)(a3 + 7);
      v66 = dword_4B2F5152[v7] & v65;
      v67 = &v5[-(v65 >> v7) - 1];
      if ( (unsigned int)v67 < a1 )
        return -1073741246;
      v68 = v66 + 3;
      if ( (unsigned int)&v5[v68] > a2 )
        return -1073741246;
      qmemcpy(v5, v67, v68);
      v5 += v68;
      a3 = v88;
    }
    else
    {
      *v5++ = a3[7];
    }
  }
  *a5 = &v5[-a1];
  return 0;
}
