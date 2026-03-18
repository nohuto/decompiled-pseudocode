/*
 * XREFs of ?ADAPTER_RENDER_DdiCreateHwQueue@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C00412A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C0217AAC (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCreateHwQueue(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_CREATEHWQUEUE *a3)
{
  return ADAPTER_RENDER::DdiCreateHwQueue(a1, a2, a3);
}
