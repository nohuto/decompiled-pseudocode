/*
 * XREFs of ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z @ 0x1802644C0
 * Callers:
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@WBCA@EAAPEAXI@Z @ 0x1800F0360 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@WBCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800C1E5C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::`vector deleting destructor'(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 50);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 384);
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
