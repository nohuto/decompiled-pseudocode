/*
 * XREFs of ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800B9C68
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B7904 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?UpdateTabsForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x1800B9C10 (-UpdateTabsForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWin.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800919B4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x1800B1018 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x1800B280C (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 *     ??$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@Z @ 0x1800B29D4 (--$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 *     ??$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@Z @ 0x1800B2E0C (--$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800B3B9C (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800B4898 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBAIXZ @ 0x1800B9558 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800B9588 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800B98CC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800B9954 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800BB534 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800BC05C (-lower_bound@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800BF2B8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180113EB8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180113EB8.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801183A8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(
        RTL_SRWLOCK *this,
        unsigned __int64 a2)
{
  RTL_SRWLOCK *v3; // r14
  bool v4; // bl
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  bool v7; // bl
  const char *v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp-88h] BYREF
  unsigned int *v13[2]; // [rsp+48h] [rbp-80h] BYREF
  char v14[16]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v15; // [rsp+68h] [rbp-60h] BYREF
  __int64 v16; // [rsp+78h] [rbp-50h]
  __int128 v17; // [rsp+80h] [rbp-48h] BYREF
  __int64 v18; // [rsp+90h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  PVOID v20; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+D8h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 *v23; // [rsp+E8h] [rbp+20h] BYREF

  v21 = a2;
  v3 = this + 75;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&this[75], &v22);
  std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::lower_bound(
    &this[76],
    &v20);
  v4 = v20 != this[77].Ptr;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v22);
  try
  {
    if ( !v4 && BYTE1(this[104].Ptr) )
    {
      v17 = 0LL;
      v18 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v12 = 0LL;
      LODWORD(v20) = v21;
      v13[0] = (unsigned int *)&v20;
      v13[1] = (unsigned int *)&v12;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_1901c9f891705b2d33e723e5fa102f44_ &>(
        v5,
        (__int64)&v23,
        v13);
      winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
        (winrt *)&v22,
        (__int64 *)&v23);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v23);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
      v6 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
             (__int64 *)&v22,
             v13);
      v7 = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(v6) == 0;
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)v13);
      if ( v7 )
      {
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v22);
        return;
      }
      wil::srwlock::lock_exclusive(v3, (RTL_SRWLOCK **)v13);
      v23 = 0LL;
      v9 = (*(unsigned int (__fastcall **)(unsigned __int64, PVOID, unsigned __int64 **))(*(_QWORD *)v22 + 112LL))(
             v22,
             this[102].Ptr,
             &v23);
      winrt::check_hresult(v9);
      v20 = 0LL;
      v10 = (*(__int64 (__fastcall **)(unsigned __int64, PVOID, PVOID *))(*(_QWORD *)v22 + 96LL))(
              v22,
              this[103].Ptr,
              &v20);
      winrt::check_hresult(v10);
      std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::_Try_emplace<unsigned __int64 const &,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory> &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel &,winrt::event_token &,winrt::event_token &>(
        (__int64)&this[76],
        (__int64)v14,
        (__int64 *)&v21,
        (__int64)&this[17],
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v20);
      v11 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
              &this[76],
              &v21);
      winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(v11, &v17, &v15);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        v21);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)v13);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        this,
        v21,
        &v17,
        (unsigned __int64 *)&v15);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v22);
      if ( (_QWORD)v15 )
        std::_Deallocate<16,0>((void *)v15, (const struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL));
      v5 = v17;
      if ( (_QWORD)v17 )
        std::_Deallocate<16,0>((void *)v17, (const struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    v22 = v21;
    v23 = &v22;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_ &>(
      v5,
      (__int64)&v20,
      &v23);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
      (__int64)&this[99],
      (__int64)this,
      (__int64)&v20);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v20);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA6,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v8);
  }
}
