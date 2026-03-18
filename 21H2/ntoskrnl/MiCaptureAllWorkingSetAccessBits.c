/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1403DD3F8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
