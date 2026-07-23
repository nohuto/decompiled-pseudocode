/*
 * XREFs of _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 * Callees:
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _LdrpLangFallbackListFindNode@16 @ 0x4B2D5519 (_LdrpLangFallbackListFindNode@16.c)
 */

int __fastcall LdrpLangFallbackListAppendNode(int *a1, _DWORD *a2, char a3, __int16 *a4, PCWSTR SourceString, int a6)
{
  int Node; // ecx
  char v8; // dl
  __int16 v9; // ax

  if ( !a1 || !*a1 || !SourceString || !a4 )
    return -1073741811;
  *a4 = -1;
  Node = LdrpLangFallbackListFindNode(SourceString, (int)a4);
  if ( Node < 0 || *a4 < 0 )
  {
    if ( a3 )
      v8 = 0;
    else
      v8 = 2;
    Node = RtlpMuiRegAddMultiSzToLangFallbackList(
             a2,
             (const unsigned __int16 *)SourceString,
             wcslen((const unsigned __int16 *)SourceString) + 1,
             v8,
             2,
             1u,
             a1);
    if ( Node >= 0 )
    {
      v9 = *(_WORD *)(*a1 + 4);
      if ( v9 )
        *a4 = v9 - 1;
    }
  }
  return Node;
}
