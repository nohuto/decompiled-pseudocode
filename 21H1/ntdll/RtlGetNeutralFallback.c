/*
 * XREFs of RtlGetNeutralFallback @ 0x4B2D4663
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall RtlGetNeutralFallback(int a1, const WCHAR *a2, PUNICODE_STRING ParentLocaleName, _BYTE *a4)
{
  int NameFromLangListNode; // edi
  int v6; // ecx
  int v7; // edx
  __int16 v8; // ax
  const WCHAR *v10; // ebx
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-14h] BYREF
  PCWSTR SourceString; // [esp+14h] [ebp-Ch]
  DWORD Lcid; // [esp+18h] [ebp-8h] BYREF
  __int16 v14; // [esp+1Ch] [ebp-4h] BYREF

  NameFromLangListNode = 0;
  SourceString = a2;
  if ( !a1 || !ParentLocaleName || !a4 )
    return -1073741811;
  *a4 = 0;
  if ( RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 0, &v14) < 0 )
    goto LABEL_9;
  v6 = 28 * v14;
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 12);
  v8 = *(_WORD *)(v6 + v7 + 4);
  if ( v8 == 4096 || v8 == 5120 )
    *a4 = 1;
  LOWORD(Lcid) = *(_WORD *)(v6 + v7 + 8) >> 14;
  v14 = *(_WORD *)(v6 + v7 + 10);
  NameFromLangListNode = GetNameFromLangListNode(a1, &Lcid, ParentLocaleName);
  if ( NameFromLangListNode < 0 )
  {
LABEL_9:
    v10 = SourceString;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) && (Lcid == 4096 || Lcid == 5120) )
      *a4 = 1;
    if ( !*a4 )
      return RtlGetParentLocaleName(v10, ParentLocaleName, 6u, 0);
  }
  return NameFromLangListNode;
}
