/*
 * XREFs of CmpWalkPath @ 0x1407AC8F0
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407AC938 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &DestinationString);
}
