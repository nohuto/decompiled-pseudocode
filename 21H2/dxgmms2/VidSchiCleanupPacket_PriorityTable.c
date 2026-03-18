/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00F6E50
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C00445A8 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1C0009E90 (VidSchiSelectContext.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0038950 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0039278 (VidSchiProcessPrimariesTerminationList.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(__int64 a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList(a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
