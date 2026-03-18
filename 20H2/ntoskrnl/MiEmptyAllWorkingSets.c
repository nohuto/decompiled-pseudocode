/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1405396F8
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14053AD04 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140998F4C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x14099D5CC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 */

int __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 6848);
  if ( byte_140C4ED5C )
  {
    ++*(_DWORD *)(v1 + 28);
    LODWORD(v1) = MiQueueWorkingSetRequest(a1, 4);
  }
  return v1;
}
