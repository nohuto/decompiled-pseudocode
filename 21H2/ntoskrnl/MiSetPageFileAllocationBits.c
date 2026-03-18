/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140389840
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14025F6B0 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x14037E048 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
