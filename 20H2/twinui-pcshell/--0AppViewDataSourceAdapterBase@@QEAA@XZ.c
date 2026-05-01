/*
 * XREFs of ??0AppViewDataSourceAdapterBase@@QEAA@XZ @ 0x18033A874
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18033A5F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppVi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@@Z @ 0x180266FB0 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=12
AppViewDataSourceAdapterBase *__fastcall AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase(
        AppViewDataSourceAdapterBase *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  *(_QWORD *)this = &AppViewDataSourceAdapterBase::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapterBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 8;
  *((_QWORD *)this + 16) = 0LL;
  v2 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v2 = v3;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,void *>>>();
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
