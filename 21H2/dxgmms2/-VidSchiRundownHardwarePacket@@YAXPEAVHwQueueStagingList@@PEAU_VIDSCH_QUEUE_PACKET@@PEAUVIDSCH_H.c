/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C004053C
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00403E8 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EA1C (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F222 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003F638 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0040738 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownHardwarePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  struct _VIDSCH_QUEUE_PACKET *v4; // rbx
  struct HwQueueStagingList *v5; // rcx
  __int64 v6; // r9
  struct VIDSCH_HW_QUEUE *v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v5 = (struct HwQueueStagingList *)*((int *)a2 + 12);
  if ( (_DWORD)v5 )
  {
    switch ( (_DWORD)v5 )
    {
      case 3:
        VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
        return;
      case 4:
        VidSchiCompleteHwQueueWaitPacket(a1, a2, (__int64)a3);
        return;
      case 5:
LABEL_8:
        VidSchiCompleteHwQueueSignalPacket(a1, a2);
        return;
    }
    v6 = (unsigned int)((_DWORD)v5 - 7);
    if ( (_DWORD)v5 == 7 )
      goto LABEL_14;
    if ( (_DWORD)v5 != 8 )
    {
      WdLogSingleEntry5(0LL, 281LL, 2048LL, a3, a2, *((int *)a2 + 12));
      __debugbreak();
      goto LABEL_8;
    }
  }
  if ( (*((_DWORD *)a2 + 20) & 0x40) == 0 )
  {
    v7 = 0LL;
    VidSchiReleasePacketToGpu(a1, a2, &v7);
    return;
  }
  VidSchiSimulateProgressFenceCompletion(v5, a2, a3);
  a2 = v4;
LABEL_14:
  VidSchiCompleteHwQueuePacket(a1, a2, 0LL, v6);
}
