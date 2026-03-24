/*
 * XREFs of CmpIsValueTombstone @ 0x1406B2EA0
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpValueEnumStackAdvance @ 0x140729C54 (CmpValueEnumStackAdvance.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C548 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
