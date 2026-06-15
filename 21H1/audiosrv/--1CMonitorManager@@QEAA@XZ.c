/*
 * XREFs of ??1CMonitorManager@@QEAA@XZ @ 0x1800FA6F0
 * Callers:
 *     ?Release@CMonitorManager@@UEAAKXZ @ 0x1800FF630 (-Release@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180062A1C (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x1800FF7D0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1801001B8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180100880 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall CMonitorManager::~CMonitorManager(CMonitorManager *this)
{
  struct wil::details::registry_watcher_state *v2; // rdx
  HKEY v3; // rcx
  wil::details *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CMonitorManager::`vftable';
  CMonitorManager::Shutdown(this);
  *((_DWORD *)this + 14) = 4;
  v3 = (HKEY)*((_QWORD *)this + 46);
  if ( v3 )
    RegCloseKey(v3);
  v4 = (wil::details *)*((_QWORD *)this + 45);
  if ( v4 )
    wil::details::delete_registry_watcher_state(v4, v2);
  v5 = (void *)*((_QWORD *)this + 43);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = (void *)*((_QWORD *)this + 42);
  if ( v6 )
    CoTaskMemFree(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll((char *)this + 200);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll((__int64)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
