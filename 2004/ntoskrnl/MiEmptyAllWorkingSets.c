/*
 * XREFs of MiEmptyAllWorkingSets @ 0x140535D28
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140537334 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140992EDC (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x14099758C (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A2ED4 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 6848);
  if ( byte_140C4ECDC )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
