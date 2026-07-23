/*
 * XREFs of CmpTransUowIsEqual @ 0x140872F0C
 * Callers:
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14076720C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
