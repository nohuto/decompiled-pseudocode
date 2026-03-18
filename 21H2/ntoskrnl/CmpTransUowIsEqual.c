/*
 * XREFs of CmpTransUowIsEqual @ 0x1409196EC
 * Callers:
 *     CmpSearchForTrans @ 0x14067F714 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
