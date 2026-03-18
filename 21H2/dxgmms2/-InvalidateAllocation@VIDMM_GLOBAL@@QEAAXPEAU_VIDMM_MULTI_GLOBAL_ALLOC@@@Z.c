/*
 * XREFs of ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00D77A8
 * Callers:
 *     VidMmInvalidateAllocation @ 0x1C002D320 (VidMmInvalidateAllocation.c)
 * Callees:
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D77D0 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InvalidateAllocation(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateOneAllocation(this, a2);
}
