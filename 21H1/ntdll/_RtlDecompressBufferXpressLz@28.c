/*
 * XREFs of _RtlDecompressBufferXpressLz@28 @ 0x4B374C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlDecompressBufferXpressLz(
        unsigned int a1,
        int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  unsigned __int8 *v7; // edx
  _BYTE *v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ebx
  bool v13; // sf
  unsigned int v14; // edi
  int v15; // esi
  int v16; // edi
  unsigned __int8 *v17; // eax
  int v18; // esi
  int v19; // esi
  unsigned __int8 *v20; // eax
  int v21; // esi
  _BYTE *v22; // edi
  signed int v23; // esi
  char v24; // al
  int v25; // eax
  _DWORD *v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // esi
  unsigned int v29; // edi
  int v30; // esi
  unsigned int v31; // eax
  unsigned __int8 *v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  unsigned int v36; // esi
  __int16 v37; // ax
  unsigned int v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+14h] [ebp-14h]
  unsigned __int8 *v41; // [esp+18h] [ebp-10h]
  _BYTE *v42; // [esp+1Ch] [ebp-Ch]
  unsigned int v43; // [esp+20h] [ebp-8h]
  unsigned int v44; // [esp+24h] [ebp-4h]

  if ( a4 < 5 )
    return -1073741246;
  v7 = a3;
  v8 = (_BYTE *)a1;
  v43 = a1 + a2;
  v41 = 0;
  v44 = (unsigned int)&a3[a4];
  v9 = (unsigned int)&a3[a4 - 86];
  v10 = a1 + a2 - 352;
LABEL_3:
  v11 = *(_DWORD *)v7;
  v7 += 4;
  if ( (unsigned int)v7 < v9 && (unsigned int)v8 < v10 )
  {
    v12 = 2 * v11 + 1;
    if ( v11 >= 0 )
    {
      while ( 1 )
      {
        if ( v12 < 0 )
        {
          *v8++ = *v7++;
          goto LABEL_13;
        }
        v13 = (v12 & 0x40000000) != 0;
        v12 *= 2;
        if ( v13 )
        {
          *(_WORD *)v8 = *(_WORD *)v7;
          v8 += 2;
          v7 += 2;
          goto LABEL_13;
        }
        v13 = (v12 & 0x40000000) != 0;
        v12 *= 2;
        *(_DWORD *)v8 = *(_DWORD *)v7;
        if ( v13 )
        {
          v8 += 3;
          v7 += 3;
          goto LABEL_13;
        }
        v8 += 4;
        v7 += 4;
        v13 = (v12 & 0x40000000) != 0;
        v12 *= 2;
        if ( v13 )
          goto LABEL_13;
LABEL_44:
        v12 *= 2;
      }
    }
    while ( 1 )
    {
      v14 = *(unsigned __int16 *)v7;
      v7 += 2;
      v15 = v14 & 7;
      v16 = (v14 >> 3) + 1;
      v39 = v16;
      if ( v15 == 7 )
      {
        if ( v41 )
        {
          v18 = *v41 >> 4;
          v41 = 0;
        }
        else
        {
          v17 = v7++;
          v41 = v17;
          v18 = *v17 & 0xF;
        }
        if ( v18 == 15 )
        {
          if ( v7 + 7 >= &a3[a4 - 86] )
          {
            v31 = (unsigned int)&a3[a4];
            goto LABEL_60;
          }
          v19 = *v7++;
          v20 = v7;
          if ( v19 == 255 )
          {
            v21 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v21 )
            {
              v21 = *(_DWORD *)v7;
              v7 = v20 + 6;
            }
            if ( v21 < 22 || &v8[v21 + 3] < v8 )
              return -1073741246;
            v19 = v21 - 22;
          }
          v18 = v19 + 15;
        }
        v15 = v18 + 7;
      }
      v22 = &v8[-v16];
      v23 = v15 + 3;
      v42 = &v8[-v39];
      if ( (unsigned int)&v8[-v39] < a1 )
        return -1073741246;
      if ( v39 < 4 )
        break;
LABEL_37:
      *(_DWORD *)v8 = *(_DWORD *)v22;
      *((_DWORD *)v8 + 1) = *((_DWORD *)v22 + 1);
      if ( v23 >= 9 )
      {
        v8 += 8;
        v26 = v22 + 8;
        v23 -= 8;
        while ( (unsigned int)v8 < a1 + a2 - 352 )
        {
          *(_DWORD *)v8 = *v26;
          *((_DWORD *)v8 + 1) = v26[1];
          *((_DWORD *)v8 + 2) = v26[2];
          *((_DWORD *)v8 + 3) = v26[3];
          if ( v23 < 17 )
            goto LABEL_42;
          v8 += 16;
          v26 += 4;
          v23 -= 16;
        }
        if ( (unsigned int)&v8[v23] <= v43 )
        {
          qmemcpy(v8, v26, v23);
          v8 += v23;
          goto LABEL_74;
        }
        return -1073741246;
      }
LABEL_42:
      v8 += v23;
LABEL_43:
      if ( v12 >= 0 )
        goto LABEL_44;
LABEL_13:
      v12 *= 2;
      if ( !v12 )
      {
        v10 = a1 + a2 - 352;
        v9 = (unsigned int)&a3[a4 - 86];
        goto LABEL_3;
      }
    }
    if ( v39 == 1 )
    {
      *v8 = *v22;
      v8[1] = *v22;
      v24 = *v22;
    }
    else
    {
      *v8 = *v22;
      v8[1] = v22[1];
      if ( v39 == 2 )
      {
        v25 = 2;
        v40 = -2;
        goto LABEL_36;
      }
      v24 = v22[2];
    }
    v8[2] = v24;
    v25 = 3;
    v40 = -3;
LABEL_36:
    v22 = v42;
    v8 += v25;
    v23 += v40;
    if ( !v23 )
      goto LABEL_43;
    goto LABEL_37;
  }
  v27 = a1 + a2;
  v28 = (unsigned int)&a3[a4];
LABEL_49:
  v12 = 2 * v11 + 1;
  if ( v11 >= 0 )
    goto LABEL_76;
  while ( 1 )
  {
    if ( v7 == (unsigned __int8 *)v28 )
      goto LABEL_90;
    if ( (unsigned int)(v7 + 1) >= v28 )
    {
      if ( (unsigned int)v8 < v27 )
        return -1073741246;
LABEL_90:
      *a6 = &v8[-a1];
      return 0;
    }
    v29 = *(unsigned __int16 *)v7;
    v7 += 2;
    v30 = v29 & 7;
    v16 = (v29 >> 3) + 1;
    if ( v30 == 7 )
      break;
LABEL_71:
    v36 = v30 + 3;
    if ( (unsigned int)&v8[-v16] < a1 || (unsigned int)&v8[v36] > v43 )
      return -1073741246;
    qmemcpy(v8, &v8[-v16], v36);
    v8 += v36;
LABEL_74:
    v28 = (unsigned int)&a3[a4];
    v27 = a1 + a2;
    if ( v12 < 0 )
      goto LABEL_86;
    v12 *= 2;
LABEL_76:
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        v12 *= 2;
        if ( (unsigned int)(v7 + 2) > v28 || (unsigned int)(v8 + 2) > v43 )
          return -1073741246;
        v37 = *(_WORD *)v7;
        v7 += 2;
        *(_WORD *)v8 = v37;
        v8 += 2;
        v28 = (unsigned int)&a3[a4];
        if ( v12 < 0 )
        {
          v27 = a1 + a2;
          goto LABEL_86;
        }
        v13 = (v12 & 0x40000000) != 0;
        v12 *= 2;
        if ( v13 )
        {
          v27 = a1 + a2;
          break;
        }
      }
    }
    if ( (unsigned int)v7 >= v28 || (unsigned int)v8 >= v27 )
      return -1073741246;
    *v8++ = *v7++;
LABEL_86:
    v12 *= 2;
    if ( !v12 )
    {
      if ( (unsigned int)(v7 + 3) >= v28 )
        return -1073741246;
      v11 = *(_DWORD *)v7;
      v7 += 4;
      goto LABEL_49;
    }
  }
  if ( v41 )
  {
    v31 = (unsigned int)&a3[a4];
    v33 = *v41 >> 4;
    v41 = 0;
  }
  else
  {
    v31 = (unsigned int)&a3[a4];
    if ( (unsigned int)v7 >= v44 )
      return -1073741246;
    v32 = v7++;
    v41 = v32;
    v33 = *v32 & 0xF;
  }
  if ( v33 != 15 )
  {
LABEL_70:
    v30 = v33 + 7;
    goto LABEL_71;
  }
LABEL_60:
  if ( (unsigned int)v7 >= v31 )
    return -1073741246;
  v34 = *v7++;
  if ( v34 != 255 )
  {
LABEL_69:
    v33 = v34 + 15;
    goto LABEL_70;
  }
  if ( (unsigned int)(v7 + 1) >= v44 )
    return -1073741246;
  v35 = *(unsigned __int16 *)v7;
  v7 += 2;
  if ( !v35 )
  {
    if ( (unsigned int)(v7 + 3) >= v44 )
      return -1073741246;
    v35 = *(_DWORD *)v7;
    v7 += 4;
  }
  if ( v35 >= 22 && &v8[v35 + 3] >= v8 )
  {
    v34 = v35 - 22;
    goto LABEL_69;
  }
  return -1073741246;
}
