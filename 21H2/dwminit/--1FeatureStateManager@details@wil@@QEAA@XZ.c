/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180005A78
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18000E030 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007244 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  DWORD LastError; // eax
  DWORD v3; // ebx
  DWORD v4; // eax
  DWORD v5; // ebx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  void *v10; // rsi
  HANDLE v11; // rax
  void *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall *v14)(PTP_TIMER); // [rsp+48h] [rbp+28h] BYREF

  *(_BYTE *)this = 0;
  if ( *((_QWORD *)this + 6) )
  {
    v13 = *((_QWORD *)this + 6);
    LastError = GetLastError();
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    v3 = LastError;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
    SetLastError(v3);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v13 = *((_QWORD *)this + 7);
    v4 = GetLastError();
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    v5 = v4;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
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
  if ( *((_QWORD *)this + 30) )
  {
    v13 = *((_QWORD *)this + 30);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnsubscribeProcessWideUsageFlush;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  v8 = (void *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( *((_QWORD *)this + 20) )
  {
    v13 = *((_QWORD *)this + 20);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnregisterWilFeatureConfigurationChange;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  if ( *((_QWORD *)this + 19) )
  {
    v13 = *((_QWORD *)this + 19);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnsubscribeWilWnf;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  if ( *((_QWORD *)this + 18) )
  {
    v13 = *((_QWORD *)this + 18);
    v14 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::UnsubscribeWilWnf;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  v10 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v10 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( *((_QWORD *)this + 7) )
  {
    v13 = *((_QWORD *)this + 7);
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  if ( *((_QWORD *)this + 6) )
  {
    v13 = *((_QWORD *)this + 6);
    v14 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v14, &v13);
  }
  v12 = (void *)*((_QWORD *)this + 2);
  if ( v12 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v12);
}
