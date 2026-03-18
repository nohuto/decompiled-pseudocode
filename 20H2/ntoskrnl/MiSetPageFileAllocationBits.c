/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14033B0E0
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x14033AB88 (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
