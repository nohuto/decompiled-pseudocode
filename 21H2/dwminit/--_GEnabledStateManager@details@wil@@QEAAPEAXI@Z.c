/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800079E4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18000E090 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800069AC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

wil::details::EnabledStateManager *__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(
        wil::details::EnabledStateManager *this)
{
  DWORD LastError; // eax
  DWORD v3; // ebx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall *v10)(PTP_TIMER); // [rsp+50h] [rbp+30h] BYREF

  *(_BYTE *)this = 0;
  if ( *((_QWORD *)this + 2) )
  {
    v9 = *((_QWORD *)this + 2);
    LastError = GetLastError();
    v10 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    v3 = LastError;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v10, &v9);
    SetLastError(v3);
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  v4 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v6 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v9 = *((_QWORD *)this + 5);
    v10 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::WilApi_UnsubscribeFeatureStateChangeNotification;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v10, &v9);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = (__int64 (__fastcall *)(PTP_TIMER))wil::details::WilApi_UnsubscribeFeatureStateChangeNotification;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v10, &v9);
  }
  if ( *((_QWORD *)this + 2) )
  {
    v9 = *((_QWORD *)this + 2);
    v10 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v10, &v9);
  }
  return this;
}
