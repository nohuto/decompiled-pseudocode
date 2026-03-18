/*
 * XREFs of floor @ 0x1800E3A38
 * Callers:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800CD834 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180193558 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180193C90 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     ?RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801941B4 (-RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTarget.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180194688 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z @ 0x180205E70 (-EvaluateCurve@XamlBounceInterpolation@@MEAANN@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180219ED0 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18021DF98 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x18021E19C (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180265FD4 (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}
