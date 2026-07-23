/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1403A5C7C
 * Callers:
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  __int64 v3; // rdx

  v3 = 16LL;
  if ( a2 != 1 )
    v3 = 8LL;
  return MiQueueWorkingSetRequest(a1, v3);
}
