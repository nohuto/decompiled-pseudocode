/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x140A479DC
 * Callers:
 *     EmpParseCallbacks @ 0x140A46CF4 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140A46F28 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140A47580 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140A47ADC (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140A4806C (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const CHAR *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  ValueFromSectionAndKeyName = (const CHAR *)EmpInfParseGetValueFromSectionAndKeyName(a1, a2, a3);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
