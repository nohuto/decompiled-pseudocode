/*
 * XREFs of MiReleaseScrubPacket @ 0x1408D8950
 * Callers:
 *     MiInitializeScrubPacket @ 0x1408D8850 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1408D89A0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408D8A10 (MiScrubProcesses.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x14037CC10 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  MiReleasePteCopyList(a1 + 176);
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
