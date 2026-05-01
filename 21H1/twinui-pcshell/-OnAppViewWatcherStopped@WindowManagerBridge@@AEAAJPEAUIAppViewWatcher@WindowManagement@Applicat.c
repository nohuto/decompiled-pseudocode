/*
 * XREFs of ?OnAppViewWatcherStopped@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802B6360
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef0987d51b5229fc4d6deb91eeeb244___ @ 0x1802B3DB8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8ef0987d51b5229fc4d6deb91eeeb244.c)
 *     ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802B7D0C (-WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped();
  v4 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef0987d51b5229fc4d6deb91eeeb244___(
         v6,
         CurrentThreadId,
         &v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
