/*
 * XREFs of ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800381B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801B8030 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802AAC10 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AC830 (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorChannelDepth(int a1)
{
  if ( a1 <= 65 )
  {
    if ( a1 == 65 )
      return 8LL;
    if ( a1 == 2 )
      return 32LL;
    if ( a1 > 9 )
    {
      if ( a1 <= 11 )
        return 16LL;
      if ( a1 != 24 )
      {
        if ( a1 != 28 && a1 != 49 && a1 != 61 )
          return 0LL;
        return 8LL;
      }
      return 10LL;
    }
    return 0LL;
  }
  if ( a1 < 87 )
    return 0LL;
  if ( a1 <= 88 || a1 == 91 || a1 == 103 )
    return 8LL;
  if ( a1 != 104 )
  {
    if ( a1 <= 105 || a1 > 107 )
      return 0LL;
    return 8LL;
  }
  return 10LL;
}
