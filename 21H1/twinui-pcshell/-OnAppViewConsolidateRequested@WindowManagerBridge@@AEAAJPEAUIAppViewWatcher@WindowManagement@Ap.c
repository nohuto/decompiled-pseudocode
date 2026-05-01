/*
 * XREFs of ?OnAppViewConsolidateRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewRequestEventArgs@3456@@Z @ 0x1802B6200
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ce7ef44c0291b8ed2bd5e211c05dae1e___ @ 0x1802B3F94 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ce7ef44c0291b8ed2bd5e211c05dae1e.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewConsolidateRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ce7ef44c0291b8ed2bd5e211c05dae1e___(
           v4,
           CurrentThreadId,
           &v6);
}
