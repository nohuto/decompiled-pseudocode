/*
 * XREFs of CmpKeyEnumStackReset @ 0x140725F8C
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140725ECC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x140878DF8 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpKeyEnumStackEntryCleanup @ 0x1406BDCB4 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406BDD30 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1406BDE34 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpResetKeyNodeStack @ 0x140725FEC (CmpResetKeyNodeStack.c)
 */

_DWORD *__fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  _DWORD *result; // rax
  _QWORD *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 2) = 0;
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
