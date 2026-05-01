/*
 * XREFs of _lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator() @ 0x18026AFE0
 * Callers:
 *     ??$Adapt@V_lambda_63ca7660cb234c8b240bf7ee4218e0e9_@@@?$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@@SAHPEAUHWND__@@_J@Z @ 0x180263750 (--$Adapt@V_lambda_63ca7660cb234c8b240bf7ee4218e0e9_@@@-$CCLambdaAdapter@P6AHPEAUHWND__@@_J@Z$01@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18006EAC0 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180268C1C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18027D884 (-TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManag.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18027DD10 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x18027F080 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator()(__int64 a1, HWND a2)
{
  __int64 *v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  Windows::Internal::ShellHelpers::PropertySetHelper *v9; // rdi
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  struct _GUID v18; // xmm6
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  unsigned int v23; // [rsp+30h] [rbp-78h] BYREF
  struct IApplicationView *v24; // [rsp+38h] [rbp-70h] BYREF
  unsigned int *v25; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+48h] [rbp-60h] BYREF
  struct _GUID v27; // [rsp+50h] [rbp-58h] BYREF
  HSTRING_HEADER v28; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !(unsigned int)GetWindowGroupId(a2, &v23) || !v23 )
    return 1LL;
  TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::TabViewManager_RecoverTabForWindow(
    *(TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups **)a1,
    a2);
  (*(void (__fastcall **)(_QWORD, _QWORD, HWND, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 392LL) + 40LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 392LL),
    0LL,
    a2,
    0LL,
    0);
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(*(_QWORD *)(a1 + 8) + 1192LL, &v24, a2);
  if ( !v24 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    return 1LL;
  }
  v5 = *(__int64 **)(a1 + 16);
  v6 = (__int64 *)*v5;
  v7 = (__int64 *)*v5;
  v8 = *(__int64 **)(*v5 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_12;
  do
  {
    if ( *((_DWORD *)v8 + 7) >= v23 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v6 || v23 < *((_DWORD *)v7 + 7) )
LABEL_12:
    v7 = (__int64 *)*v5;
  v9 = *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 24);
  if ( v7 == v6 )
  {
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v28,
            (const WCHAR **)off_1804D0308,
            (unsigned int)v6);
    v27 = (struct _GUID)xmmword_180536610;
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
            v9,
            (HSTRING)v10[1].Reserved.Reserved1,
            v11,
            (__int128 *)&v27);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3566LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    v13 = TabViewManager::TryAssignViewToTabGroup(
            (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
            v24,
            **(struct IUnknown ***)(a1 + 24),
            &v27);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3569LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v13);
    v14 = *(_QWORD *)&v27.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v27.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v14 = *(_QWORD *)v27.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v14 )
    {
      v15 = *(__int64 **)(a1 + 16);
      v16 = *v15;
      v17 = *(_QWORD *)(*v15 + 8);
      if ( *(_BYTE *)(v17 + 25) )
        goto LABEL_28;
      do
      {
        if ( *(_DWORD *)(v17 + 28) >= v23 )
        {
          v16 = v17;
          v17 = *(_QWORD *)v17;
        }
        else
        {
          v17 = *(_QWORD *)(v17 + 16);
        }
      }
      while ( !*(_BYTE *)(v17 + 25) );
      if ( v16 == *v15 || v23 < *(_DWORD *)(v16 + 28) )
      {
LABEL_28:
        v25 = &v23;
        v16 = *std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                 v15,
                 &v26,
                 (__int64 *)v16,
                 (__int64)v15,
                 &v25);
      }
      *(struct _GUID *)(v16 + 32) = v27;
    }
LABEL_30:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    return 1LL;
  }
  v18 = (struct _GUID)*((_OWORD *)v7 + 2);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v28,
          (const WCHAR **)off_1804D0308,
          (unsigned int)v6);
  v27 = v18;
  v21 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
          v9,
          (HSTRING)v19[1].Reserved.Reserved1,
          v20,
          (__int128 *)&v27);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3580LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v21);
  v22 = TabViewManager::TryAssignViewToTabGroup(
          (TabViewManager *)(*(_QWORD *)(a1 + 8) + 136LL),
          v24,
          **(struct IUnknown ***)(a1 + 24),
          &v27);
  if ( v22 >= 0 )
    goto LABEL_30;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    3583LL,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v22);
  return 1LL;
}
