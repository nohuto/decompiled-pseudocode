/*
 * XREFs of CmpKeyEnumStackReset @ 0x140715C3C
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140715B7C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x140871FB8 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpKeyEnumStackEntryCleanup @ 0x1406C8C7C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406C8CF8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1406C8DFC (CmpKeyEnumStackEntryInitialize.c)
 *     CmpResetKeyNodeStack @ 0x140715C9C (CmpResetKeyNodeStack.c)
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
