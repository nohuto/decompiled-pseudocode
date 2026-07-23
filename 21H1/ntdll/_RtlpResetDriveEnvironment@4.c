/*
 * XREFs of _RtlpResetDriveEnvironment@4 @ 0x4B32D76C
 * Callers:
 *     _RtlpReferenceCurrentDirectory@4 @ 0x4B2A7C45 (_RtlpReferenceCurrentDirectory@4.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 * Callees:
 *     _RtlSetEnvironmentVariable@12 @ 0x4B2DB170 (_RtlSetEnvironmentVariable@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall RtlpResetDriveEnvironment(WCHAR a1)
{
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-24h] BYREF
  _UNICODE_STRING Value; // [esp+14h] [ebp-1Ch] BYREF
  WCHAR v5; // [esp+1Ch] [ebp-14h] BYREF
  wchar_t v6; // [esp+1Eh] [ebp-12h] BYREF
  WCHAR SourceString[2]; // [esp+24h] [ebp-Ch] BYREF
  wchar_t v8[2]; // [esp+28h] [ebp-8h] BYREF

  SourceString[0] = 61;
  SourceString[1] = a1;
  wcscpy(v8, L":");
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = a1;
  wmemcpy(&v6, L":\\", 2);
  RtlInitUnicodeString(&Value, &v5);
  return RtlSetEnvironmentVariable(0, &DestinationString, &Value);
}
