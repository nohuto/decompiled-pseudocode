/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18005FF68
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x18005FF98 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801C1D6C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801C47C4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  if ( a1 <= 61 )
    return a1 == 61 || a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28 || a1 == 49);
  return a1 == 65 || a1 > 86 && (a1 <= 88 || a1 == 91 || a1 > 102 && (a1 <= 104 || a1 > 105 && a1 <= 107));
}
