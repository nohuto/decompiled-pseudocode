/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180017790
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800DACE0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180009810 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x180009884 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000BC48 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016E88 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017D7C (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct _TP_TIMER *v3; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v5; // rsi
  DWORD v6; // ebx
  void *v7; // rbx
  HANDLE ProcessHeap; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v9; // rcx
  void *v10; // rsi
  HANDLE v11; // rax
  void *v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  void *v16; // rsi
  HANDLE v17; // rax
  struct _TP_TIMER *v18; // rcx
  struct _TP_TIMER *v19; // rcx
  char *v20; // rcx

  *(_BYTE *)this = 0;
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 6) = 0LL;
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
    SetLastError(v6);
  }
  *((_QWORD *)this + 7) = 0LL;
  v7 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v7 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
  }
  v9 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 30);
  if ( v9 )
    wil::details::UnsubscribeProcessWideUsageFlush(v9, a2);
  v10 = (void *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13 = (wil::details *)*((_QWORD *)this + 20);
  if ( v13 )
    wil::details::UnregisterWilFeatureConfigurationChange(v13, v12);
  v14 = (wil::details *)*((_QWORD *)this + 19);
  if ( v14 )
    wil::details::UnsubscribeWilWnf(v14, (struct __WIL__WNF_USER_SUBSCRIPTION *)v12);
  v15 = (wil::details *)*((_QWORD *)this + 18);
  if ( v15 )
    wil::details::UnsubscribeWilWnf(v15, (struct __WIL__WNF_USER_SUBSCRIPTION *)v12);
  v16 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v16 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v16);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v18 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v18 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v18);
  v19 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v19 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v19);
  v20 = (char *)*((_QWORD *)this + 2);
  if ( v20 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v20);
  return this;
}
