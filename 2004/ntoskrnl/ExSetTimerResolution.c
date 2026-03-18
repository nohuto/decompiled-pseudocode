/*
 * XREFs of ExSetTimerResolution @ 0x1405ACE30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerResolution @ 0x1402E1930 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F2E40 (PoTraceSystemTimerResolutionKernel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // ebp
  ULONG v6; // ebx
  KIRQL v7; // si
  int v8; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  KIRQL v15; // [rsp+48h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeTimeIncrement;
  v6 = 0;
  v15 = v4;
  v7 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      KeNonHrTimeIncrement = DesiredTime;
      v6 = DesiredTime;
      goto LABEL_16;
    }
  }
  else
  {
    v8 = ExpKernelResolutionCount;
    if ( ExpKernelResolutionCount )
    {
      --ExpKernelResolutionCount;
      if ( v8 == 1 )
      {
        KeNonHrTimeIncrement = KeMaximumIncrement;
LABEL_16:
        ExpKernelRequestedTimerResolution = v6;
        return ExpUpdateTimerResolution(SetResolution, v6, &v15);
      }
    }
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = v15;
        v12 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v5;
}
