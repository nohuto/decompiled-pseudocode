/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x140B0CCAC
 * Callers:
 *     EmpParseCallbacks @ 0x140B0C004 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140B0C230 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140B0C87C (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B0CDAC (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B0D360 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const char *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  ValueFromSectionAndKeyName = (const char *)EmpInfParseGetValueFromSectionAndKeyName(a1, a2, a3);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
