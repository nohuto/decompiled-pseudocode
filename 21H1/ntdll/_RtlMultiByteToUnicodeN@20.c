/*
 * XREFs of _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50
 * Callers:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 *     _mbstowcs @ 0x4B2F8720 (_mbstowcs.c)
 *     _RtlConsoleMultiByteToUnicodeN@24 @ 0x4B343D70 (_RtlConsoleMultiByteToUnicodeN@24.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

int __stdcall RtlMultiByteToUnicodeN(char *a1, unsigned int a2, unsigned int *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // edx
  int v6; // esi
  unsigned int i; // ecx
  unsigned int *v9; // eax
  char *v10; // esi
  char *v11; // ecx
  unsigned int v12; // edi
  char *v13; // ebx
  unsigned __int16 v14; // ax
  __int16 v15; // cx
  int v16; // [esp+0h] [ebp-Ch] BYREF
  unsigned int v17; // [esp+4h] [ebp-8h]
  char *v18; // [esp+8h] [ebp-4h]

  if ( NlsActiveCodePageIsUTF8 )
  {
    v9 = a3;
    if ( !a3 )
      v9 = (unsigned int *)&v16;
    if ( a5 )
      RtlUTF8ToUnicodeN(a1, a2, v9, a4, a5);
    else
      *v9 = 0;
  }
  else
  {
    v5 = a2 >> 1;
    if ( NlsMbCodePageTag )
    {
      v10 = a1;
      v11 = a1;
      v18 = a1;
      if ( v5 )
      {
        v12 = a5;
        v13 = a4;
        while ( v12 )
        {
          --v5;
          --v12;
          v17 = 2 * (unsigned __int8)*v13;
          v14 = NlsLeadByteInfoTable[v17 / 2];
          v16 = v14;
          if ( v14 )
          {
            if ( !v12 )
            {
              *(_WORD *)v10 = 0;
              v10 += 2;
              break;
            }
            ++v13;
            --v12;
            v15 = *(_WORD *)(NlsMbAnsiCodePageTables + 2 * (v14 + (unsigned __int8)*v13));
          }
          else
          {
            v15 = *(_WORD *)(v17 + NlsAnsiToUnicodeData);
          }
          ++v13;
          *(_WORD *)v10 = v15;
          v10 += 2;
          if ( !v5 )
            break;
        }
        v11 = v18;
      }
      if ( a3 )
        *a3 = v10 - v11;
    }
    else
    {
      if ( v5 >= a5 )
        v5 = a5;
      if ( a3 )
        *a3 = 2 * v5;
      v6 = NlsAnsiToUnicodeData;
      for ( i = 0; i < v5; ++i )
        *(_WORD *)&a1[2 * i] = *(_WORD *)(v6 + 2 * (unsigned __int8)a4[i]);
    }
  }
  return 0;
}
