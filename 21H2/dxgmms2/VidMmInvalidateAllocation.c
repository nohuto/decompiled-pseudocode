/*
 * XREFs of VidMmInvalidateAllocation @ 0x1C002D320
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00D77A8 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmInvalidateAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateAllocation(a1, a2);
}
