/*
 * XREFs of _OutputAAToVGA16 @ 0x1C11FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAAToVGA16(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // edx
  _BYTE *v10; // ebx
  unsigned __int8 *v11; // edi
  unsigned __int16 *v12; // esi
  int v13; // eax
  unsigned __int8 *v14; // edi
  int v15; // ecx
  int v16; // ecx
  bool v17; // zf
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // edx
  char v21; // al
  int v22; // edx
  int v23; // ecx
  _BYTE *v24; // ebx
  _DWORD v26[6]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE *v27; // [esp+24h] [ebp-4h]
  unsigned __int16 *v28; // [esp+34h] [ebp+Ch]
  unsigned __int16 *v29; // [esp+34h] [ebp+Ch]

  v9 = a5;
  v10 = a4;
  qmemcpy(v26, (const void *)(a5 - 24), sizeof(v26));
  v11 = a2;
  v12 = a6;
  if ( (_BYTE)a9 )
  {
    v11 = a2 + 4;
    if ( a2[7] )
    {
      v9 = a5;
      *a4 = VGA16Xlate[((v26[3] & (*(_DWORD *)(a5 + 4 * *v11) - *a6) | v26[4] & (*(_DWORD *)(a5 + 4 * v11[1] + 1024)
                                                                               - a6[1]) | v26[5] & (*(_DWORD *)(a5 + 4 * v11[2] + 2048)
                                                                                                  - a6[2])) ^ 0x70000u) >> 16] | *a4 & 0xF0;
    }
    v10 = a4 + 1;
    v12 = a6 + 3;
    v27 = a4 + 1;
    if ( (unsigned int)(a6 + 3) >= a7 )
      v12 = (unsigned __int16 *)((char *)v12 + a8);
  }
  else
  {
    v27 = a4;
  }
  LOBYTE(v13) = (_BYTE)a1;
  v14 = v11 + 4;
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v14 < a3 )
    {
      while ( 1 )
      {
        v29 = v12;
        v22 = v26[4] & (*(_DWORD *)(a5 + 4 * v14[5] + 1024) - v12[4]) | v26[1] & (*(_DWORD *)(a5 + 4 * v14[1] + 1024)
                                                                                - v12[1]) | v26[5] & (*(_DWORD *)(a5 + 4 * v14[6] + 2048) - v12[5]) | v26[2] & (*(_DWORD *)(v9 + 4 * v14[2] + 2048) - v12[2]);
        v23 = *v12;
        v13 = v26[3] & (*(_DWORD *)(a5 + 4 * v14[4]) - v12[3]);
        v12 += 6;
        v24 = v27;
        LOBYTE(v13) = VGA16Xlate[((v26[0] & (*(_DWORD *)(a5 + 4 * *v14) - v23) | v13 | v22) ^ 0x770000u) >> 16];
        *v27 = v13;
        v27 = v24 + 1;
        if ( (unsigned int)v12 >= a7 )
          v12 = (unsigned __int16 *)((char *)v29 + a8 + 12);
        v14 += 8;
        if ( (unsigned int)v14 >= a3 )
          break;
        v9 = a5;
      }
    }
  }
  else if ( (unsigned int)v14 < a3 )
  {
    while ( 1 )
    {
      v13 = v14[3] & 2;
      v28 = v12;
      v15 = v13 | v14[7] & 1;
      if ( !v15 )
        goto LABEL_19;
      v16 = v15 - 1;
      if ( !v16 )
        break;
      v17 = v16 == 1;
      v18 = v12[2];
      v19 = *(_DWORD *)(v9 + 4 * v14[2] + 2048);
      if ( v17 )
      {
        v10 = v27;
        v20 = (v26[0] & (*(_DWORD *)(a5 + 4 * *v14) - *v12) | v26[1] & (*(_DWORD *)(a5 + 4 * v14[1] + 1024) - v12[1]) | v26[2] & (v19 - v18)) ^ 0x700000;
        v21 = *v27 & 0xF;
LABEL_17:
        LOBYTE(v13) = VGA16Xlate[HIWORD(v20)] | v21;
        goto LABEL_18;
      }
      v10 = v27;
      LOBYTE(v13) = VGA16Xlate[((v26[0] & (*(_DWORD *)(a5 + 4 * *v14) - *v12) | v26[3] & (*(_DWORD *)(a5 + 4 * v14[4])
                                                                                        - v12[3]) | v26[4] & (*(_DWORD *)(a5 + 4 * v14[5] + 1024) - v12[4]) | v26[1] & (*(_DWORD *)(a5 + 4 * v14[1] + 1024) - v12[1]) | v26[5] & (*(_DWORD *)(a5 + 4 * v14[6] + 2048) - v12[5]) | v26[2] & (v19 - v18)) ^ 0x770000u) >> 16];
LABEL_18:
      *v10 = v13;
LABEL_19:
      ++v10;
      v12 += 6;
      v27 = v10;
      if ( (unsigned int)v12 >= a7 )
        v12 = (unsigned __int16 *)((char *)v28 + a8 + 12);
      v14 += 8;
      if ( (unsigned int)v14 >= a3 )
        goto LABEL_29;
      v9 = a5;
    }
    v10 = v27;
    v20 = (v26[3] & (*(_DWORD *)(a5 + 4 * v14[4]) - *v12) | v26[4] & (*(_DWORD *)(a5 + 4 * v14[5] + 1024) - v12[1]) | v26[5] & (*(_DWORD *)(v9 + 4 * v14[6] + 2048) - v12[2])) ^ 0x70000;
    v21 = *v27 & 0xF0;
    goto LABEL_17;
  }
LABEL_29:
  if ( HIBYTE(a9) && v14[3] )
  {
    LOBYTE(v13) = VGA16Xlate[((v26[0] & (*(_DWORD *)(a5 + 4 * *v14) - *v12) | v26[1] & (*(_DWORD *)(a5
                                                                                                  + 4 * v14[1]
                                                                                                  + 1024)
                                                                                      - v12[1]) | v26[2] & (*(_DWORD *)(a5 + 4 * v14[2] + 2048) - v12[2])) ^ 0x700000u) >> 16] | *v27 & 0xF;
    *v27 = v13;
  }
  return v13;
}
