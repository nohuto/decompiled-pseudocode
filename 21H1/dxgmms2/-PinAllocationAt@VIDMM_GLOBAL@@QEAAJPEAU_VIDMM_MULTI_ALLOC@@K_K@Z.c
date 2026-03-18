/*
 * XREFs of ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00B33F8
 * Callers:
 *     VidMmPinAllocationAt @ 0x1C0022B80 (VidMmPinAllocationAt.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B3420 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocationAt(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, 0LL, a3, a4, 0LL);
}
