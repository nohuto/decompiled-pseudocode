/*
 * XREFs of RtlConvertLCIDToString @ 0x1800EEB70
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EFDC0 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x1800164A0 (RtlIntegerToUnicodeString.c)
 *     RtlStringCchCopyW @ 0x18007E708 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  ULONG v9; // ebx
  NTSTATUS result; // eax
  ULONG i; // eax
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v13[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset(v13, 0, sizeof(v13));
  v9 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (wchar_t *)v13;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v9;
    }
    if ( (int)RtlStringCchCopyW(pResultBuf, v9, (__int64)String.Buffer) < 0 )
      return -1073741823;
    return 0;
  }
  return result;
}
