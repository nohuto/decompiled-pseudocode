/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x1407263F0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BAA8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404EB598 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EC17C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140726068 (CmpKeyEnumStackAdvance.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407261DC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140726268 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087DF88 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
