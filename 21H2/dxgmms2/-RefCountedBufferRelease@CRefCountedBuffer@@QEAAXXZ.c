/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002EAC
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C0002970 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002F90 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0004180 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C000A060 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00151C8 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00154F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4FC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00318C0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035EE8 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00365D8 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
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
