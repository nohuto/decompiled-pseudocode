/*
 * XREFs of _OutputAATo4BPP @ 0x1C0706
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAATo4BPP(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // edx
  char result; // al
  unsigned __int16 *v11; // esi
  unsigned __int8 *v12; // ebx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edi
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ebx
  _BYTE *v23; // edx
  char v24; // bl
  char v25; // bl
  char v26; // cl
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  char v33; // dl
  int v34; // ecx
  unsigned __int8 *v35; // ebx
  _DWORD v36[6]; // [esp+Ch] [ebp-48h] BYREF
  unsigned __int16 *v37; // [esp+24h] [ebp-30h]
  int v38; // [esp+28h] [ebp-2Ch]
  int v39; // [esp+2Ch] [ebp-28h]
  int v40; // [esp+30h] [ebp-24h]
  int v41; // [esp+34h] [ebp-20h]
  int v42; // [esp+38h] [ebp-1Ch]
  int v43; // [esp+3Ch] [ebp-18h]
  int v44; // [esp+40h] [ebp-14h]
  int v45; // [esp+44h] [ebp-10h]
  int v46; // [esp+48h] [ebp-Ch]
  unsigned __int8 *v47; // [esp+4Ch] [ebp-8h]
  char v48; // [esp+52h] [ebp-2h]
  char v49; // [esp+53h] [ebp-1h]
  int v50; // [esp+5Ch] [ebp+8h]
  int v51; // [esp+60h] [ebp+Ch]
  int v52; // [esp+60h] [ebp+Ch]

  v9 = a5;
  result = 0;
  v46 = 0;
  qmemcpy(v36, (const void *)(a5 - 24), sizeof(v36));
  if ( BYTE1(a9) )
  {
    result = 119;
    v46 = 2003830647;
  }
  v11 = a6;
  v48 = BYTE1(a9) == 0 ? 0 : 0x77;
  v12 = a4;
  v49 = BYTE1(a9) == 0 ? 0 : 7;
  v13 = a2;
  if ( (_BYTE)a9 )
  {
    v13 = a2 + 4;
    v47 = a2 + 4;
    if ( a2[7] )
    {
      v12 = a4;
      v13 = v47;
      *a4 = *a4 & 0xF0 | v49 ^ (BYTE2(v36[3]) & ((*(_DWORD *)(a5 + 4 * *v47) - (unsigned int)*a6) >> 16) | BYTE2(v36[4]) & ((*(_DWORD *)(a5 + 4 * v47[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE2(v36[5]) & ((*(_DWORD *)(a5 + 4 * a2[6] + 2048) - (unsigned int)a6[2]) >> 16));
      v9 = a5;
    }
    ++v12;
    v11 = a6 + 3;
    v47 = v12;
    if ( (unsigned int)(a6 + 3) >= a7 )
      v11 = (unsigned __int16 *)((char *)v11 + a8);
  }
  else
  {
    v47 = a4;
  }
  v14 = v13 + 4;
  if ( *a1 < 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v14 >= a3 )
        goto LABEL_29;
      v15 = v14[7] & 1;
      v16 = v14[3] & 2;
      v42 = (int)v11;
      v17 = v16 | v15;
      if ( v17 )
        break;
LABEL_20:
      ++v12;
      v11 += 6;
      v47 = v12;
      if ( (unsigned int)v11 >= a7 )
        v11 = (unsigned __int16 *)(v42 + a8 + 12);
      v14 += 8;
    }
    result = a5;
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        v51 = *(_DWORD *)(a5 + 4 * v14[6] + 2048) - v11[5];
        v19 = v11[4];
        v45 = *(_DWORD *)(a5 + 4 * v14[2] + 2048) - v11[2];
        v20 = *(_DWORD *)(a5 + 4 * v14[5] + 1024) - v19;
        v21 = v11[3];
        v44 = *(_DWORD *)(a5 + 4 * v14[1] + 1024) - v11[1];
        v22 = *(_DWORD *)(a5 + 4 * v14[4]) - v21;
        result = v46;
        v43 = *(_DWORD *)(a5 + 4 * *v14) - *v11;
        v23 = v47;
        v24 = v46 ^ (BYTE2(v36[0]) & BYTE2(v43) | BYTE2(v36[1]) & BYTE2(v44) | BYTE2(v36[2]) & BYTE2(v45) | BYTE2(v36[3]) & BYTE2(v22) | BYTE2(v36[4]) & BYTE2(v20) | BYTE2(v36[5]) & BYTE2(v51));
LABEL_19:
        *v23 = v24;
        v12 = v47;
        goto LABEL_20;
      }
      v23 = v47;
      v25 = BYTE2(v46) ^ (BYTE2(v36[0]) & ((*(_DWORD *)(a5 + 4 * *v14) - (unsigned int)*v11) >> 16) | BYTE2(v36[1]) & ((*(_DWORD *)(a5 + 4 * v14[1] + 1024) - (unsigned int)v11[1]) >> 16) | BYTE2(v36[2]) & ((*(_DWORD *)(a5 + 4 * v14[2] + 2048) - (unsigned int)v11[2]) >> 16));
      v26 = *v47 & 0xF;
    }
    else
    {
      result = v46;
      v23 = v47;
      v25 = BYTE1(v46) ^ (BYTE2(v36[3]) & ((*(_DWORD *)(a5 + 4 * v14[4]) - (unsigned int)*v11) >> 16) | BYTE2(v36[4]) & ((*(_DWORD *)(a5 + 4 * v14[5] + 1024) - (unsigned int)v11[1]) >> 16) | BYTE2(v36[5]) & ((*(_DWORD *)(a5 + 4 * v14[6] + 2048) - (unsigned int)v11[2]) >> 16));
      v26 = *v47 & 0xF0;
    }
    v24 = v26 | v25;
    goto LABEL_19;
  }
  if ( (unsigned int)v14 < a3 )
  {
    v40 = HIWORD(v36[3]);
    v38 = HIWORD(v36[5]);
    v50 = HIWORD(v36[4]);
    v45 = HIWORD(v36[0]);
    v43 = HIWORD(v36[2]);
    v44 = HIWORD(v36[1]);
    while ( 1 )
    {
      v27 = v14[6];
      v28 = v11[5];
      v37 = v11;
      v29 = *(_DWORD *)(v9 + 4 * v27 + 2048) - v28;
      v30 = v11[4];
      v39 = v29;
      v52 = *(_DWORD *)(v9 + 4 * v14[5] + 1024) - v30;
      v31 = v14[1];
      v32 = v11[1];
      v42 = *(_DWORD *)(v9 + 4 * v14[2] + 2048) - v11[2];
      v33 = v44 & ((unsigned int)(*(_DWORD *)(v9 + 4 * v31 + 1024) - v32) >> 16);
      v34 = *v11;
      v41 = *(_DWORD *)(a5 + 4 * v14[4]) - v11[3];
      v11 += 6;
      v35 = v47;
      result = v38 & BYTE2(v39);
      *v47 = v48 ^ (v38 & BYTE2(v39) | v40 & BYTE2(v41) | v45 & ((unsigned int)(*(_DWORD *)(a5 + 4 * *v14) - v34) >> 16) | v33 | v43 & BYTE2(v42) | v50 & BYTE2(v52));
      v47 = v35 + 1;
      if ( (unsigned int)v11 >= a7 )
        v11 = (unsigned __int16 *)((char *)v37 + a8 + 12);
      v14 += 8;
      if ( (unsigned int)v14 >= a3 )
        break;
      v9 = a5;
    }
  }
LABEL_29:
  if ( HIBYTE(a9) )
  {
    if ( v14[3] )
    {
      result = *v47 & 0xF;
      *v47 = result | BYTE2(v46) ^ (BYTE2(v36[0]) & ((*(_DWORD *)(a5 + 4 * *v14) - (unsigned int)*v11) >> 16) | BYTE2(v36[1]) & ((*(_DWORD *)(a5 + 4 * v14[1] + 1024) - (unsigned int)v11[1]) >> 16) | BYTE2(v36[2]) & ((*(_DWORD *)(a5 + 4 * v14[2] + 2048) - (unsigned int)v11[2]) >> 16));
    }
  }
  return result;
}
