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

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  ULONG v6; // esi
  NTSTATUS result; // eax
  ULONG i; // eax
  size_t v9; // [esp-4h] [ebp-418h]
  _UNICODE_STRING String; // [esp+8h] [ebp-40Ch] BYREF
  _BYTE v11[1024]; // [esp+10h] [ebp-404h] BYREF

  LODWORD(v9) = 1024;
  memset(v11, 0, v9);
  v6 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (wchar_t *)v11;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v6 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v6;
    }
    if ( RtlStringCchCopyW(pResultBuf, v6, (int)String.Buffer) < 0 )
      return -1073741823;
    return 0;
  }
  return result;
}
