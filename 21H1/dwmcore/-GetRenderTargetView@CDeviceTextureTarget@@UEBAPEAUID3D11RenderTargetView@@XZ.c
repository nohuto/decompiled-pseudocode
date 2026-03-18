/*
 * XREFs of ?GetRenderTargetView@CDeviceTextureTarget@@UEBAPEAUID3D11RenderTargetView@@XZ @ 0x1800DDC3C
 * Callers:
 *     ?GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ @ 0x1800EF870 (-GetRenderTargetView@CDeviceTextureTarget@@$4PPPPPPPM@A@EBAPEAUID3D11RenderTargetView@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11RenderTargetView *__fastcall CDeviceTextureTarget::GetRenderTargetView(CDeviceTextureTarget *this)
{
  return (struct ID3D11RenderTargetView *)*((_QWORD *)this - 18);
}
