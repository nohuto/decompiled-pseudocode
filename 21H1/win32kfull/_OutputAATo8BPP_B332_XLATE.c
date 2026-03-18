/*
 * XREFs of _OutputAATo8BPP_B332_XLATE @ 0x1C0C48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl OutputAATo8BPP_B332_XLATE(
        int a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  unsigned __int8 *v9; // edi
  _BYTE *v10; // ecx
  unsigned __int16 *v12; // edx

  v9 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    v10 = a4;
    do
    {
      v12 = a6;
      if ( v9[3] )
      {
        *a4 = *(_BYTE *)((((*(_DWORD *)(a5 + 4 * *v9) - *a6) & 0x30000 | (unsigned int)&loc_1C0000 & (*(_DWORD *)(a5 + 4 * v9[1] + 1024) - a6[1]) | (*(_DWORD *)(a5 + 4 * v9[2] + 2048) - a6[2]) & 0xE00000) >> 16)
                       + a9);
        v10 = a4;
        v12 = a6;
      }
      ++v10;
      a6 += 3;
      a4 = v10;
      if ( (unsigned int)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)v12 + a8 + 6);
      v9 += 4;
    }
    while ( (unsigned int)v9 < a3 );
  }
}
