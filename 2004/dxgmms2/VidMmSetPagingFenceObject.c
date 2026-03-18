/*
 * XREFs of VidMmSetPagingFenceObject @ 0x1C00146D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPagingFenceObject@VIDMM_PAGING_QUEUE@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00BD188 (-SetPagingFenceObject@VIDMM_PAGING_QUEUE@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 */

void __fastcall VidMmSetPagingFenceObject(VIDMM_PAGING_QUEUE *a1, struct _VIDSCH_SYNC_OBJECT *a2, unsigned __int64 a3)
{
  VIDMM_PAGING_QUEUE::SetPagingFenceObject(a1, a2, a3);
}
