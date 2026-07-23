/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14072A238
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14087AE88 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1405F8DC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14072A2EC (CmpKeyEnumStackEntryBegin.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14072A3C0 (CmpGetEffectiveKeyNodeSemantics.c)
 */

_UNKNOWN **__fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(__int16 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int16 v6; // dx
  _QWORD *v7; // r9
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *a1; i >= 0; --i )
  {
    CmpKeyNodeStackGetEntryAtLayerHeight(a2, i);
    result = (_UNKNOWN **)CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, v6);
    if ( v7[2] )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKeyNodeSemantics(*v7);
      v10 = (int)result;
      if ( (_DWORD)result == 1 )
        break;
      result = (_UNKNOWN **)CmpKeyEnumStackEntryBegin(v9, v8);
      if ( (v10 & 0xFFFFFFFD) != 0 )
        break;
    }
  }
  return result;
}
