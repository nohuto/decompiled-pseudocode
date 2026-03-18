/*
 * XREFs of CmpWalkPath @ 0x140793AA4
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140874E8C (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A5A000 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x140793AEC (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &DestinationString);
}
