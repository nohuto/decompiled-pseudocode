/*
 * XREFs of ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C001EEFE
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiIsFocusHwContext(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( *((_BYTE *)a1 + 88) )
  {
    if ( gulPublicPriorityToSchedulingPriority[*((unsigned int *)a1 + 21)] != 16 )
      return 0;
  }
  else if ( (*((_DWORD *)a1 + 19) & 1) == 0 )
  {
    return 0;
  }
  return 1;
}
