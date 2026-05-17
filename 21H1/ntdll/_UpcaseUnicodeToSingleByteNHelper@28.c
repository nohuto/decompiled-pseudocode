/*
 * XREFs of _UpcaseUnicodeToSingleByteNHelper@28 @ 0x4B2E0BD7
 * Callers:
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

unsigned int __fastcall UpcaseUnicodeToSingleByteNHelper(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // ebx

  v7 = a5;
  v8 = a2;
  if ( a5 >= a2 )
    v7 = a2;
  if ( a3 )
    *a3 = v7;
  v9 = 0;
  if ( v7 )
  {
    do
    {
      *(_BYTE *)(v9 + a1) = *(_BYTE *)(NLS_UPCASE(*(_WORD *)(a7
                                                           + 2
                                                           * *(unsigned __int8 *)(*(unsigned __int16 *)(a4 + 2 * v9) + a6)))
                                     + a6);
      ++v9;
    }
    while ( v9 < v7 );
    v8 = a2;
  }
  return v8 < a5 ? 0x80000005 : 0;
}
