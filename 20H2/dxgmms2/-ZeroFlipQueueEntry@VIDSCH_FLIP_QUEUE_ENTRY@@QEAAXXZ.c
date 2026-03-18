/*
 * XREFs of ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C002CCB8
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BFB0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C29C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00384F4 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  _DWORD *v1; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 147);
  memset(this, 0, 0x540uLL);
  *((_QWORD *)this + 147) = v1;
  memset(v1 + 4, 0, v1[1] * ((v1[2] << 6) + ((8 * v1[2] + 199) & 0xFFFFFFF8)));
}
