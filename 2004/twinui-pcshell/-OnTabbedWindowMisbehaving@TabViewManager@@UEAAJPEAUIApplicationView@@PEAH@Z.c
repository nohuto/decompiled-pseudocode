/*
 * XREFs of ?OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180274510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bf3070c3e93852458baa0b42ac380439___ @ 0x1802652A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_bf3070c3e93852458baa0b42ac380439___.c)
 *     ??$_Eqrange@PEAUIApplicationView@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@V12@@1@AEBQEAUIApplicationView@@@Z @ 0x180267A60 (--$_Eqrange@PEAUIApplicationView@@@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_.c)
 *     ??$distance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@@std@@YA_JV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@0@0@Z @ 0x18026892C (--$distance@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@UIShel.c)
 */

__int64 __fastcall TabViewManager::OnTabbedWindowMisbehaving(
        unsigned __int64 this,
        struct IApplicationView *a2,
        int *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // r8
  __int64 *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationView *v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v19 = a2;
  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(this + 1296);
  AcquireSRWLockShared((PSRWLOCK)(this + 1296));
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Eqrange<IApplicationView *>(
    (__int64 *)(this + 1144),
    v14,
    (unsigned __int64 *)&v19);
  if ( (unsigned __int64)std::distance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>>>>(
                           *(__int64 *)v14,
                           v15,
                           v7) <= 1 )
  {
    if ( v6 )
      ReleaseSRWLockShared(v6);
    v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
           &v20,
           (__int64)a2);
    v10 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v18,
            this & -(__int64)(this != 136));
    *(_QWORD *)v14 = this - 136;
    v11 = *v10;
    *v10 = 0LL;
    v15 = v11;
    v12 = *v9;
    *v9 = 0LL;
    v16[0] = v12;
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_bf3070c3e93852458baa0b42ac380439___(v12, v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    if ( v13 >= 0 )
    {
      *a3 = 1;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F4,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  else
  {
    *a3 = 0;
    if ( v6 )
      ReleaseSRWLockShared(v6);
    return 0LL;
  }
}
