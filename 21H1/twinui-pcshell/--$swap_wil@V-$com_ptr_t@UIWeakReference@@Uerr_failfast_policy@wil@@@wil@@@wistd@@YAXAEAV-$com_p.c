/*
 * XREFs of ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x180263E64
 * Callers:
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026455C (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ??4?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026BF08 (--4-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@w.c)
 *     ??4?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180319F58 (--4-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180428258 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  v4 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *a2;
  v8 = 0LL;
  *a2 = v2;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
}
