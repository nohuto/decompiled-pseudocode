/*
 * XREFs of _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970
 * Callers:
 *     _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60 (_RtlxOemStringToUnicodeSize@4.c)
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

int __stdcall RtlMultiByteToUnicodeSize(int *a1, unsigned __int8 *a2, int a3)
{
  int v3; // ecx
  int v5; // edx
  unsigned __int8 *v6; // esi
  int v7; // eax

  v3 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( a3 )
      RtlUTF8ToUnicodeN(0, 0, a1, a2, a3);
    else
      *a1 = 0;
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v3 = 2 * a3;
      goto LABEL_4;
    }
    v5 = a3;
    if ( a3 )
    {
      v6 = a2;
      do
      {
        v7 = *v6;
        --v5;
        ++v6;
        if ( NlsLeadByteInfoTable[v7] )
        {
          if ( !v5 )
          {
            v3 += 2;
            break;
          }
          --v5;
          ++v6;
        }
        v3 += 2;
      }
      while ( v5 );
    }
LABEL_4:
    *a1 = v3;
  }
  return 0;
}
