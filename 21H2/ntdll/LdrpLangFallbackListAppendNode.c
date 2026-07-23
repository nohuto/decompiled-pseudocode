/*
 * XREFs of LdrpLangFallbackListAppendNode @ 0x18003B528
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EED00 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpLangFallbackListFindNode @ 0x18003B628 (LdrpLangFallbackListFindNode.c)
 */

__int64 __fastcall LdrpLangFallbackListAppendNode(__int64 *a1, __int64 a2, char a3, __int16 *a4, const WCHAR *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  int Node; // edx
  __int16 v12; // cx

  if ( a1 && (v9 = *a1) != 0 && a5 && a4 )
  {
    v10 = -1LL;
    *a4 = -1;
    Node = LdrpLangFallbackListFindNode(a2, v9, a5);
    if ( Node < 0 || *a4 < 0 )
    {
      do
        ++v10;
      while ( a5[v10] );
      Node = RtlpMuiRegAddMultiSzToLangFallbackList(a2, a5, (int)v10 + 1, a3 == 0 ? 2 : 0, 2, 1u, a1);
      if ( Node >= 0 )
      {
        v12 = *(_WORD *)(*a1 + 4);
        if ( v12 )
          *a4 = v12 - 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Node;
}
