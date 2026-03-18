/*
 * XREFs of _OutputAATo32BPP_BGR @ 0x1C04DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAATo32BPP_BGR(char *a1, int a2, unsigned int a3, int a4, int a5)
{
  char result; // al
  unsigned __int8 *v6; // ecx
  _BYTE *v7; // edx
  int v8; // esi
  _BYTE *v9; // esi
  int v10; // edx
  int v11; // eax

  result = (char)a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v6 < a3 )
    {
      v9 = (_BYTE *)(a4 + 2);
      v10 = a4 - (_DWORD)v6;
      do
      {
        v6[v10] = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *(v9 - 1) = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        v11 = *v6;
        v6 += 4;
        result = ~*(_BYTE *)(a5 + 4 * v11);
        *v9 = result;
        v9 += 4;
      }
      while ( (unsigned int)v6 < a3 );
    }
  }
  else if ( (unsigned int)v6 < a3 )
  {
    v7 = (_BYTE *)(a4 + 2);
    v8 = a4 - (_DWORD)v6;
    do
    {
      if ( v6[3] )
      {
        v6[v8] = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *(v7 - 1) = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        result = ~*(_BYTE *)(a5 + 4 * *v6);
        *v7 = result;
      }
      v6 += 4;
      v7 += 4;
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}
