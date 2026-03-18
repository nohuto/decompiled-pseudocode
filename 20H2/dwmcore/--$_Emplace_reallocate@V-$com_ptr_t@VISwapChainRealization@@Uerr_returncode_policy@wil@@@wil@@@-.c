/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180046158
 * Callers:
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1800458D4 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180046258 (--$_Uninitialized_move@PEAV-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180046298 (-_Change_array@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v4 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v13;
  *a3 = 0LL;
  v16 = v13;
  *(_QWORD *)(v13 + 8 * v4) = v14;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
      v18,
      a2,
      v13);
    v17 = a1[1];
    v16 = v15 + 8 * (v4 + 1);
    v18 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
    v18,
    v17,
    v16);
  std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Change_array(a1, v15, v8, v11);
  return *a1 + 8 * v4;
}
