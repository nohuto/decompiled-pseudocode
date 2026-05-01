/*
 * XREFs of ?OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18031CA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18031A4B0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x18031E494 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewAppIdChanged(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(AppViewDataSourceAdapterBase *))(*(_QWORD *)this + 80LL))(this) )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 104LL))(
        this,
        a2,
        a3);
    }
    else
    {
      AppViewDataSourceAdapterBase::AddItemForView(this, &v6, a2);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
    }
  }
  else if ( a3 )
  {
    AppViewDataSourceAdapterBase::RemoveItemForView(this, a2);
  }
}
