/*
 * XREFs of _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     _GetLCIDFromLangListNode@12 @ 0x4B2E9857 (_GetLCIDFromLangListNode@12.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 */

int __stdcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  _WORD *v2; // ebx
  _BYTE *v3; // esi
  _WORD *v4; // edi
  int ProcessRegistryInfo; // eax
  int v6; // edx
  int v7; // eax
  int LCIDFromLangListNode; // ebx
  int v10; // [esp+10h] [ebp-8h] BYREF
  _WORD *v11; // [esp+14h] [ebp-4h] BYREF

  v2 = a1;
  v3 = 0;
  v4 = 0;
  v11 = 0;
  if ( !a1 )
    goto LABEL_21;
  *a1 = 0;
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((int *)&v11);
  v4 = v11;
  if ( ProcessRegistryInfo < 0 || InitializeTEBUserLangList(a2, (int)v11) < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v6 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v6 = 0;
  v4 = v11;
  v10 = v6;
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 4) )
    {
      LCIDFromLangListNode = GetLCIDFromLangListNode(a1);
      if ( LCIDFromLangListNode >= 0 )
        goto LABEL_14;
      v2 = a1;
    }
    v10 = 0;
  }
  v7 = InitializeUserOrMachineLangList(&v10, (a2 == 0) + 2, a2 == 0);
  v3 = (_BYTE *)v10;
  if ( v7 < 0
    || (!v10 || !*(_WORD *)(v10 + 4)
      ? (LCIDFromLangListNode = -1073741823)
      : (LCIDFromLangListNode = GetLCIDFromLangListNode(v2)),
        LCIDFromLangListNode < 0) )
  {
LABEL_21:
    LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v4);
    if ( LCIDFromLangListNode < 0 )
      *a1 = 0;
  }
LABEL_14:
  if ( v3 )
    RtlpMuiRegFreeLanguageList(v3);
  return LCIDFromLangListNode;
}
