/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180122BD4
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$1 @ 0x1800926C8 (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$1.c)
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A91D0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 *     _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$3 @ 0x18025DA3B (_TabViewManager--TryRemoveViewFromTabGroup_--_1_--dtor$3.c)
 *     ??1?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804358B4 (--1-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180120DE0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(__int64 a1)
{
  __int64 *v1; // rdi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
