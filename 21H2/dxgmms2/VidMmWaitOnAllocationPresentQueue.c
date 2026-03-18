/*
 * XREFs of VidMmWaitOnAllocationPresentQueue @ 0x1C002D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A93D0 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 */

__int64 __fastcall VidMmWaitOnAllocationPresentQueue(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  return VIDMM_GLOBAL::WaitOnAllocationPresentQueue(a1, a2, a3);
}
