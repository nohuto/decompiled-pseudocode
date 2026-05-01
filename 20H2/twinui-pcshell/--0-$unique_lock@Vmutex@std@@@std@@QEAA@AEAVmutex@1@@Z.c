/*
 * XREFs of ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x180323EEC
 * Callers:
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180326E34 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 *     ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ @ 0x180327F20 (-_Wait@_Task_impl_base@details@Concurrency@@QEAA-AW4task_group_status@3@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_lock<std::mutex>::unique_lock<std::mutex>(__int64 a1, struct _Mtx_internal_imp_t *a2)
{
  int v3; // eax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  v3 = _Mtx_lock(a2);
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  *(_BYTE *)(a1 + 8) = 1;
  return a1;
}
