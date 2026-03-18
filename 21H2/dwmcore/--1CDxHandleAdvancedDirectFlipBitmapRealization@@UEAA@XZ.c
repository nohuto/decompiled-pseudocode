/*
 * XREFs of ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ @ 0x1802A33EC
 * Callers:
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z @ 0x1802A3490 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 54);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 416);
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
}
