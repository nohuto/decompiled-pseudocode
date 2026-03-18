/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C0031CF8
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x1C0002630 (VidSchiUpdatePresentParameters.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchConfirmToken @ 0x1C00338A0 (VidSchConfirmToken.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036378 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C002A514 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C002F8A8 (VidSchiFlushPendingTokenList.c)
 */

void __fastcall VidSchiTryEnterIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // r11d

  if ( VidSchiCheckPlaneIndependentFlipCondition(a2, a3, a4) )
    VidSchiFlushPendingTokenList(a1, a2, a3, v7);
}
