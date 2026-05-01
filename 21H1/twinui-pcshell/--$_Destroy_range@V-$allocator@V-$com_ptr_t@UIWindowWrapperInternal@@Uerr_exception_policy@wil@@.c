/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180058164
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180054894 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800549E8 (-_Change_array@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V.c)
 *     _std::vector_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWindowWrapperInternal_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x1800DDCE9 (_std--vector_wil--com_ptr_t_IWindowWrapperInternal_wil--err_exception_policy__std--allocator_wil.c)
 *     ??1?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180290480 (--1-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x1802904D4 (--1WindowEventDispatcher@@UEAA@XZ.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x180293688 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180298CD4 (-clear@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180058B78 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
