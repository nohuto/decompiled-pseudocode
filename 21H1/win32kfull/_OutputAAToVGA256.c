/*
 * XREFs of _OutputAAToVGA256 @ 0x1C155D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl OutputAAToVGA256(
        char *a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        char *a9)
{
  char *result; // eax
  unsigned __int8 *v10; // edi
  _BYTE *v11; // ecx
  unsigned __int16 *v12; // ebx
  unsigned __int16 *v13; // edx
  unsigned __int16 *v14; // ebx
  int v15; // esi
  int v16; // edx
  int v17; // ecx
  unsigned __int16 *v18; // [esp+Ch] [ebp-4h]
  _BYTE *v19; // [esp+18h] [ebp+8h]
  _BYTE *v20; // [esp+18h] [ebp+8h]

  result = a1;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v10 < a3 )
    {
      v14 = a6;
      v20 = a4;
      do
      {
        v18 = v14;
        v15 = *(_DWORD *)(a5 + 4 * v10[2] + 2048) - v14[2];
        v16 = *v14;
        v17 = (*(_DWORD *)(a5 + 4 * v10[1] + 1024) - v14[1]) & 0x380000;
        v14 += 3;
        result = a9;
        *v20++ = a9[((*(_DWORD *)(a5 + 4 * *v10) - v16) & 0x1C00000 | v17 | v15 & 0x70000u) >> 16];
        if ( (unsigned int)v14 >= a7 )
          v14 = (unsigned __int16 *)((char *)v18 + a8 + 6);
        v10 += 4;
      }
      while ( (unsigned int)v10 < a3 );
    }
  }
  else if ( (unsigned int)v10 < a3 )
  {
    v11 = a4;
    v12 = a6;
    v19 = a4;
    do
    {
      v13 = v12;
      if ( v10[3] )
      {
        result = a9;
        *v19 = a9[((*(_DWORD *)(a5 + 4 * *v10) - *v12) & 0x1C00000 | (*(_DWORD *)(a5 + 4 * v10[1] + 1024) - v12[1]) & 0x380000 | (*(_DWORD *)(a5 + 4 * v10[2] + 2048) - v12[2]) & 0x70000u) >> 16];
        v11 = v19;
        v13 = v12;
      }
      ++v11;
      v12 += 3;
      v19 = v11;
      if ( (unsigned int)v12 >= a7 )
        v12 = (unsigned __int16 *)((char *)v13 + a8 + 6);
      v10 += 4;
    }
    while ( (unsigned int)v10 < a3 );
  }
  return result;
}
