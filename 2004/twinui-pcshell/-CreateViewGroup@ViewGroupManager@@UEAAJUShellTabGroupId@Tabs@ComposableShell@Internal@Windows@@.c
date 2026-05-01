/*
 * XREFs of ?CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@6@PEAPEAUIViewGroup@@@Z @ 0x18028BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180075E60.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Insert_nohint@AEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@X@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@_NAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x18028B634 (--$_Insert_nohint@AEAV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAU-$_Tre.c)
 *     ??$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@7@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VViewGroup@@@WRL@Microsoft@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@AEAPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@9@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x180295ABC (--$MakeOrThrow@VViewGroup@@AEAPEAUIWindowGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabVi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewGroupManager::CreateViewGroup(RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 Ptr; // rax
  PVOID v9; // r8
  __int64 *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  RTL_SRWLOCK *v16; // rbx
  __int64 *v17; // rsi
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // eax
  const char *v23; // r9
  __int64 result; // rax
  __int64 v25; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int64 v28; // [rsp+58h] [rbp-50h] BYREF
  RTL_SRWLOCK *v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h] BYREF
  PVOID v31; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a4 = 0LL;
  Ptr = (__int64)a1[14].Ptr;
  v9 = a1[12].Ptr;
  v10 = (__int64 *)a1[11].Ptr;
  v11 = (RTL_SRWLOCK *)a1[10].Ptr;
  v25 = Ptr;
  v30 = a3;
  v31 = v9;
  v26 = v10;
  v29 = v11;
  try
  {
    v12 = (__int64 *)wil::MakeOrThrow<ViewGroup,IWindowGroupManager * &,ITitleBarController * &,ITabViewManager * &,Windows::Foundation::IEventHandler<IInspectable *> * &,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const &,IPrivilegedForegroundOperations * &>(
                       (unsigned int)&v28,
                       (unsigned int)&v29,
                       (unsigned int)&v26,
                       (unsigned int)&v31,
                       (__int64)&v30,
                       a2,
                       (__int64)&v25);
    v13 = *v12;
    *v12 = 0LL;
    if ( v13 )
    {
      v14 = v13 + 8;
      v25 = v14;
    }
    else
    {
      v25 = 0LL;
      v14 = 0LL;
    }
    v15 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v15);
    }
    v16 = a1 + 31;
    AcquireSRWLockExclusive(a1 + 31);
    v29 = a1 + 31;
    v17 = (__int64 *)&a1[32];
    v18 = *v17;
    v26 = v17;
    v27 = 0LL;
    v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    v25 = 0LL;
    v19[4] = v14;
    *v19 = v18;
    v19[1] = v18;
    v19[2] = v18;
    *((_WORD *)v19 + 12) = 0;
    std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Insert_nohint<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> &,std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *> *>(
      v17,
      (__int64)&v26,
      v20,
      v19 + 4,
      v19);
    if ( !(_BYTE)v27 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        153LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        v21);
    v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v26[4])(
            v26[4],
            &GUID_c8708459_3036_4e1a_8555_56cebb48e438,
            a4);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v22);
    if ( v16 )
      ReleaseSRWLockExclusive(v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v23);
  }
  return result;
}
