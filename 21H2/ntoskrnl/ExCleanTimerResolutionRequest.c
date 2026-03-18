/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x14025D2C4
 * Callers:
 *     PspExitProcess @ 0x1407DB734 (PspExitProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetTimerResolution @ 0x14041EEC0 (ZwSetTimerResolution.c)
 *     PoDiagFreeUsermodeStack @ 0x1406EA338 (PoDiagFreeUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x1407D6CBC (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 KernelWaitTime; // rax
  _KPROCESS **UserWaitTime; // r8
  unsigned __int64 LastRebalanceQpc; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution((unsigned int)KeMaximumIncrement, 0LL, &v12);
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
  LastRebalanceQpc = Process[1].LastRebalanceQpc;
  Process[1].LastRebalanceQpc = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( LastRebalanceQpc )
    return PoDiagFreeUsermodeStack(LastRebalanceQpc);
  return result;
}
