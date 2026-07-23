/*
 * XREFs of MiEmptyAllWorkingSets @ 0x14053B438
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14053CA44 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 6848);
  if ( byte_140C4EF1C )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
