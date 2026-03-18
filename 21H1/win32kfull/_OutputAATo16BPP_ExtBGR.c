/*
 * XREFs of _OutputAATo16BPP_ExtBGR @ 0x1C002D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl OutputAATo16BPP_ExtBGR(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        _WORD *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // edx
  unsigned __int16 *v10; // ebx
  unsigned __int8 *v11; // edi
  _WORD *v12; // esi
  char *result; // eax
  unsigned __int8 *v14; // edi
  unsigned __int16 *v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  _WORD *v20; // esi
  _DWORD v21[6]; // [esp+Ch] [ebp-20h] BYREF
  unsigned __int8 *v22; // [esp+24h] [ebp-8h]
  _WORD *v23; // [esp+28h] [ebp-4h]
  unsigned __int16 *v24; // [esp+34h] [ebp+8h]

  v9 = a5;
  v10 = a6;
  qmemcpy(v21, (const void *)(a5 - 24), sizeof(v21));
  v11 = a2;
  v12 = a4;
  if ( (_BYTE)a9 )
  {
    v11 = a2 + 4;
    if ( a2[7] )
    {
      v9 = a5;
      *a4 = HIWORD(v21[3]) ^ (HIWORD(v21[0]) & ((*(_DWORD *)(a5 + 4 * *v11) - (unsigned int)*a6) >> 16) | HIWORD(v21[1]) & ((*(_DWORD *)(a5 + 4 * v11[1] + 1024) - (unsigned int)a6[1]) >> 16) | HIWORD(v21[2]) & ((*(_DWORD *)(a5 + 4 * v11[2] + 2048) - (unsigned int)a6[2]) >> 16));
      v12 = a4;
    }
    ++v12;
    v10 = a6 + 3;
    v23 = v12;
    if ( (unsigned int)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  else
  {
    v23 = a4;
  }
  result = a1;
  v14 = v11 + 4;
  v22 = v14;
  if ( *a1 < 0 )
  {
    while ( (unsigned int)v14 < a3 )
    {
      v15 = v10;
      if ( v14[3] )
      {
        v15 = v10;
        v12 = v23;
        result = (char *)HIWORD(v21[3]);
        *v23 = HIWORD(v21[3]) ^ (HIWORD(v21[0]) & ((*(_DWORD *)(v9 + 4 * *v22) - (unsigned int)*v10) >> 16) | HIWORD(v21[1]) & ((*(_DWORD *)(v9 + 4 * v14[1] + 1024) - (unsigned int)v10[1]) >> 16) | HIWORD(v21[2]) & ((*(_DWORD *)(v9 + 4 * v14[2] + 2048) - (unsigned int)v10[2]) >> 16));
        v14 = v22;
      }
      ++v12;
      v10 += 3;
      v23 = v12;
      if ( (unsigned int)v10 >= a7 )
        v10 = (unsigned __int16 *)((char *)v15 + a8 + 6);
      v9 = a5;
      v14 += 4;
      v22 = v14;
    }
  }
  else if ( (unsigned int)v14 < a3 )
  {
    while ( 1 )
    {
      v24 = v10;
      v16 = v21[2] & (*(_DWORD *)(a5 + 4 * v14[6] + 2048) - v10[5]) | ((v21[0] & (*(_DWORD *)(a5 + 4 * *v14) - *v10) | v21[1] & (*(_DWORD *)(a5 + 4 * v14[1] + 1024) - v10[1]) | v21[2] & (*(_DWORD *)(v9 + 4 * v14[2] + 2048) - (unsigned int)v10[2])) >> 16);
      v17 = v10[3];
      v18 = v21[1] & (*(_DWORD *)(a5 + 4 * v14[5] + 1024) - v10[4]);
      v10 += 6;
      v19 = v18 | v16;
      v20 = v23;
      result = (char *)(v21[0] & (*(_DWORD *)(a5 + 4 * v14[4]) - v17));
      *(_DWORD *)v23 = v21[3] ^ ((unsigned int)result | v19);
      v23 = v20 + 2;
      if ( (unsigned int)v10 >= a7 )
        v10 = (unsigned __int16 *)((char *)v24 + a8 + 12);
      v14 += 8;
      if ( (unsigned int)v14 >= a3 )
        break;
      v9 = a5;
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v14[3] )
    {
      result = (char *)HIWORD(v21[3]);
      *v23 = HIWORD(v21[3]) ^ (HIWORD(v21[0]) & ((*(_DWORD *)(a5 + 4 * *v14) - (unsigned int)*v10) >> 16) | HIWORD(v21[1]) & ((*(_DWORD *)(a5 + 4 * v14[1] + 1024) - (unsigned int)v10[1]) >> 16) | HIWORD(v21[2]) & ((*(_DWORD *)(a5 + 4 * v14[2] + 2048) - (unsigned int)v10[2]) >> 16));
    }
  }
  return result;
}
