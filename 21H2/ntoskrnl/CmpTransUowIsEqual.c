/*
 * XREFs of CmpTransUowIsEqual @ 0x140872DAC
 * Callers:
 *     CmEqualTrans @ 0x14071D970 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14076704C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
