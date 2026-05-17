/*
 * XREFs of RtlGetNeutralFallback @ 0x18003BF1C
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 */

__int64 __fastcall RtlGetNeutralFallback(__int64 a1, const WCHAR *a2, UNICODE_STRING *a3, _BYTE *a4)
{
  int NameFromLangListNode; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF
  __int16 v14; // [rsp+54h] [rbp+Ch]

  NameFromLangListNode = 0;
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 0, &v13) < 0 )
    goto LABEL_5;
  v10 = 28LL * (__int16)v13;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( ((*(_WORD *)(v10 + v11 + 4) - 4096) & 0xFBFF) == 0 )
    *a4 = 1;
  LOWORD(v13) = *(_WORD *)(v10 + v11 + 8) >> 14;
  v14 = *(_WORD *)(v10 + v11 + 10);
  NameFromLangListNode = GetNameFromLangListNode(a1, &v13, a3);
  if ( NameFromLangListNode < 0 )
  {
LABEL_5:
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString.Length, &v13) && ((v13 - 4096) & 0xFFFFFBFF) == 0 )
      *a4 = 1;
    if ( !*a4 )
      return (unsigned int)RtlGetParentLocaleName(a2);
  }
  return (unsigned int)NameFromLangListNode;
}
