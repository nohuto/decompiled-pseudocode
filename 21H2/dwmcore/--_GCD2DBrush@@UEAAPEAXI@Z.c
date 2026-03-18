/*
 * XREFs of ??_GCD2DBrush@@UEAAPEAXI@Z @ 0x18003E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18006A7A4 (--1CD2DResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CD2DBrush *__fastcall CD2DBrush::`scalar deleting destructor'(CD2DBrush *this, char a2)
{
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 10);
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
