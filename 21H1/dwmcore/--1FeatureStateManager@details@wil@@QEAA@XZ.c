/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800E05E0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F0CC0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180086AD0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180087DB0 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800CDB10 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D1DA0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800D2D30 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E0B00 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800E0C60 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x1800E0CB0 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E0D10 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180150094 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1801503D4 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180151294 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180151DB8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  void *v5; // rdx
  wil::details *v6; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v7; // rdx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v8; // rcx
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  wil::details *v11; // rcx
  struct _TP_TIMER *v12; // rcx
  struct _TP_TIMER *v13; // rcx
  HANDLE *v14; // rbx
  void *v15; // rdx
  bool v16; // zf
  HANDLE ProcessHeap; // rax
  wil::details *v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h]
  void (__fastcall *v20)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // [rsp+C0h] [rbp+40h]
  __int64 v21; // [rsp+C8h] [rbp+48h]

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v4 )
    wil::details::FreeProcessHeap(v4, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (wil::details *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v8 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    v19 = *((_QWORD *)this + 12);
    v20 = wil::details::UnsubscribeProcessWideUsageFlush;
    wil::details::UnsubscribeProcessWideUsageFlush(v8, v7);
  }
  v9 = (wil::details *)*((_QWORD *)this + 11);
  if ( v9 )
  {
    v21 = *((_QWORD *)this + 11);
    wil::details::UnregisterWilFeatureConfigurationChange(v9, v7);
  }
  v10 = (wil::details *)*((_QWORD *)this + 10);
  if ( v10 )
    wil::details::UnsubscribeWilWnf(v10, (struct __WIL__WNF_USER_SUBSCRIPTION *)v7);
  v11 = (wil::details *)*((_QWORD *)this + 9);
  if ( v11 )
    wil::details::UnsubscribeWilWnf(v11, (struct __WIL__WNF_USER_SUBSCRIPTION *)v7);
  v12 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v12 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
  v13 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v13 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v13);
  v14 = (HANDLE *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    if ( wil::ProcessShutdownInProgress(v13) )
    {
      v16 = (*(_DWORD *)v14)-- == 1;
      if ( v16 )
        wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(v14 + 4));
    }
    else
    {
      wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
        v14 + 1,
        &v18);
      v16 = (*(_DWORD *)v14)-- == 1;
      if ( v16 )
      {
        wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(v14 + 2));
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>::reset(
          &v18,
          0LL);
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(v14);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v14);
      }
      if ( v18 )
        wil::details::ReleaseMutex(v18, v15);
    }
  }
}
