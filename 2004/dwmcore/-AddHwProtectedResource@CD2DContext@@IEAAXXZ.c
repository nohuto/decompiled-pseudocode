/*
 * XREFs of ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023946C
 * Callers:
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x180090F30 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x180093620 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x1800B2C28 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800B3000 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?Initialize@CD2DResource@@MEAAJXZ @ 0x1800CA110 (-Initialize@CD2DResource@@MEAAJXZ.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180237118 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180248EA0 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1802498D0 (-Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z.c)
 *     ?Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z @ 0x18024B1FC (-Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18024B428 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x18024B97C (-Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x18026B9E4 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801542B8 (McTemplateU0qq_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::AddHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d

  v1 = *((_DWORD *)this + 120);
  *((_DWORD *)this + 120) = v1 + 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 + 1);
}
