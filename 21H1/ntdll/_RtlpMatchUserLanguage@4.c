/*
 * XREFs of _RtlpMatchUserLanguage@4 @ 0x4B363547
 * Callers:
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 */

bool __thiscall RtlpMatchUserLanguage(PCWSTR SourceString)
{
  bool result; // al
  UNICODE_STRING DestinationString; // [esp+8h] [ebp-C8h] BYREF
  UNICODE_STRING v4; // [esp+10h] [ebp-C0h] BYREF
  char v5; // [esp+18h] [ebp-B8h] BYREF
  int savedregs; // [esp+D0h] [ebp+0h] BYREF

  v4.Buffer = (wchar_t *)&v5;
  v4.MaximumLength = 170;
  result = 0;
  if ( RtlpGetUserLocaleName(&v4, (int)&savedregs) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeString(&DestinationString.Length, &v4.Length, 1) )
      return 1;
  }
  return result;
}
