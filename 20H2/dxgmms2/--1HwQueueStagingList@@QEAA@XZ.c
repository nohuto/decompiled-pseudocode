/*
 * XREFs of ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009DB0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0001924 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00069E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00083C0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010888 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiClearFlipDevice @ 0x1C0010B08 (VidSchiClearFlipDevice.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C0010C10 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015BD0 (VidSchMarkDeviceAsError.c)
 *     VidSchTimeoutSyncObject @ 0x1C0016BBC (VidSchTimeoutSyncObject.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BFB0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0030224 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00324A8 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0033E30 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035530 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037988 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00382E8 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003ACC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B580 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C6B0 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003586C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::~HwQueueStagingList(HwQueueStagingList *this)
{
  HwQueueStagingList *v2; // rdx
  __int64 v3; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    while ( 1 )
    {
      v2 = *(HwQueueStagingList **)this;
      if ( *(HwQueueStagingList **)(*(_QWORD *)this + 8LL) != this
        || (v3 = *(_QWORD *)v2, *(HwQueueStagingList **)(*(_QWORD *)v2 + 8LL) != v2) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)this = v3;
      *(_QWORD *)(v3 + 8) = this;
      if ( v2 == this )
        break;
      *(_QWORD *)v2 = 0LL;
      *((_QWORD *)v2 + 1) = 0LL;
      HwQueueStagingList::ProcessHwQueue(this, (HwQueueStagingList *)((char *)v2 - 176));
    }
    *((_BYTE *)this + 16) = 1;
  }
}
