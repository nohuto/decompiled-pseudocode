/*
 * XREFs of CmpWalkPath @ 0x14078B040
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A495F4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A49A40 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x14078B088 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &DestinationString);
}
