/*
 * XREFs of ??1CComposeTop@@QEAA@XZ @ 0x18019DB30
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180016F54 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801F5E24 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
  if ( v1 )
    std::default_delete<CShape>::operator()((__int64)this, v1);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v3 )
    std::default_delete<CShape>::operator()((__int64)this, v3);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)this + 8);
}
