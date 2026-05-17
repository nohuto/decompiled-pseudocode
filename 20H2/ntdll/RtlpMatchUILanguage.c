/*
 * XREFs of RtlpMatchUILanguage @ 0x1800FD69C
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C4E0 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180103AF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall RtlpMatchUILanguage(PCWSTR SourceString)
{
  UNICODE_STRING v3; // [rsp+20h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR SourceStringa[88]; // [rsp+40h] [rbp-C8h] BYREF

  *(_QWORD *)&v3.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &v3) < 0 || *(_QWORD *)&v3.Length >= 0x55uLL )
    return 0;
  if ( (unsigned __int64)(2LL * *(_QWORD *)&v3.Length) >= 0xAA )
    _report_rangecheckfailure();
  SourceStringa[*(_QWORD *)&v3.Length] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v3, SourceStringa);
  return !(unsigned int)RtlCompareUnicodeString(&DestinationString.Length, &v3.Length, 1);
}
