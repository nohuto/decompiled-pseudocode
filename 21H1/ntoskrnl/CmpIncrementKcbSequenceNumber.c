/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x14086AA3C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
