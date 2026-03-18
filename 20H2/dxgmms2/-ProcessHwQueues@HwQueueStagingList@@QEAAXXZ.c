/*
 * XREFs of ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00083C0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009E50 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0010B8C (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010DA4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013C58 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00140F0 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0016C9C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F370 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0030680 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0031FF4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0032554 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0032DE8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0032F18 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchConfirmToken @ 0x1C00338A0 (VidSchConfirmToken.c)
 *     VidSchExitIndependentFlip @ 0x1C00345F0 (VidSchExitIndependentFlip.c)
 *     VidSchSetNodePowerState @ 0x1C00352F0 (VidSchSetNodePowerState.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A140 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003586C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueues(HwQueueStagingList *this)
{
  HwQueueStagingList *v2; // rdx
  __int64 v3; // rax

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
