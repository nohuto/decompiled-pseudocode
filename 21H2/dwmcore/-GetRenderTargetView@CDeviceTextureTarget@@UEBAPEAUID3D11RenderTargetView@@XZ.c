/*
 * XREFs of ?GetRenderTargetView@CDeviceTextureTarget@@UEBAPEAUID3D11RenderTargetView@@XZ @ 0x1800FC52C
 * Callers:
 *     ?GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ @ 0x180109A30 (-GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11RenderTargetView *__fastcall CDeviceTextureTarget::GetRenderTargetView(CDeviceTextureTarget *this)
{
  return (struct ID3D11RenderTargetView *)*((_QWORD *)this - 18);
}
