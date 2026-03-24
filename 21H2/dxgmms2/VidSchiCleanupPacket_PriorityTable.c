/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00D45F8
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C003C8A8 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1C000B380 (VidSchiSelectContext.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002F564 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C00306A8 (VidSchiProcessPrimariesTerminationList.c)
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
