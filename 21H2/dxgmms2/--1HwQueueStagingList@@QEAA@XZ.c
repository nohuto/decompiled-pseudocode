/*
 * XREFs of ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00143B8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C00145C0 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     VidSchTimeoutSyncObject @ 0x1C001A0C0 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001ED4E (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001F6F4 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0038FAC (VidSchiProcessPeriodicNotificationCookie.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003B27C (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00405FC (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0042D28 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0044610 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001E78A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
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
