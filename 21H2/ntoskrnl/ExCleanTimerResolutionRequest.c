/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x14036CF94
 * Callers:
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetTimerResolution @ 0x1403FDBC0 (ZwSetTimerResolution.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     PoDiagFreeUsermodeStack @ 0x1407335F4 (PoDiagFreeUsermodeStack.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 KernelWaitTime; // rax
  _KPROCESS **UserWaitTime; // r8
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  ULONG ActualTime; // [rsp+30h] [rbp+8h] BYREF

  ActualTime = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualTime);
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  KernelWaitTime = Process[1].KernelWaitTime;
  UserWaitTime = (_KPROCESS **)Process[1].UserWaitTime;
  if ( *(_KPROCESS **)(KernelWaitTime + 8) != (_KPROCESS *)&Process[1].KernelWaitTime
    || *UserWaitTime != (_KPROCESS *)&Process[1].KernelWaitTime )
  {
    __fastfail(3u);
  }
  *UserWaitTime = (_KPROCESS *)KernelWaitTime;
  *(_QWORD *)(KernelWaitTime + 8) = UserWaitTime;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  v5 = Process[1].EndPadding[0];
  Process[1].EndPadding[0] = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( v5 )
    return PoDiagFreeUsermodeStack(v5);
  return result;
}
