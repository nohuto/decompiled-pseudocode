/*
 * XREFs of MiSetPageFileAllocationBits @ 0x1402D0BD8
 * Callers:
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x1402D1C28 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x140358F70 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
