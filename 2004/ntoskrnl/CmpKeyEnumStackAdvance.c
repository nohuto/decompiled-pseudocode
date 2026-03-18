/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x1407180A8
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140717F0C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140877214 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406E93B8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1407180DC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140718430 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 v3; // r8
  __int16 v4; // dx
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v6; // r8
  _QWORD *v7; // r9

LABEL_1:
  while ( 1 )
  {
    result = CmpKeyEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      return result;
    v3 = *a1;
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), v3);
        EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, v4);
        if ( v7[2] )
          break;
        if ( !EntryAtLayerHeight[1] || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) )
        {
          v3 = v6 - 1;
          if ( v3 >= 0 )
            continue;
        }
        goto LABEL_1;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7) != 1 )
        return 0LL;
    }
  }
}
