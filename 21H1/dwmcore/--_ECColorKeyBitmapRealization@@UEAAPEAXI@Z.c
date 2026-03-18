/*
 * XREFs of ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x180263140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032EAC (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::`vector deleting destructor'(
        CColorKeyBitmapRealization *this,
        char a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
