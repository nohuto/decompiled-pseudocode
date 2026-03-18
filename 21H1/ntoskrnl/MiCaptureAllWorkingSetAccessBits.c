/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1403A271C
 * Callers:
 *     MmPerformMemoryListCommand @ 0x1409961BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  __int64 v3; // rdx

  v3 = 16LL;
  if ( a2 != 1 )
    v3 = 8LL;
  return MiQueueWorkingSetRequest(a1, v3);
}
