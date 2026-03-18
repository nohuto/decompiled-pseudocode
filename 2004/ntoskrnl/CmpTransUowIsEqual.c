/*
 * XREFs of CmpTransUowIsEqual @ 0x14086F9C8
 * Callers:
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x140754E1C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
