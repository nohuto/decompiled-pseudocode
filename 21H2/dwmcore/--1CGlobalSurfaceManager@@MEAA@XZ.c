/*
 * XREFs of ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180194B78
 * Callers:
 *     ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x180194EE0 (--_GCGlobalSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x18003DDE0 (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801939A4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180194CC4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CGlobalSurfaceManager::~CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  HANDLE *v1; // rbx
  __int64 v3; // rcx

  *((_BYTE *)this + 496) = 1;
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  v1 = (HANDLE *)((char *)this + 440);
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 15) = &CGlobalSurfaceManager::`vftable';
  if ( (unsigned __int64)(*((_QWORD *)this + 55) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(*((HANDLE *)this + 56));
    WaitForSingleObject(*v1, 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      0LL);
  }
  v3 = *((_QWORD *)this + 59);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(v3, *((_QWORD *)this + 60));
    std::_Deallocate<16,0>(*((void **)this + 59), 8 * ((__int64)(*((_QWORD *)this + 61) - *((_QWORD *)this + 59)) >> 3));
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 58);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 57);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 56);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v1);
  CMmcssTask::UnloadRuntime((CGlobalSurfaceManager *)((char *)this + 352));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  CLegacySurfaceManager::~CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 120));
  CSurfaceManager::~CSurfaceManager(this);
}
