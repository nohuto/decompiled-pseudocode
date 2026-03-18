/*
 * XREFs of ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180263E90
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263B08 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18019AE48 (-MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x18019AE60 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 */

__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    v10 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      CRenderTargetBitmap::MarkFullDirty((CRenderTargetBitmap *)(a1 + 120));
    }
  }
  return v8;
}
