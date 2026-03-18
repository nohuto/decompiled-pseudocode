/*
 * XREFs of ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025CC88
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025C74C (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x18025D1FC (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801BB0C4 (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  _QWORD *i; // r8
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0,
    &v4);
  if ( v4 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 13); i != *((_QWORD **)this + 14) && *i != v4; ++i )
      ;
    if ( i != *((_QWORD **)this + 14) )
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(
        (__int64)this + 104,
        &v5,
        (__int64)i);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 160LL))(*((_QWORD *)this + 3));
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
}
