/*
 * XREFs of MiReleaseScrubPacket @ 0x1408DE790
 * Callers:
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1408DE7E0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x1403292F4 (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14037E940 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
