/*
 * XREFs of ??_GCCachedTarget@CCachedVisualImage@@QEAAPEAXI@Z @ 0x1800D38D0
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180046F8C (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801AD4F4 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::CCachedTarget::`scalar deleting destructor'(
        CCachedVisualImage::CCachedTarget *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = (_QWORD *)(*(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v3 + 48LL))(
      v3,
      (*(_QWORD *)this + 80LL) & -(__int64)(*(_QWORD *)this != 0LL),
      *v3,
      -*(_QWORD *)this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
  operator delete(this);
  return this;
}
