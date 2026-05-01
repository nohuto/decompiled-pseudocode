/*
 * XREFs of ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18026E340
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18027D420 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007C198 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800ACD80 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1800ACECC (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180280564 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180281D18 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 *     ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x180283E04 (-ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::EvaluateViewGroupingAndManagement(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3,
        int *a4)
{
  __int64 result; // rax
  int v8; // eax
  const char *v9; // r9
  bool v10; // bl
  struct IApplicationView *v11; // rdx
  HWND WindowForView; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  HWND v16; // rax
  struct Windows::Foundation::Collections::IPropertySet *v17[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v22; // [rsp+B0h] [rbp+8h]
  __int64 (__fastcall ***v23)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+B8h] [rbp+10h] BYREF
  struct IUnknown *v24; // [rsp+C0h] [rbp+18h] BYREF
  struct IServiceProvider *v25; // [rsp+C8h] [rbp+20h] BYREF

  v24 = a3;
  v23 = a2;
  *a4 = 0;
  TabViewManagerTraceLogging::WatchCurrentThread(v18, "TabViewManager_EvaluateViewGroupingAndManagement");
  if ( !*((_BYTE *)this + 1292) )
  {
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v18);
    return 0LL;
  }
  try
  {
    v8 = ((__int64 (*)(void))(*a2)[51])();
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1144LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    if ( !v22 )
    {
      if ( v20 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
      wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v18);
      return 0LL;
    }
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(&v25, &v24);
    (**a2)((ApplicationViewHelpers *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, (__int64 *)v17);
    v10 = v17[0] != 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v17);
    if ( !v10 )
    {
      wil::com_query<IWin32ApplicationView,IApplicationView * &>((__int64)v17, &v23);
      TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
        (struct IServiceProvider *)(((unsigned __int64)this - 80) & -(__int64)(this != (TabViewManager *)136)),
        v25,
        v17[0],
        *((struct IWin32ApplicationView **)this + 132),
        v17[0]);
      *a4 = 1;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v17);
      goto LABEL_23;
    }
    if ( TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
           (struct IServiceProvider *)(((unsigned __int64)this - 80) & -(__int64)(this != (TabViewManager *)136)),
           v25,
           0LL,
           *((struct IWin32ApplicationView **)this + 132),
           v17[0])
      && TabAppPolicySettings::ViewUsesCustomTabsWhenLaunchedIntoNewGroup((struct IApplicationView *)a2) )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v11);
      SetPropW(WindowForView, L"WindowHasAppManagedTabs", HANDLE_FLAG_INHERIT);
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _QWORD))(*a2)[52])(
              a2,
              0LL);
      v14 = retaddr;
      if ( v13 < 0 )
      {
        v15 = 1167LL;
LABEL_19:
        wil::details::in1diag3::_Log_Hr(
          v14,
          (void *)v15,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
      }
    }
    else
    {
      v16 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v11);
      if ( !GetPropW(v16, L"WindowHasAppManagedTabs") )
      {
        *a4 = 1;
        goto LABEL_23;
      }
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), _QWORD))(*a2)[52])(
              a2,
              0LL);
      v14 = retaddr;
      if ( v13 < 0 )
      {
        v15 = 1173LL;
        goto LABEL_19;
      }
    }
    *a4 = 0;
LABEL_23:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4AB,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
