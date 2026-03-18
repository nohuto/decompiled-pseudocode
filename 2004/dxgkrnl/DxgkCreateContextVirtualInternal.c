/*
 * XREFs of DxgkCreateContextVirtualInternal @ 0x1C0151208
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0011DC8 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0063A60 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E5C60 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualInternal(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, __int64 a2, __int64 a3)
{
  return DxgkCreateContextVirtualImpl(a1, 0, a3);
}
