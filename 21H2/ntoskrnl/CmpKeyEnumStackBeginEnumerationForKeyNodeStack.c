/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140920FCC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpKeyEnumStackEntryBegin @ 0x14065BDD8 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14069F45C (CmpGetEffectiveKeyNodeSemantics.c)
 */

_UNKNOWN **__fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  _QWORD *v6; // r9
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *a1; i >= 0; --i )
  {
    CmpKeyNodeStackGetEntryAtLayerHeight(a2);
    result = (_UNKNOWN **)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    if ( v6[2] )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKeyNodeSemantics(*v6);
      v9 = (int)result;
      if ( (_DWORD)result == 1 )
        break;
      result = (_UNKNOWN **)CmpKeyEnumStackEntryBegin(v8, v7);
      if ( (v9 & 0xFFFFFFFD) != 0 )
        break;
    }
  }
  return result;
}
