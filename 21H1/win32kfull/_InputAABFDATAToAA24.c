/*
 * XREFs of _InputAABFDATAToAA24 @ 0x1C5834
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

char *__cdecl InputAABFDATAToAA24(int a1, char *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // ecx
  char *v4; // esi
  unsigned int v5; // edi
  int v6; // edx
  unsigned __int16 *v7; // ecx
  unsigned __int8 *v8; // ebx
  int v9; // edx
  int v10; // eax
  char v11; // dl
  unsigned int v12; // ebx
  char v13; // dl
  unsigned int v14; // ebx
  char *v15; // ecx
  char v16; // al
  unsigned int v17; // edx
  unsigned int v18; // edx
  char v19; // cl
  int v20; // eax
  int v21; // eax
  int v23; // [esp+Ch] [ebp-30h]
  int v24; // [esp+10h] [ebp-2Ch]
  unsigned int v25; // [esp+14h] [ebp-28h]
  size_t MaxCount; // [esp+18h] [ebp-24h]
  char *v27; // [esp+30h] [ebp-Ch]
  char *v28; // [esp+30h] [ebp-Ch]
  int v29; // [esp+34h] [ebp-8h]

  v2 = a1;
  v3 = *(unsigned __int16 **)(a1 + 20);
  v23 = *(_DWORD *)(a1 + 40);
  MaxCount = *(_DWORD *)(a1 + 32);
  v24 = *(_DWORD *)(a1 + 44);
  v25 = *(_DWORD *)(a1 + 48);
  v4 = a2;
  v5 = HIBYTE(v25);
  v27 = &a2[MaxCount];
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    v28 = &a2[*(_DWORD *)(a1 + 24)];
    v7 = *(unsigned __int16 **)(a1 + 20);
    v29 = v6;
    if ( (v23 & 1) != 0 )
    {
      v8 = *(unsigned __int8 **)(a1 + 20);
      do
      {
        v9 = *(_DWORD *)(v29 + 4 * v8[1] + 1024) + *(_DWORD *)(v6 + 4 * v8[2] + 2048);
        v10 = *v8;
        v8 += v5;
        *v4++ = (unsigned __int16)(*(_WORD *)(v29 + 4 * v10) + v9) >> 8;
        v6 = v29;
      }
      while ( v4 < v28 );
    }
    else if ( v5 == 4 )
    {
      v11 = BYTE1(v25);
      do
      {
        v12 = *(_DWORD *)v7;
        v7 += 2;
        *v4++ = (unsigned __int16)(*(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(v24 & ((unsigned __int8)(v12 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(BYTE2(v23) & ((unsigned __int8)(v12 >> v25) << SBYTE1(v24)))
                                            + 2048)
                                 + *(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(HIBYTE(v23) & ((unsigned __int8)(v12 >> v11) << SBYTE2(v24)))
                                            + 1024)) >> 8;
        v11 = BYTE1(v25);
      }
      while ( v4 < v28 );
    }
    else
    {
      v13 = BYTE1(v25);
      do
      {
        v14 = *v7++;
        *v4++ = (unsigned __int16)(*(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(v24 & ((unsigned __int8)(v14 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(BYTE2(v23) & ((unsigned __int8)(v14 >> v25) << SBYTE1(v24)))
                                            + 2048)
                                 + *(_WORD *)(v29
                                            + 4
                                            * (unsigned __int8)(HIBYTE(v23) & ((unsigned __int8)(v14 >> v13) << SBYTE2(v24)))
                                            + 1024)) >> 8;
        v13 = BYTE1(v25);
      }
      while ( v4 < v28 );
    }
  }
  else if ( (v23 & 1) != 0 )
  {
    if ( (v23 & 2) != 0 )
    {
      memcpy(a2, v3, MaxCount);
      goto LABEL_24;
    }
    v15 = (char *)v3 + HIBYTE(v23);
    do
    {
      v4[2] = v15[BYTE2(v23) - HIBYTE(v23)];
      v4[1] = *v15;
      v16 = v15[(unsigned __int8)v24 - HIBYTE(v23)];
      v15 += v5;
      *v4 = v16;
      v4 += 3;
    }
    while ( v4 < v27 );
  }
  else if ( v5 == 4 )
  {
    do
    {
      v17 = *(_DWORD *)v3;
      v4[2] = BYTE2(v23) & ((unsigned __int8)(*(_DWORD *)v3 >> v25) << SBYTE1(v24));
      v3 += 2;
      v4[1] = HIBYTE(v23) & ((unsigned __int8)(v17 >> SBYTE1(v25)) << SBYTE2(v24));
      *v4 = v24 & ((unsigned __int8)(v17 >> SBYTE2(v25)) << SHIBYTE(v24));
      v4 += 3;
    }
    while ( v4 < v27 );
  }
  else
  {
    do
    {
      v18 = *v3;
      v4[2] = BYTE2(v23) & ((unsigned __int8)(v18 >> v25) << SBYTE1(v24));
      ++v3;
      v4[1] = HIBYTE(v23) & ((unsigned __int8)(v18 >> SBYTE1(v25)) << SBYTE2(v24));
      *v4 = v24 & ((unsigned __int8)(v18 >> SBYTE2(v25)) << SHIBYTE(v24));
      v4 += 3;
    }
    while ( v4 < v27 );
  }
  v2 = a1;
LABEL_24:
  v19 = *(_BYTE *)v2;
  if ( (*(_BYTE *)v2 & 2) != 0 )
  {
    v20 = *(_DWORD *)(v2 + 28);
    if ( v20 && (v21 = v20 - 1, (*(_DWORD *)(v2 + 28) = v21) != 0) )
    {
      *(_DWORD *)(v2 + 20) += *(_DWORD *)(v2 + 36);
    }
    else if ( (v19 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 20) = *(_DWORD *)(v2 + 12);
      *(_DWORD *)(v2 + 28) = *(_DWORD *)(v2 + 16);
    }
    else
    {
      *(_BYTE *)v2 = v19 & 0xFD;
    }
  }
  return a2;
}
