/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___ @ 0x18025D2FC
 * Callers:
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x180261D88 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _DWORD *v7; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    v6 = v7;
    v7[4] = *a4;
    *(_QWORD *)v7 = off_1804AC308;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
