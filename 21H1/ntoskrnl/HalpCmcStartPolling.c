/*
 * XREFs of HalpCmcStartPolling @ 0x1403C1A08
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14038A030 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x14099C0F8 (HalpInitializeCmc.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1403A4BA4 (HalpIsPartitionCpuManager.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpCmcStartPolling(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  int v3; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  if ( !HalpIsMicrosoftCompatibleHvLoaded(a1) || (LOBYTE(v3) = HalpIsPartitionCpuManager(v1), (_BYTE)v3) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
    if ( HalpCmcPollingInitialized )
    {
      if ( (HalpMcaPollForCmc
         || HalpCmciRevertToPolledMode
         || HalpCmcPollingStartDeferred != (_BYTE)HalpCmciRevertToPolledMode)
        && !HalpCmcPollingStarted )
      {
        KiSetTimerEx(
          (__int64)&qword_140C50778,
          -10000LL * (unsigned int)HalpCmcContext,
          HalpCmcContext,
          0,
          (__int64)&dword_140C507B8);
        HalpCmcPollingStarted = 1;
      }
    }
    else
    {
      HalpCmcPollingStartDeferred = 1;
    }
    KxReleaseSpinLock(&HalpCmcFallbackLock);
    LOBYTE(v3) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v3) = KeGetCurrentIrql();
        if ( (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v3 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v6 = (v3 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v3;
          if ( v6 )
            LOBYTE(v3) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  return v3;
}
