/*
 * XREFs of DxgkDestroyContextInternal @ 0x1C00D94F0
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0006D00 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0007844 (--1CAdapter@@IEAA@XZ.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C0062C60 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00DB9F8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1)
{
  return DxgkDestroyContextImpl(a1, 0);
}
