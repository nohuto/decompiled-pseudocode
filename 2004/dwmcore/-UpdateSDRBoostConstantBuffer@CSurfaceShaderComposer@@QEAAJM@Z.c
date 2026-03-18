/*
 * XREFs of ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180246EF8
 * Callers:
 *     ?CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180192C84 (-CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023DCAC (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023DF80 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180246E1C (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(CSurfaceShaderComposer *this, float a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  const void *v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  v6[0] = (const void *)16;
  v7 = 0LL;
  *(float *)&v7 = a2;
  v6[1] = &v7;
  v2 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)this, v6, D3D11_USAGE_DYNAMIC);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x1A4u, 0LL);
  return v4;
}
