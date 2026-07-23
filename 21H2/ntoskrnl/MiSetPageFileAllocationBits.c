/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14024F068
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140250048 (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
