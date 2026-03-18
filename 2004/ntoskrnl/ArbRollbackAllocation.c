/*
 * XREFs of ArbRollbackAllocation @ 0x1408640F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x14074E320 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRollbackAllocation(__int64 a1)
{
  RtlFreeRangeList(*(_QWORD **)(a1 + 48));
  return 0LL;
}
