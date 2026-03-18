/*
 * XREFs of CmpTransUowIsEqual @ 0x140875518
 * Callers:
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x140763A5C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
