/*
 * XREFs of ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800D31D0
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800F8360 (-SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDeviceTextureTarget::SetAlphaMode(CDeviceTextureTarget *this, enum DXGI_ALPHA_MODE a2)
{
  CD2DBitmap::SetAlphaMode(this, a2);
}
