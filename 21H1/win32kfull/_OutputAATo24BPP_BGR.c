/*
 * XREFs of _OutputAATo24BPP_BGR @ 0x1C02C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAATo24BPP_BGR(char *a1, int a2, unsigned int a3, int a4, int a5)
{
  char result; // al
  unsigned __int8 *v6; // ecx
  _BYTE *v7; // edx
  _BYTE *v8; // edx
  int v9; // eax

  result = (char)a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v6 < a3 )
    {
      v8 = (_BYTE *)(a4 + 2);
      do
      {
        *(v8 - 2) = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *(v8 - 1) = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        v9 = *v6;
        v6 += 4;
        result = ~*(_BYTE *)(a5 + 4 * v9);
        *v8 = result;
        v8 += 3;
      }
      while ( (unsigned int)v6 < a3 );
    }
  }
  else if ( (unsigned int)v6 < a3 )
  {
    v7 = (_BYTE *)(a4 + 2);
    do
    {
      if ( v6[3] )
      {
        *(v7 - 2) = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *(v7 - 1) = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        result = ~*(_BYTE *)(a5 + 4 * *v6);
        *v7 = result;
      }
      v6 += 4;
      v7 += 3;
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}
