/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ED0C8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDC9C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140729FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14072A1AC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14072A238 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
