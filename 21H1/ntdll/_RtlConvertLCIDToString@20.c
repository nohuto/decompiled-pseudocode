/*
 * XREFs of _RtlConvertLCIDToString@20 @ 0x4B351910
 * Callers:
 *     _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970 (_RtlpConvertCultureNamesToLCIDs@8.c)
 * Callees:
 *     _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70 (_RtlIntegerToUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 */

NTSTATUS __stdcall RtlConvertLCIDToString(int a1, int a2, unsigned int a3, _WORD *a4, unsigned int a5)
{
  int v6; // esi
  NTSTATUS result; // eax
  unsigned int i; // eax
  UNICODE_STRING DestinationString; // [esp+8h] [ebp-40Ch] BYREF
  _BYTE v10[1024]; // [esp+10h] [ebp-404h] BYREF

  memset(v10, 0, sizeof(v10));
  v6 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  DestinationString.Length = 2 * a5;
  DestinationString.MaximumLength = 2 * a5;
  DestinationString.Buffer = (wchar_t *)v10;
  result = RtlIntegerToUnicodeString(a1, a2, &DestinationString);
  if ( result >= 0 )
  {
    for ( i = DestinationString.Length >> 1; i < a3; ++i )
    {
      if ( !v6 )
        return -1073741823;
      *a4++ = 48;
      --v6;
    }
    if ( RtlStringCchCopyW(a4, v6, (int)DestinationString.Buffer) < 0 )
      return -1073741823;
    return 0;
  }
  return result;
}
