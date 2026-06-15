/*
 * XREFs of ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180062D20
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061E9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180062E6C (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x180063090 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18006317C (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180100940 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

__int64 __fastcall CMonitorManager::InitializeRegistryWatcher(CMonitorManager *this)
{
  HKEY *phkResult; // rsi
  unsigned int v2; // edi
  HKEY v3; // r14
  int v5; // edx
  LSTATUS v6; // ebx
  int v7; // r8d
  int v8; // r9d
  struct wil::details::registry_watcher_state *v9; // rdx
  wil::details *v10; // rcx
  DWORD LastError; // ebx
  _QWORD v13[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v15[15]; // [rsp+48h] [rbp-A0h] BYREF

  phkResult = (HKEY *)((char *)this + 368);
  v2 = 0;
  v3 = (HKEY)*((_QWORD *)this + 46);
  if ( v3 )
  {
    LastError = GetLastError();
    RegCloseKey(v3);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  v6 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
         0,
         0xF003Fu,
         phkResult);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, 0LL);
    }
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
    else
      return (unsigned int)v6;
  }
  else
  {
    v15[1] = this;
    v15[0] = off_180149E38;
    v13[0] = 0LL;
    v15[13] = v15;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (unsigned int)v13,
      v5,
      v7,
      v8,
      (__int64)v14);
    if ( (_QWORD *)((char *)this + 360) == v13 )
    {
      v10 = (wil::details *)v13[0];
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        (char *)this + 360,
        v13[0]);
      v10 = 0LL;
    }
    if ( v10 )
      wil::details::delete_registry_watcher_state(v10, v9);
    wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(v14);
    if ( !*((_QWORD *)this + 45) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
      }
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
