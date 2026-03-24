/*
 * XREFs of MiEmptyAllWorkingSets @ 0x14053B1F8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14053C804 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x14099568C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x14099AB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A5B54 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 6848);
  if ( byte_140C4EEDC )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
