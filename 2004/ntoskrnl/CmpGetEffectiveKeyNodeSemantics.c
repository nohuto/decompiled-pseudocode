/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140718430
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369AC8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E7D08 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E88EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x1407180A8 (CmpKeyEnumStackAdvance.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14071821C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407182A8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087840C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
