/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x140268060
 * Callers:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406718D0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406BB0C0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r11d
  unsigned int v8; // r10d
  unsigned int v9; // eax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax

  v7 = a5;
  v8 = a2;
  v9 = a5;
  if ( a5 >= a2 )
    v9 = a2;
  if ( a3 )
    *a3 = v9;
  if ( v9 )
  {
    v12 = v9;
    do
    {
      v13 = NLS_UPCASE(*(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6)));
      ++a1;
      ++a4;
      *(_BYTE *)(a1 - 1) = *(_BYTE *)(v13 + a6);
      --v12;
    }
    while ( v12 );
  }
  if ( v7 > v8 )
    return 2147483653LL;
  else
    return 0LL;
}
