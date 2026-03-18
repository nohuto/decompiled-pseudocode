/*
 * XREFs of VidMmCreateCrossAdapterAllocation @ 0x1C0022440
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_KE@Z @ 0x1C00AF5B8 (-CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_KE@Z.c)
 */

int __fastcall VidMmCreateCrossAdapterAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  return VIDMM_GLOBAL::CreateCrossAdapterAllocation(a1, a2, a3, a4, a5);
}
