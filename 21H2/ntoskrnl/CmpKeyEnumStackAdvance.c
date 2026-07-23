/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x140729FD8
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087A86C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1405F8DC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072A06C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 v3; // r8
  __int16 v4; // dx
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v6; // r8
  _QWORD *v7; // r9

  for ( result = ((__int64 (*)(void))CmpKeyEnumStackAdvanceInternal)();
        (int)result >= 0;
        result = CmpKeyEnumStackAdvanceInternal(a1) )
  {
    v3 = *a1;
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), v3);
        EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, v4);
        if ( v7[2] )
          break;
        if ( (!EntryAtLayerHeight[1] || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight))
          && v6 != a1[1] )
        {
          v3 = v6 - 1;
          if ( v3 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
