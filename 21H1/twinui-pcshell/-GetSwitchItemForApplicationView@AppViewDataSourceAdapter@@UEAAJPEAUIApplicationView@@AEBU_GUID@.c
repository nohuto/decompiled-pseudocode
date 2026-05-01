/*
 * XREFs of ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18031B850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18024189C (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18031B154 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18031B1D4 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::GetSwitchItemForApplicationView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v8)(_QWORD, const struct _GUID *, void **); // rbx
  __int64 v9; // rcx
  __int64 *ItemForTab; // rax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  AppViewDataSourceAdapterBase::FindItemForView((__int64)this - 184, &v18, (__int64)a2);
  try
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))v18;
    if ( !v18 && *((_DWORD *)this + 36) == 2 )
    {
      v9 = *((_QWORD *)this - 13);
      v17 &= v18;
      (*(void (__fastcall **)(__int64, struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)v9 + 56LL))(
        v9,
        a2,
        &v17);
      if ( v17 )
      {
        wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
          (__int64)&v14,
          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v17);
        ItemForTab = AppViewDataSourceAdapter::FindItemForTab((__int64)this - 192, v15, v14);
        v8 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*ItemForTab;
        *ItemForTab = 0LL;
        v18 = (__int64)v8;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    }
    if ( !v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        196LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)0x8002802BLL);
    v11 = (**v8)(v8, a3, a4);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC8,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v12);
  }
  return result;
}
