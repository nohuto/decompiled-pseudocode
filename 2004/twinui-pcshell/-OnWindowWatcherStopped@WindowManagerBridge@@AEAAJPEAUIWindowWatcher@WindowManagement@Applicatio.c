/*
 * XREFs of ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802D8080
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f52240dad271c0812b624b082a346308___ @ 0x1802D5D10 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f52240dad271c0812b624b082a346308.c)
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802D999C (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped();
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f52240dad271c0812b624b082a346308___(
         v6,
         CurrentThreadId,
         &v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
