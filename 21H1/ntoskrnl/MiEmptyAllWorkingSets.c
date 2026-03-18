/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1405356D8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140536CE4 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x14098CAFC (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x1409961BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 6848);
  if ( byte_140C4EE1C )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
