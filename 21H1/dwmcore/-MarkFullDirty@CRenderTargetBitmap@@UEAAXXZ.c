/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18019F678
 * Callers:
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ @ 0x1800ED5C0 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ @ 0x1800F0A20 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ @ 0x1800F0B60 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ.c)
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802676E0 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(CRenderTargetBitmap *this)
{
  CD2DBitmapCache::MarkFullInvalid((CRenderTargetBitmap *)((char *)this - 240));
}
