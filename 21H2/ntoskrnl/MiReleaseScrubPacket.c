/*
 * XREFs of MiReleaseScrubPacket @ 0x1408DC0B0
 * Callers:
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1408DC100 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
