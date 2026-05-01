/*
 * XREFs of ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1802D88BC
 * Callers:
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1802D8458 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_04d74f0b1867aa1b237282343d8f99ac___ @ 0x1802D4BC0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_04d74f0b1867aa1b237282343d8f99ac.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802D937C (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_04d74f0b1867aa1b237282343d8f99ac___(
         v4,
         CurrentThreadId,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return v6;
  }
}
