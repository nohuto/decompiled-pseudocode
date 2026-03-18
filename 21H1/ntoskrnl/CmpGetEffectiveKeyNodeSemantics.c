/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x1407160A0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1404E76D8 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404E82BC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140715D18 (CmpKeyEnumStackAdvance.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140715E8C (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140715F18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087711C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
