/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801FC2A8
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1801FC3A8 (--$emplace_back@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z @ 0x18002CF40 (-_Calculate_growth@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18018B4F0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V-$all.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18018C504 (-_Change_array@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // r8
  __int64 *v16; // rdx
  __int64 *v17; // rcx

  v4 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = std::vector<CSceneNode *>::_Calculate_growth(a1, v6 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = *a3;
  v14 = (__int64)v12;
  *a3 = 0LL;
  v15 = v12;
  v12[v4] = v13;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>>(
      v17,
      a2,
      v12);
    v16 = a1[1];
    v15 = (__int64 *)(v14 + 8 * (v4 + 1));
    v17 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>>(
    v17,
    v16,
    v15);
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Change_array((__int64)a1, v14, v8, v9);
  return (__int64)&(*a1)[v4];
}
