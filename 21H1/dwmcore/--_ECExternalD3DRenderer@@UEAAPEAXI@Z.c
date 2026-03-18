/*
 * XREFs of ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x180239A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800A2A88 (--1CD3DResource@@MEAA@XZ.c)
 */

CExternalD3DRenderer *__fastcall CExternalD3DRenderer::`vector deleting destructor'(
        CExternalD3DRenderer *this,
        char a2)
{
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 14);
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
