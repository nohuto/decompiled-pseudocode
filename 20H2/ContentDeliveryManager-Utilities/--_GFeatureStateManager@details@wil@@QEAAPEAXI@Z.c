/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180017320
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800D8790 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180009760 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z @ 0x1800097D4 (-UnregisterWilFeatureConfigurationChange@details@wil@@YAXPEAX@Z.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000BB98 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016A18 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180017740 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v4; // rsi
  DWORD v5; // ebx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  void *v10; // rsi
  HANDLE v11; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v12; // rdx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v13; // rcx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  wil::details *v16; // rcx
  struct _TP_TIMER *v17; // rcx
  struct _TP_TIMER *v18; // rcx
  char *v19; // rcx

  *(_BYTE *)this = 0;
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
    SetLastError(v5);
  }
  *((_QWORD *)this + 7) = 0LL;
  v6 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = (void *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v10 = (void *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v13 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 12);
  if ( v13 )
    wil::details::UnsubscribeProcessWideUsageFlush(v13, v12);
  v14 = (wil::details *)*((_QWORD *)this + 11);
  if ( v14 )
    wil::details::UnregisterWilFeatureConfigurationChange(v14, v12);
  v15 = (wil::details *)*((_QWORD *)this + 10);
  if ( v15 )
    wil::details::UnsubscribeWilWnf(v15, (struct __WIL__WNF_USER_SUBSCRIPTION *)v12);
  v16 = (wil::details *)*((_QWORD *)this + 9);
  if ( v16 )
    wil::details::UnsubscribeWilWnf(v16, (struct __WIL__WNF_USER_SUBSCRIPTION *)v12);
  v17 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v17 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v17);
  v18 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v18 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v18);
  v19 = (char *)*((_QWORD *)this + 2);
  if ( v19 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v19);
  return this;
}
