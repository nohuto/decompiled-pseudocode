/*
 * XREFs of _OutputAATo16BPP_555_RGB @ 0x1BF956
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __cdecl OutputAATo16BPP_555_RGB(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  unsigned int *v9; // ebx
  unsigned __int16 *v10; // esi
  unsigned __int8 *v11; // edi
  unsigned int result; // eax
  unsigned __int8 *v13; // edi
  unsigned __int16 *v14; // ecx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned int *v19; // [esp+Ch] [ebp-4h]
  unsigned __int16 *v20; // [esp+18h] [ebp+8h]

  v9 = a4;
  v10 = a6;
  v11 = a2;
  if ( (_BYTE)a9 )
  {
    v11 = a2 + 4;
    if ( a2[7] )
    {
      v9 = a4;
      *(_WORD *)a4 = (((*(_DWORD *)(a5 + 4 * *v11) - (unsigned int)*a6) >> 16) & 0x1F | ((*(_DWORD *)(a5 + 4 * v11[2] + 2048)
                                                                                        - (unsigned int)a6[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4 * v11[1] + 1024) - (unsigned int)a6[1]) >> 16) & 0x3E0) ^ 0x7FFF;
    }
    v9 = (unsigned int *)((char *)v9 + 2);
    v10 = a6 + 3;
    v19 = v9;
    if ( (unsigned int)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  else
  {
    v19 = a4;
  }
  result = (unsigned int)a1;
  v13 = v11 + 4;
  if ( *a1 >= 0 )
  {
    while ( (unsigned int)v13 < a3 )
    {
      v20 = v10;
      v15 = (*(_DWORD *)(a5 + 4 * v13[5] + 1024) - v10[4]) & 0x3E00000 | ((((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * *v13) - *v10) | (*(_DWORD *)(a5 + 4 * v13[2] + 2048) - v10[2]) & 0x7C000000 | (*(_DWORD *)(a5 + 4 * v13[1] + 1024) - v10[1]) & 0x3E00000) >> 16);
      v16 = v10[3];
      v17 = (*(_DWORD *)(a5 + 4 * v13[6] + 2048) - v10[5]) & 0x7C000000;
      v10 += 6;
      v18 = v17 | v15;
      result = ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * v13[4]) - v16);
      *v19++ = (result | v18) ^ 0x7FFF7FFF;
      if ( (unsigned int)v10 >= a7 )
        v10 = (unsigned __int16 *)((char *)v20 + a8 + 12);
      v13 += 8;
    }
  }
  else
  {
    while ( (unsigned int)v13 < a3 )
    {
      v14 = v10;
      if ( v13[3] )
      {
        v9 = v19;
        v14 = v10;
        result = ((*(_DWORD *)(a5 + 4 * *v13) - (unsigned int)*v10) >> 16) & 0x1F;
        *(_WORD *)v19 = (result | ((*(_DWORD *)(a5 + 4 * v13[2] + 2048) - (unsigned int)v10[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4 * v13[1] + 1024) - (unsigned int)v10[1]) >> 16) & 0x3E0) ^ 0x7FFF;
      }
      v9 = (unsigned int *)((char *)v9 + 2);
      v10 += 3;
      v19 = v9;
      if ( (unsigned int)v10 >= a7 )
        v10 = (unsigned __int16 *)((char *)v14 + a8 + 6);
      v13 += 4;
    }
  }
  if ( HIBYTE(a9) )
  {
    if ( v13[3] )
    {
      result = ((*(_DWORD *)(a5 + 4 * *v13) - (unsigned int)*v10) >> 16) & 0x1F;
      *(_WORD *)v19 = (result | ((*(_DWORD *)(a5 + 4 * v13[2] + 2048) - (unsigned int)v10[2]) >> 16) & 0x7C00 | ((*(_DWORD *)(a5 + 4 * v13[1] + 1024) - (unsigned int)v10[1]) >> 16) & 0x3E0) ^ 0x7FFF;
    }
  }
  return result;
}
