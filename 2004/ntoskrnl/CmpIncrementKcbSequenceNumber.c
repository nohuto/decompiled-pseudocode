/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x14086BD8C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 304);
}
