/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18004B070
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18004A854 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004A9B4 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18004A9CC (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18004AD10 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004B204 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800806F0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180080ACC (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct wil::details::registry_watcher_state *v5; // rdx
  wil::details *v6; // rcx
  void *v7; // rdx
  wil::details *v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v11[15]; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v13[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  int v14; // [rsp+C8h] [rbp-38h]
  GUID v15; // [rsp+D0h] [rbp-30h]

  v12 = 416;
  memset_0(v13, 0, 0x19CuLL);
  v14 = 0;
  v15 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  CM_Register_Notification(&v12, this, &_lambda_d10d8a4b96f47c58ecefc665244380ef_::_lambda_invoker_cdecl_, this + 5);
  v9[0] = 0LL;
  v11[0] = &wistd::__function::__func<_lambda_890942bf62097d6c778291458fa4014d_,void (enum wil::RegistryChangeKind)>::`vftable';
  v11[1] = this;
  v11[13] = v11;
  wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
    (__int64)v9,
    v2,
    v3,
    v4,
    (__int64)v10);
  if ( this + 4 == v9 )
  {
    v6 = v9[0];
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      this + 4,
      v9[0]);
    v6 = 0LL;
  }
  if ( v6 )
    wil::details::delete_registry_watcher_state(v6, v5);
  wistd::function<void (int const &)>::~function<void (int const &)>((__int64)v10);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v7);
  return 0LL;
}
