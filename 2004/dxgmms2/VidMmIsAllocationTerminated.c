/*
 * XREFs of VidMmIsAllocationTerminated @ 0x1C0022A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B1F90 (-IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationTerminated(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationTerminated(a1, a2);
}
