/*
 * XREFs of ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800CE920
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800F2550 (-SetAlphaMode@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDeviceTextureTarget::SetAlphaMode(CDeviceTextureTarget *this, enum DXGI_ALPHA_MODE a2)
{
  CD2DBitmap::SetAlphaMode(this, a2);
}
