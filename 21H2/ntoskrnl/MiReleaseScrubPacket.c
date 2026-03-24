/*
 * XREFs of MiReleaseScrubPacket @ 0x1408DBF50
 * Callers:
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1408DBFA0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x1402CAA24 (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14037EFC0 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
