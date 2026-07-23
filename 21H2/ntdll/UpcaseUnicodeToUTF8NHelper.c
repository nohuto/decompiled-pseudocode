/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1800E5AD4
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x180062500 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800626B0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlUnicodeToUTF8N @ 0x18005BF30 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r15d
  int v7; // edi
  unsigned int v12; // ebx
  WCHAR *v13; // r9
  __int64 v14; // r10
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // r9
  __int64 v17; // r11
  ULONG UTF8StringActualByteCount[4]; // [rsp+30h] [rbp-E8h] BYREF
  WCHAR UnicodeStringSource[64]; // [rsp+40h] [rbp-D8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = 0;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( !UTF8StringMaxByteCount )
        goto LABEL_15;
      if ( v5 < 0x40 )
        break;
      v12 = 64;
      if ( v5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
      {
        v12 = 63;
LABEL_8:
        if ( !v12 )
          goto LABEL_11;
      }
      v13 = UnicodeStringSource;
      v14 = a4 - (_QWORD)UnicodeStringSource;
      do
      {
        v15 = NLS_UPCASE(*(WCHAR *)((char *)v13 + v14));
        *v16 = v15;
        v13 = v16 + 1;
      }
      while ( v17 != 1 );
LABEL_11:
      if ( RtlUnicodeToUTF8N(
             UTF8StringDestination,
             UTF8StringMaxByteCount,
             UTF8StringActualByteCount,
             UnicodeStringSource,
             2 * v12) < 0 )
      {
        v7 += UTF8StringActualByteCount[0];
        v6 = -2147483643;
        goto LABEL_15;
      }
      UTF8StringDestination += UTF8StringActualByteCount[0];
      UTF8StringMaxByteCount -= UTF8StringActualByteCount[0];
      v7 += UTF8StringActualByteCount[0];
      a4 += 2LL * v12;
      v5 -= v12;
      if ( !v5 )
        goto LABEL_15;
    }
    v12 = v5;
    goto LABEL_8;
  }
LABEL_15:
  if ( a3 )
    *a3 = v7;
  return v6;
}
