/*
 * XREFs of CmpWalkPath @ 0x1407A2B84
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x14087BCEC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5FFB4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A60400 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407A2BCC (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &DestinationString);
}
