/*
 * XREFs of _OutputAATo24BPP_ORDER @ 0x1C0371
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAATo24BPP_ORDER(
        char *a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned __int8 *v9; // ecx
  char result; // al
  unsigned int v11; // edx
  _BYTE *v12; // esi
  unsigned int v13; // edx
  _BYTE *v14; // esi
  unsigned int v15; // edx
  int v16; // eax

  v9 = (unsigned __int8 *)(a2 + 4);
  result = (char)a1;
  v11 = HIBYTE(a9);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v9 < a3 )
    {
      v14 = (_BYTE *)(BYTE2(a9) + a4);
      v15 = v11 - BYTE2(a9);
      do
      {
        v14[BYTE1(a9) - BYTE2(a9)] = ~*(_BYTE *)(a5 + 4 * v9[2] + 2048);
        *v14 = ~*(_BYTE *)(a5 + 4 * v9[1] + 1024);
        v16 = *v9;
        v9 += 4;
        result = ~*(_BYTE *)(a5 + 4 * v16);
        v14[v15] = result;
        v14 += 3;
      }
      while ( (unsigned int)v9 < a3 );
    }
  }
  else if ( (unsigned int)v9 < a3 )
  {
    v12 = (_BYTE *)(BYTE2(a9) + a4);
    v13 = v11 - BYTE2(a9);
    do
    {
      if ( v9[3] )
      {
        v12[BYTE1(a9) - BYTE2(a9)] = ~*(_BYTE *)(a5 + 4 * v9[2] + 2048);
        *v12 = ~*(_BYTE *)(a5 + 4 * v9[1] + 1024);
        result = ~*(_BYTE *)(a5 + 4 * *v9);
        v12[v13] = result;
      }
      v9 += 4;
      v12 += 3;
    }
    while ( (unsigned int)v9 < a3 );
  }
  return result;
}
