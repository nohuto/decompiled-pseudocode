/*
 * XREFs of ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C0022480
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C00B7868 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 */

unsigned __int64 __fastcall VidMmMapContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmMapContextAllocationCb(a1, a2);
}
