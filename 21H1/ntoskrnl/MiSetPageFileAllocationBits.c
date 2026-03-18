/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140320618
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x14032145C (MiFindPageFileWriteCluster.c)
 *     MiFindFreePageFileSpace @ 0x14034CC50 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
