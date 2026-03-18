/*
 * XREFs of ?DestroyPagingQueue@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0099064
 * Callers:
 *     ?VidMmDestroyPagingQueue@@YAXPEAVVIDMM_DEVICE@@PEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0013EE0 (-VidMmDestroyPagingQueue@@YAXPEAVVIDMM_DEVICE@@PEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0013EF8 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_DEVICE::DestroyPagingQueue(VIDMM_DEVICE *this, struct VIDMM_PAGING_QUEUE *a2)
{
  if ( a2 )
    VIDMM_PAGING_QUEUE::`scalar deleting destructor'(a2);
}
