/*
 * XREFs of RtlpMatchUserLanguage @ 0x1800FD5C4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800FD41C (RtlpGetUserLocaleName.c)
 */

bool __fastcall RtlpMatchUserLanguage(PCWSTR SourceString, __int64 a2)
{
  bool result; // al
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  String2.Buffer = (wchar_t *)&v6;
  String2.MaximumLength = 170;
  result = 0;
  if ( (int)RtlpGetUserLocaleName(&String2, a2) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
  }
  return result;
}
