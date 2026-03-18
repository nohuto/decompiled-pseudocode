/*
 * XREFs of _ConvertToAndFromWideCharSymCP@20 @ 0x1D9FFF
 * Callers:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 * Callees:
 *     <none>
 */

int __fastcall ConvertToAndFromWideCharSymCP(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v8; // ecx
  int i; // ecx
  __int16 v10; // ax
  int v11; // edx
  unsigned int v12; // eax

  if ( a2 && !a1 )
    return 0;
  v6 = a4;
  if ( a4 )
  {
    if ( !a3 )
      return 0;
  }
  v8 = a2 / 2;
  if ( a5 )
  {
    if ( a4 >= v8 )
      v6 = a2 / 2;
    for ( i = 0; i < v6; ++i )
    {
      LOBYTE(v10) = *(_BYTE *)(i + a3);
      if ( (unsigned __int8)v10 >= 0x20u )
        v10 = (unsigned __int8)v10 | 0xF000;
      else
        v10 = (char)v10;
      *(_WORD *)(a1 + 2 * i) = v10;
    }
    return 2 * v6;
  }
  else
  {
    if ( v8 >= a4 )
      v8 = a4;
    v11 = 0;
    if ( v8 <= 0 )
    {
      return v8;
    }
    else
    {
      while ( 1 )
      {
        v12 = *(unsigned __int16 *)(a1 + 2 * v11);
        if ( v12 >= 0x20 && (unsigned __int16)(v12 + 4064) > 0xDFu )
          break;
        *(_BYTE *)(v11 + a3) = *(_BYTE *)(a1 + 2 * v11);
        if ( ++v11 >= v8 )
          return v8;
      }
      return v11;
    }
  }
}
