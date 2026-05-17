/*
 * XREFs of _RtlpMatchUILanguage@4 @ 0x4B36349D
 * Callers:
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0 (_RtlpGetUserOrMachineUILanguage4NLS@12.c)
 */

bool __thiscall RtlpMatchUILanguage(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [esp+4h] [ebp-C8h] BYREF
  UNICODE_STRING v4; // [esp+Ch] [ebp-C0h] BYREF
  WCHAR SourceStringa[90]; // [esp+14h] [ebp-B8h] BYREF

  v4.Buffer = (wchar_t *)85;
  if ( RtlpGetUserOrMachineUILanguage4NLS(1, SourceStringa, (int)&v4.Buffer) < 0 || v4.Buffer >= (wchar_t *)0x55 )
    return 0;
  if ( (unsigned int)(2 * (int)v4.Buffer) >= 0xAA )
    __report_rangecheckfailure();
  SourceStringa[(int)v4.Buffer] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v4, SourceStringa);
  return !RtlCompareUnicodeString(&DestinationString.Length, &v4.Length, 1);
}
