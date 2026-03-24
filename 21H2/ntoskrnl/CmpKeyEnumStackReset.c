/*
 * XREFs of CmpKeyEnumStackReset @ 0x140729A4C
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x14072998C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x140876778 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpKeyEnumStackEntryCleanup @ 0x140699B8C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140699C08 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140699D0C (CmpKeyEnumStackEntryInitialize.c)
 *     CmpResetKeyNodeStack @ 0x140729AAC (CmpResetKeyNodeStack.c)
 */

_DWORD *__fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  _DWORD *result; // rax
  _QWORD *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  result = (_DWORD *)CmpResetKeyNodeStack(a1 + 8);
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    result = CmpKeyEnumStackEntryInitialize((__int64)EntryAtLayerHeight);
    ++v1;
  }
  return result;
}
