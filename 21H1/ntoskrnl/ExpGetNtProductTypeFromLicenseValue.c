/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x140781258
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x1406747F0 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v3; // [rsp+50h] [rbp+10h] BYREF
  int v4; // [rsp+54h] [rbp+14h]
  int v5; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF

  v4 = HIDWORD(a1);
  v3 = 0;
  v5 = 0;
  v6 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductType");
  if ( (int)NtQueryLicenseValue((unsigned __int64)&DestinationString, &v3, &v6, 4u, &v5) < 0
    || v3 != 4
    || v5 != 4
    || !v6
    || v6 > 3 )
  {
    return 0;
  }
  MEMORY[0xFFFFF78000000264] = v6;
  return 1;
}
