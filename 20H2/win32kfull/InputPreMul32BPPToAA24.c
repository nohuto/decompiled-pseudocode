/*
 * XREFs of InputPreMul32BPPToAA24 @ 0x1C0265F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall InputPreMul32BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rsi
  _BYTE *v3; // r10
  unsigned __int8 *v4; // r11
  __int64 v7; // rbp
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned __int8 *v15; // rbp
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  char v20; // cl
  int v21; // eax
  int v22; // eax
  __int64 v24; // [rsp+0h] [rbp-28h]

  v2 = (unsigned __int64)&a2[*((int *)a1 + 14)];
  v3 = a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v24 = *((_QWORD *)a1 + 8);
  if ( (*a1 & 4) != 0 )
  {
    v7 = *((_QWORD *)a1 + 1);
    do
    {
      v8 = dwABPreMul[v4[3]];
      v9 = *(_DWORD *)(v7 + 4 * ((unsigned __int64)(v8 * (unsigned int)v4[1] + 0x800000) >> 24) + 1024)
         + *(_DWORD *)(v7 + 4 * ((unsigned __int64)(v8 * (unsigned int)v4[2] + 0x800000) >> 24) + 2048);
      v10 = *v4;
      v4 += 4;
      *v3++ = (unsigned __int16)(*(_WORD *)(v7 + 4 * ((unsigned __int64)(unsigned int)(v8 * v10 + 0x800000) >> 24)) + v9) >> 8;
    }
    while ( (unsigned __int64)v3 < v2 );
  }
  else if ( (v24 & 4) != 0 )
  {
    do
    {
      v11 = dwABPreMul[v4[3]];
      v12 = *v4;
      v4 += 4;
      *v3 = (unsigned int)(v11 * v12 + 0x800000) >> 24;
      v3[1] = (v11 * (unsigned int)*(v4 - 3) + 0x800000) >> 24;
      v3[2] = (v11 * (unsigned int)*(v4 - 2) + 0x800000) >> 24;
      v3 += 3;
    }
    while ( (unsigned __int64)v3 < v2 );
  }
  else if ( (v24 & 8) != 0 )
  {
    do
    {
      v13 = dwABPreMul[v4[3]];
      v14 = *v4;
      v4 += 4;
      v3[2] = (unsigned int)(v13 * v14 + 0x800000) >> 24;
      v3[1] = (v13 * (unsigned int)*(v4 - 3) + 0x800000) >> 24;
      *v3 = (v13 * (unsigned int)*(v4 - 2) + 0x800000) >> 24;
      v3 += 3;
    }
    while ( (unsigned __int64)v3 < v2 );
  }
  else
  {
    v15 = &v4[BYTE4(v24)];
    do
    {
      v16 = v15[BYTE3(v24) - (unsigned __int64)BYTE4(v24)];
      v17 = v15[BYTE2(v24) - (unsigned __int64)BYTE4(v24)];
      v18 = dwABPreMul[v15[3LL - BYTE4(v24)]];
      v19 = *v15;
      v15 += 4;
      *v3 = (unsigned int)(v18 * v19 + 0x800000) >> 24;
      v3[1] = (unsigned int)(v18 * v16 + 0x800000) >> 24;
      v3[2] = (unsigned int)(v18 * v17 + 0x800000) >> 24;
      v3 += 3;
    }
    while ( (unsigned __int64)v3 < v2 );
  }
  v20 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v21 = *((_DWORD *)a1 + 13);
    if ( v21 && (v22 = v21 - 1, (*((_DWORD *)a1 + 13) = v22) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v20 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v20 & 0xFD;
    }
  }
  return a2;
}
