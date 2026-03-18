/*
 * XREFs of ??1CD2DBitmap@@UEAA@XZ @ 0x18006A758
 * Callers:
 *     ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x18006B270 (--_ECDeviceTextureTarget@@UEAAPEAXI@Z.c)
 *     ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x18006C8E0 (--_ECSecondaryD2DBitmap@@UEAAPEAXI@Z.c)
 *     ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x18006C930 (--_GCD2DBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 18);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  CD2DResource::~CD2DResource(this);
}
