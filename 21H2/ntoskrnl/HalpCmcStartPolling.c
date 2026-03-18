/*
 * XREFs of HalpCmcStartPolling @ 0x1403D2BFC
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x1403990C0 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140A5AA64 (HalpInitializeCmc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char HalpCmcStartPolling()
{
  unsigned __int64 v0; // rbx
  int v1; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  if ( !HalpIsMicrosoftCompatibleHvLoaded() || (LOBYTE(v1) = HalpIsPartitionCpuManager(), (_BYTE)v1) )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc
         || HalpCmciRevertToPolledMode
         || HalpCmcPollingStartDeferred != (_BYTE)HalpCmciRevertToPolledMode)
        && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (unsigned __int64)&qword_140C549C8,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140C54A08);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    KxReleaseSpinLock(&HalpCmcFallbackLock);
    LOBYTE(v1) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v4 = (v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v1;
          if ( v4 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
  }
  return v1;
}
