/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140310538
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x14030FFE0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
