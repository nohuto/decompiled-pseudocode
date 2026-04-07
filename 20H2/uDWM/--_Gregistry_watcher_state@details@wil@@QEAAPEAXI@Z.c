/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180080284
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18004AACC (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x18008055C (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180080ACC (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180040488 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004A9B4 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800802F0 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v3; // rcx
  HKEY v4; // rcx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 17);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 16,
    a2);
  v4 = (HKEY)*((_QWORD *)this + 15);
  if ( v4 )
    RegCloseKey(v4);
  wistd::function<void (int const &)>::~function<void (int const &)>((__int64)this);
  (*(void (__fastcall **)(WPF::HeapBase *, wil::details::registry_watcher_state *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
