/*
 * XREFs of ?TrySetViewForeground@TabViewManager@@AEAA_NPEAUIApplicationView@@PEA_N@Z @ 0x18027F720
 * Callers:
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802778F4 (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TabViewManager::TrySetViewForeground(TabViewManager *this, struct IUnknown *a2, bool *a3)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, struct IUnknown **); // rbx
  bool v7; // bl
  struct IUnknown *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 = *((_QWORD *)this + 149);
  v6 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v5 + 72LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v9);
  v6(v5, &v9);
  if ( v9 && (unsigned int)SHIsSameObject(v9, a2) )
  {
    v7 = 1;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 170) + 64LL))(*((_QWORD *)this + 170), a2);
    v7 = ((int (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].AddRef)(a2) >= 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v7;
}
