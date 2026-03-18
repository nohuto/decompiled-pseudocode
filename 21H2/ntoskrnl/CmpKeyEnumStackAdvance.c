/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x14065B900
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069EE0C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14065B994 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v4; // r9
  _QWORD *v5; // r10

  for ( result = ((__int64 (*)(void))CmpKeyEnumStackAdvanceInternal)();
        (int)result >= 0;
        result = CmpKeyEnumStackAdvanceInternal(a1) )
  {
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 4);
        EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
        if ( v5[2] )
          break;
        if ( EntryAtLayerHeight[1] && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight)
          || v4 == a1[1]
          || (__int16)(v4 - 1) < 0 )
        {
          goto LABEL_11;
        }
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v5) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
