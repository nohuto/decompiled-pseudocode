/*
 * XREFs of ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180327FB4
 * Callers:
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180322CC8 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ??1_Task_impl_base@details@Concurrency@@UEAA@XZ @ 0x180325088 (--1_Task_impl_base@details@Concurrency@@UEAA@XZ.c)
 *     ??1cancellation_token@Concurrency@@QEAA@XZ @ 0x180325158 (--1cancellation_token@Concurrency@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x1803251A0 (--1task_options@Concurrency@@QEAA@XZ.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x180327288 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180327754 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1803278F8 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 *     ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x180327C24 (-_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Concurrency::details::_RefCounter::_Release(Concurrency::details::_RefCounter *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(Concurrency::details::_RefCounter *))(*(_QWORD *)this + 8LL))(this);
  return v1;
}
