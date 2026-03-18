/*
 * XREFs of _OutputAATo8BPP_B332 @ 0x1C0BB5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl OutputAATo8BPP_B332(
        int a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8)
{
  unsigned __int8 *v8; // esi
  _BYTE *v9; // ebx
  unsigned __int16 *v11; // eax

  v8 = (unsigned __int8 *)(a2 + 4);
  if ( a2 + 4 < a3 )
  {
    v9 = a4;
    do
    {
      v11 = a6;
      if ( v8[3] )
      {
        v9 = a4;
        v11 = a6;
        *a4 = ((*(_DWORD *)(a5 + 4 * *v8) - (unsigned int)*a6) >> 16) & 3 | ((*(_DWORD *)(a5 + 4 * v8[1] + 1024)
                                                                            - (unsigned int)a6[1]) >> 16) & 0x1C | ((*(_DWORD *)(a5 + 4 * v8[2] + 2048) - (unsigned int)a6[2]) >> 16) & 0xE0;
      }
      ++v9;
      a6 += 3;
      a4 = v9;
      if ( (unsigned int)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)v11 + a8 + 6);
      v8 += 4;
    }
    while ( (unsigned int)v8 < a3 );
  }
}
