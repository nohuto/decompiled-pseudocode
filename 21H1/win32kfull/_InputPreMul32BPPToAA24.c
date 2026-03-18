/*
 * XREFs of _InputPreMul32BPPToAA24 @ 0x1C5B61
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__cdecl InputPreMul32BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // edx
  _BYTE *v3; // edi
  unsigned __int8 *v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // eax
  unsigned __int8 v14; // cl
  int v15; // esi
  unsigned __int8 *v16; // eax
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // eax
  char v19; // cl
  int v20; // eax
  int v21; // eax
  int v23; // [esp+Ch] [ebp-20h]
  _BYTE *v24; // [esp+18h] [ebp-14h]
  unsigned __int8 *v25; // [esp+1Ch] [ebp-10h]
  unsigned __int8 *v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]
  unsigned __int8 *v28; // [esp+24h] [ebp-8h]
  _BYTE *v29; // [esp+28h] [ebp-4h]
  unsigned __int8 *v30; // [esp+38h] [ebp+Ch]

  v24 = a2;
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 5);
  v23 = *((_DWORD *)a1 + 10);
  v3 = a2;
  v29 = &a2[*((_DWORD *)a1 + 8)];
  if ( (*a1 & 4) != 0 )
  {
    v27 = *((_DWORD *)a1 + 1);
    v4 = (unsigned __int8 *)*((_DWORD *)a1 + 5);
    do
    {
      v5 = dwABPreMul[v4[3]];
      v6 = *(_DWORD *)(v27 + 4 * ((v5 * (unsigned int)v4[1] + 0x800000) >> 24) + 1024)
         + *(_DWORD *)(v27 + 4 * ((v5 * (unsigned int)v4[2] + 0x800000) >> 24) + 2048);
      v7 = *v4;
      v4 += 4;
      *a2++ = (unsigned __int16)(*(_WORD *)(v27 + 4 * ((unsigned int)(v5 * v7 + 0x800000) >> 24)) + v6) >> 8;
    }
    while ( a2 < v29 );
  }
  else if ( (v23 & 4) != 0 )
  {
    do
    {
      v8 = dwABPreMul[v2[3]];
      v9 = *v2;
      v2 += 4;
      *v3 = (unsigned int)(v8 * v9 + 0x800000) >> 24;
      v3[1] = (v8 * (unsigned int)*(v2 - 3) + 0x800000) >> 24;
      v3[2] = (v8 * (unsigned int)*(v2 - 2) + 0x800000) >> 24;
      v3 += 3;
    }
    while ( v3 < v29 );
  }
  else if ( (v23 & 8) != 0 )
  {
    do
    {
      v10 = dwABPreMul[v2[3]];
      v11 = *v2;
      v2 += 4;
      v3[2] = (unsigned int)(v10 * v11 + 0x800000) >> 24;
      v3[1] = (v10 * (unsigned int)*(v2 - 3) + 0x800000) >> 24;
      *v3 = (v10 * (unsigned int)*(v2 - 2) + 0x800000) >> 24;
      v3 += 3;
    }
    while ( v3 < v29 );
  }
  else
  {
    v28 = &v2[BYTE2(v23)];
    v12 = &v2[HIBYTE(v23)];
    v25 = v12;
    v30 = &v2[(unsigned __int8)*((_DWORD *)a1 + 11)];
    v13 = v2 + 3;
    v26 = v2 + 3;
    do
    {
      v14 = *v12;
      v15 = dwABPreMul[*v13];
      v16 = v28;
      v28 += 4;
      v17 = *v16;
      v18 = v30;
      v30 += 4;
      *v3 = (v15 * (unsigned int)*v18 + 0x800000) >> 24;
      v3[1] = (v15 * (unsigned int)v14 + 0x800000) >> 24;
      v12 = v25 + 4;
      v3[2] = (v15 * (unsigned int)v17 + 0x800000) >> 24;
      v3 += 3;
      v13 = v26 + 4;
      v25 += 4;
      v26 += 4;
    }
    while ( v3 < v29 );
  }
  v19 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v20 = *((_DWORD *)a1 + 7);
    if ( v20 && (v21 = v20 - 1, (*((_DWORD *)a1 + 7) = v21) != 0) )
    {
      *((_DWORD *)a1 + 5) += *((_DWORD *)a1 + 9);
    }
    else if ( (v19 & 1) != 0 )
    {
      *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 7) = *((_DWORD *)a1 + 4);
    }
    else
    {
      *a1 = v19 & 0xFD;
    }
  }
  return v24;
}
