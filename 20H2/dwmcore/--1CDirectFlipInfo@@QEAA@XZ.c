/*
 * XREFs of ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800DB8DC
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x18003B3B4 (--1COverlayContext@@QEAA@XZ.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x180179D58 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18009CF50 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173814 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::~CDirectFlipInfo(CDirectFlipInfo *this, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  CDirectFlipInfo::Reset(this, a2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
}
