/*
 * XREFs of DxgkDestroyContextInternal @ 0x1C01DA7C0
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0008188 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1C001BF04 (--1CAdapter@@IEAA@XZ.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C0076A80 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0166C98 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyContextImpl(a1, 0, a3);
}
