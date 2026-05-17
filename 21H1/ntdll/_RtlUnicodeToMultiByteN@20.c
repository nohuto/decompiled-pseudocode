/*
 * XREFs of _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70
 * Callers:
 *     _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90 (_RtlUnicodeStringToAnsiString@12.c)
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _wcstombs @ 0x4B2FACA0 (_wcstombs.c)
 *     __wctomb_s_l @ 0x4B2FED67 (__wctomb_s_l.c)
 *     __safecrt_wctomb_s @ 0x4B301240 (__safecrt_wctomb_s.c)
 * Callees:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

int __stdcall RtlUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ecx
  int v6; // esi
  unsigned int i; // edx
  unsigned int *v9; // eax
  _BYTE *v10; // edx
  _BYTE *v11; // edi
  unsigned __int16 *v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  _BYTE *v18; // [esp+0h] [ebp-8h] BYREF
  unsigned int v19; // [esp+4h] [ebp-4h]

  if ( NlsActiveCodePageIsUTF8 )
  {
    v9 = a3;
    if ( !a3 )
      v9 = (unsigned int *)&v18;
    if ( a5 )
      RtlUnicodeToUTF8N(a1, a2, v9, a4, a5);
    else
      *v9 = 0;
  }
  else
  {
    v5 = a5 >> 1;
    if ( NlsMbCodePageTag )
    {
      v10 = a1;
      v11 = a1;
      v18 = a1;
      if ( v5 )
      {
        v12 = a4;
        v13 = a2;
        do
        {
          if ( !v13 )
            break;
          v14 = *v12++;
          v15 = *(unsigned __int16 *)(NlsUnicodeToMbAnsiData + 2 * v14);
          v19 = v15;
          v16 = v15 >> 8;
          if ( BYTE1(v15) )
          {
            v17 = v13--;
            if ( v17 < 2 )
              break;
            LOBYTE(v15) = v19;
            *v10++ = v16;
          }
          *v10++ = v15;
          --v13;
          --v5;
        }
        while ( v5 );
        v11 = v18;
      }
      if ( a3 )
        *a3 = v10 - v11;
    }
    else
    {
      if ( v5 >= a2 )
        v5 = a2;
      if ( a3 )
        *a3 = v5;
      v6 = NlsUnicodeToAnsiData;
      for ( i = 0; i < v5; ++i )
        a1[i] = *(_BYTE *)(a4[i] + v6);
    }
  }
  return 0;
}
