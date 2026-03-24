/*
 * XREFs of AdtpFormatPrefix @ 0x1405C36FC
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3354 (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14027F0B0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x14062C070 (RtlIntegerToUnicodeString.c)
 */

int __fastcall AdtpFormatPrefix(PUNICODE_STRING Destination, ULONG Value, char a3)
{
  int result; // eax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&String.Length = 1310720LL;
  String.Buffer = (wchar_t *)&v8;
  RtlAppendUnicodeToString(Destination, L"%%");
  result = RtlIntegerToUnicodeString(Value, 0xAu, &String);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeStringToString(Destination, &String);
    if ( a3 == 1 )
      return RtlAppendUnicodeToString(Destination, L"\t");
  }
  return result;
}
