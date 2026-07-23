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

NTSTATUS __stdcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  _WORD *v2; // ebx
  PVOID v3; // esi
  DWORD *v4; // edi
  int v5; // eax
  _WORD *v6; // edx
  int v7; // eax
  NTSTATUS LCIDFromLangListNode; // ebx
  PVOID BaseAddress; // [esp+10h] [ebp-8h] BYREF
  DWORD *v11; // [esp+14h] [ebp-4h] BYREF

  v2 = DefaultUILanguageId;
  v3 = 0;
  v4 = 0;
  v11 = 0;
  if ( !DefaultUILanguageId )
    goto LABEL_21;
  *DefaultUILanguageId = 0;
  v5 = RtlpCreateProcessRegistryInfo(&v11);
  v4 = v11;
  if ( v5 < 0 || InitializeTEBUserLangList(a2, (int)v11) < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v6 = *(_WORD **)NtCurrentTeb()->UserPrefLanguages;
  else
    v6 = 0;
  v4 = v11;
  BaseAddress = v6;
  if ( v6 )
  {
    if ( v6[2] )
    {
      LCIDFromLangListNode = GetLCIDFromLangListNode(DefaultUILanguageId);
      if ( LCIDFromLangListNode >= 0 )
        goto LABEL_14;
      v2 = DefaultUILanguageId;
    }
    BaseAddress = 0;
  }
  v7 = InitializeUserOrMachineLangList(&BaseAddress, (a2 == 0) + 2, a2 == 0);
  v3 = BaseAddress;
  if ( v7 < 0
    || (!BaseAddress || !*((_WORD *)BaseAddress + 2)
      ? (LCIDFromLangListNode = -1073741823)
      : (LCIDFromLangListNode = GetLCIDFromLangListNode(v2)),
        LCIDFromLangListNode < 0) )
  {
LABEL_21:
    LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
    if ( LCIDFromLangListNode < 0 )
      *DefaultUILanguageId = 0;
  }
LABEL_14:
  if ( v3 )
    RtlpMuiRegFreeLanguageList(v3);
  return LCIDFromLangListNode;
}
