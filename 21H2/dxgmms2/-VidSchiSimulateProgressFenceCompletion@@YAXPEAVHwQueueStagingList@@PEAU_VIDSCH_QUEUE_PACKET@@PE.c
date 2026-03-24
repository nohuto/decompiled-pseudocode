/*
 * XREFs of ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038688
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035C50 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035EE8 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038440 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     memset @ 0x1C0018EC0 (memset.c)
 */

void __fastcall VidSchiSimulateProgressFenceCompletion(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  __int64 v5; // rbx
  _DWORD *v6; // rdi

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
  v6 = (_DWORD *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
  *v6 = 9;
  if ( *((_DWORD *)a2 + 12) )
  {
    *((_QWORD *)v6 + 3) = *((_QWORD *)a2 + 36);
    *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 36);
  }
  else
  {
    *(_QWORD *)&v6[2 * *((unsigned int *)a2 + 190) + 6] = *((_QWORD *)a2 + 94);
    *((_QWORD *)a3 + 3 * *((unsigned int *)a2 + 190) + 8) = *((_QWORD *)a2 + 94);
  }
  *((_QWORD *)v6 + 2) = a3;
  *((_BYTE *)v6 + 40) = 1;
}
