/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCComputeScribble@@@Z @ 0x1801A703C
 * Callers:
 *     ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801A0ED0 (-EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801A733C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@PEAV.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801A8108 (-_Change_array@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Emplace_reallocate<CComputeScribble * &>(
        __int64 *a1,
        __int64 a2,
        void (__fastcall ****a3)(_QWORD))
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD); // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v4 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v13;
  *(_QWORD *)(v13 + 8 * v4) = *a3;
  if ( v14 )
    (**v14)(v14);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy> *,wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>>(
      v18,
      a2,
      v15);
    v16 = a1[1];
    v17 = v15 + 8 * (v4 + 1);
    v18 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy> *,wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>>(
    v18,
    v16,
    v17);
  std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Change_array(a1, v15, v8, v11);
  return *a1 + 8 * v4;
}
