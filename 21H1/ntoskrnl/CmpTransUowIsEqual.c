/*
 * XREFs of CmpTransUowIsEqual @ 0x14086DF08
 * Callers:
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14075078C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
