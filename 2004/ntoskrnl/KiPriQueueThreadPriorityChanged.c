/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x14034CE84
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402FB40C (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1402FC8C4 (KiActivateWaiterPriQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 */

void __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r9
  __int64 v6; // r10
  int v8; // edx
  __int64 v9; // rcx
  bool v10; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    goto LABEL_2;
  v8 = v4 & 0x100;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  *(_DWORD *)(a2 + 540) = v8 | (unsigned __int8)v2;
  if ( !v5 )
  {
LABEL_2:
    KiReleaseThreadLockSafe(a2);
  }
  else
  {
    v10 = !_interlockedbittestandset(a1, 7u);
    KiReleaseThreadLockSafe(a2);
    if ( v10 )
      KiActivateWaiterPriQueue((ULONG_PTR)a1);
    else
      KiActivateWaiterQueueWithNoLocks(a2, (unsigned __int64)a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      KiProcessThreadWaitList((__int64)CurrentPrcb, 1LL, 0LL, 0LL);
  }
}
