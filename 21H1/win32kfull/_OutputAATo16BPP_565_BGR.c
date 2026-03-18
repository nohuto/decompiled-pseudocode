/*
 * XREFs of _OutputAATo16BPP_565_BGR @ 0x1BFBB5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __cdecl OutputAATo16BPP_565_BGR(
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
  unsigned int v17; // eax
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
      *(_WORD *)a4 = ~((*(_DWORD *)(a5 + 4 * a2[4]) - *a6) & 0xF800FFFF | ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * a2[6] + 2048) - a6[2]) | (*(_DWORD *)(a5 + 4 * a2[5] + 1024) - a6[1]) & 0x7E00000) >> 16;
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
      v15 = (*(_DWORD *)(a5 + 4 * v13[5] + 1024) - v10[4]) & 0x7E00000 | (((*(_DWORD *)(a5 + 4 * *v13) - *v10) & 0xF800FFFF | ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * v13[2] + 2048) - v10[2]) | (*(_DWORD *)(a5 + 4 * v13[1] + 1024) - v10[1]) & 0x7E00000) >> 16);
      v16 = v10[3];
      v17 = ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * v13[6] + 2048) - v10[5]);
      v10 += 6;
      v18 = v17 | v15;
      result = (*(_DWORD *)(a5 + 4 * v13[4]) - v16) & 0xF8000000;
      *v19++ = ~(result | v18);
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
        result = (*(_DWORD *)(a5 + 4 * *v13) - *v10) & 0xF800FFFF;
        v14 = v10;
        *(_WORD *)v19 = ~(result | ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * v13[2] + 2048) - v10[2]) | (*(_DWORD *)(a5 + 4 * v13[1] + 1024) - v10[1]) & 0x7E00000) >> 16;
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
      result = (*(_DWORD *)(a5 + 4 * *v13) - *v10) & 0xF800FFFF;
      *(_WORD *)v19 = ~(result | ((unsigned int)&loc_1EFFFF + 1) & (*(_DWORD *)(a5 + 4 * v13[2] + 2048) - v10[2]) | (*(_DWORD *)(a5 + 4 * v13[1] + 1024) - v10[1]) & 0x7E00000) >> 16;
    }
  }
  return result;
}
