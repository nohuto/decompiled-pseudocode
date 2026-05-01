/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801454CC
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180092D60 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 *     ?AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802484D0 (-AddViewHostItem@HolographicViewHostItemLedger@@UEAAJPEAUIViewHostItem@Holographic@Shell@Interna.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180145CA4 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180154CD4 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  __int64 *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *v19; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = &v12[v5];
  try
  {
    v14 = *a3;
    *v13 = *a3;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v19 = &v12[v5];
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
        v17,
        a2,
        v12);
      v19 = v12;
      v16 = v13 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
      v17,
      v15,
      v16);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
      v19,
      v13 + 1);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array(a1, v12, v7, v10, v12);
  return *a1 + 8 * v5;
}
