/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140729F10
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BD58 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404ECE88 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EDA5C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407294A0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140729B28 (CmpKeyEnumStackAdvance.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140729CFC (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140729D88 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087B8FC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
