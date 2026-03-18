/*
 * XREFs of CmpIsValueTombstone @ 0x1406C01F4
 * Callers:
 *     CmpValueEnumStackAdvance @ 0x14065AED8 (CmpValueEnumStackAdvance.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsValueTombstone(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x80000) != 0 && (*(_BYTE *)(a2 + 16) & 2) != 0;
}
