/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x18006270C
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x180062500 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800626B0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r11d
  unsigned int v9; // eax
  unsigned int v10; // r10d
  __int64 v12; // rbx
  unsigned __int16 v13; // ax

  v7 = a5;
  v9 = a5;
  v10 = a2;
  if ( a5 >= a2 )
    v9 = a2;
  if ( a3 )
    *a3 = v9;
  if ( v9 )
  {
    v12 = v9;
    do
    {
      v13 = NLS_UPCASE(*(_WORD *)(a7 + 2LL * *(unsigned __int8 *)(*a4++ + a6)));
      *a1++ = *(_BYTE *)(v13 + a6);
      --v12;
    }
    while ( v12 );
  }
  return v10 < v7 ? 0x80000005 : 0;
}
