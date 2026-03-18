/*
 * XREFs of ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x180021A50
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CDeviceTextureTarget::ReleaseD2DResources(CDeviceTextureTarget *this)
{
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 264);
  CD2DBitmap::ReleaseD2DResources(this);
}
