/*
 * XREFs of ?IsAllocationCPUVisible@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00B0B0C
 * Callers:
 *     VidMmIsAllocationCPUVisible @ 0x1C0016270 (VidMmIsAllocationCPUVisible.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::IsAllocationCPUVisible(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  return **((_BYTE **)a2 + 64) & 1;
}
