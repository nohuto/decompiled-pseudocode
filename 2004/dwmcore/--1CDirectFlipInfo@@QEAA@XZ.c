/*
 * XREFs of ??1CDirectFlipInfo@@QEAA@XZ @ 0x180024A88
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800249C8 (--1COverlayContext@@QEAA@XZ.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x18017B9A8 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18007E030 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180175554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::~CDirectFlipInfo(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rcx

  CDirectFlipInfo::Reset((CDirectFlipInfo *)this);
  v2 = this[5];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(this + 2);
}
