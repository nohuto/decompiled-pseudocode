/*
 * XREFs of MiEmptyAllWorkingSets @ 0x14059673C
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140597560 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140A48B0C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16600);
  if ( byte_140C53444 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
