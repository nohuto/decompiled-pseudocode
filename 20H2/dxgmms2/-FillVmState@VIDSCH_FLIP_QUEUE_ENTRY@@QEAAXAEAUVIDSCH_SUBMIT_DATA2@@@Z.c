/*
 * XREFs of ?FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0001A24
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C29C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00384F4 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(VIDSCH_FLIP_QUEUE_ENTRY *this, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 68);
  if ( v2 )
  {
    *((_QWORD *)this + 163) = v2;
    *((_QWORD *)this + 164) = *((_QWORD *)a2 + 69);
    *((_QWORD *)this + 165) = *((_QWORD *)a2 + 70);
    *((_QWORD *)this + 166) = *((_QWORD *)a2 + 71);
    *((_DWORD *)this + 334) ^= (*((_DWORD *)this + 334) ^ (*((_DWORD *)a2 + 1) >> 5)) & 1;
    *((_DWORD *)this + 334) ^= ((unsigned __int8)*((_DWORD *)this + 334) ^ (unsigned __int8)(*((_DWORD *)a2 + 1) >> 3)) & 2;
  }
}
