/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140225E68 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1402260D0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14065C2F0 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140921D8C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
