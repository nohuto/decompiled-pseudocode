/*
 * XREFs of ?DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z @ 0x18045C8B4
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045DEF4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18025411C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x180268D64 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 */

void __fastcall ExeDataCache::DeleteCachedExeData(ExeDataCache *this, unsigned __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 **v5; // r10
  __int64 *v6; // rbx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 1,
    &v7,
    &v8);
  if ( v7 != *v5 )
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           v5,
           (__int64)v7,
           v3,
           v4);
    std::wstring::_Tidy_deallocate(v6 + 10);
    std::wstring::_Tidy_deallocate(v6 + 6);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x70);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
}
