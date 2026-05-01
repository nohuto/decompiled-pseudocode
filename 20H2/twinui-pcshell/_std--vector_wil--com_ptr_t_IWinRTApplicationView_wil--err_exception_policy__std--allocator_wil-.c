/*
 * XREFs of _std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x180267100
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008DA74 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180145374 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
