/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00018DC
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00013A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D8D0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00150C0 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00153E8 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C29C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0031660 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035C88 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036378 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry->Next + 3, 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry->Next;
    if ( ListEntry->Next )
    {
      ++*((_DWORD *)&Next[1].Next + 3);
      if ( ExQueryDepthSList((PSLIST_HEADER)Next) < LOWORD(Next[1].Next) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)Next, ListEntry);
      }
      else
      {
        ++LODWORD(Next[2].Next);
        (*((void (__fastcall **)(PSLIST_ENTRY, struct _SLIST_ENTRY *))&Next[3].Next + 1))(ListEntry, Next);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry, 0);
    }
  }
}
