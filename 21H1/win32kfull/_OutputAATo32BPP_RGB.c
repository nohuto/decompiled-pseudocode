/*
 * XREFs of _OutputAATo32BPP_RGB @ 0x1C0657
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __cdecl OutputAATo32BPP_RGB(char *a1, int a2, unsigned int a3, int a4, int a5)
{
  unsigned __int8 result; // al
  unsigned __int8 *v6; // ecx
  _BYTE *v7; // edx
  int v8; // esi
  _BYTE *v9; // esi
  int v10; // edx

  result = (unsigned __int8)a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v6 < a3 )
    {
      v9 = (_BYTE *)(a4 + 1);
      v10 = a4 - (_DWORD)v6;
      do
      {
        v9[1] = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *v9 = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        v9 += 4;
        result = ~*(_BYTE *)(a5 + 4 * *v6);
        v6[v10] = result;
        v6 += 4;
      }
      while ( (unsigned int)v6 < a3 );
    }
  }
  else if ( (unsigned int)v6 < a3 )
  {
    v7 = (_BYTE *)(a4 + 1);
    v8 = a4 - (_DWORD)v6;
    do
    {
      if ( v6[3] )
      {
        v7[1] = ~*(_BYTE *)(a5 + 4 * v6[2] + 2048);
        *v7 = ~*(_BYTE *)(a5 + 4 * v6[1] + 1024);
        result = ~*(_BYTE *)(a5 + 4 * *v6);
        v6[v8] = result;
      }
      v6 += 4;
      v7 += 4;
    }
    while ( (unsigned int)v6 < a3 );
  }
  return result;
}
