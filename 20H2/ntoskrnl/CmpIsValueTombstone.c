/*
 * XREFs of CmpIsValueTombstone @ 0x1406D53F0
 * Callers:
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x140726134 (CmpValueEnumStackAdvance.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
