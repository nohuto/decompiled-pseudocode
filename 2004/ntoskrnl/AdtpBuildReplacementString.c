/*
 * XREFs of AdtpBuildReplacementString @ 0x14096B488
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     AdtpBuildRegistryValueString @ 0x14096A0E8 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1406FF600 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildReplacementString(ULONG a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // edi
  UNICODE_STRING Source; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&Source.Length = 1310720LL;
  Source.Buffer = (wchar_t *)&v6;
  v3 = RtlIntegerToUnicodeString(a1, 0xAu, &Source);
  if ( v3 >= 0 )
  {
    if ( a2->Length )
      RtlAppendUnicodeToString(a2, L", ");
    RtlAppendUnicodeToString(a2, L"%%");
    RtlAppendUnicodeStringToString(a2, &Source);
  }
  return (unsigned int)v3;
}
