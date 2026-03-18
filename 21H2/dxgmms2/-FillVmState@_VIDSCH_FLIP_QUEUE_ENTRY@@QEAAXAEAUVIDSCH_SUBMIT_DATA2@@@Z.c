/*
 * XREFs of ?FillVmState@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0033F7C
 * Callers:
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(_VIDSCH_FLIP_QUEUE_ENTRY *this, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 70);
  if ( v2 )
  {
    *((_QWORD *)this + 166) = v2;
    *((_DWORD *)this + 334) = *((_DWORD *)a2 + 142);
    *((_QWORD *)this + 168) = *((_QWORD *)a2 + 72);
    *((_QWORD *)this + 169) = *((_QWORD *)a2 + 73);
    *((_QWORD *)this + 170) = *((_QWORD *)a2 + 74);
    *((_DWORD *)this + 342) ^= (*((_DWORD *)this + 342) ^ (*((_DWORD *)a2 + 1) >> 5)) & 1;
    *((_DWORD *)this + 342) ^= ((unsigned __int8)*((_DWORD *)this + 342) ^ (unsigned __int8)(*((_DWORD *)a2 + 1) >> 3)) & 2;
  }
}
