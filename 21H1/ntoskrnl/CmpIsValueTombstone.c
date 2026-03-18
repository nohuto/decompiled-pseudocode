/*
 * XREFs of CmpIsValueTombstone @ 0x140693B98
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x140715DE4 (CmpValueEnumStackAdvance.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
