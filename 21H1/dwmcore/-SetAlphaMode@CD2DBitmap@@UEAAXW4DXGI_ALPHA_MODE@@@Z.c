/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C8200
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C81F0 (-SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 31) != a2 )
  {
    *((_DWORD *)this + 31) = a2;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  }
}
