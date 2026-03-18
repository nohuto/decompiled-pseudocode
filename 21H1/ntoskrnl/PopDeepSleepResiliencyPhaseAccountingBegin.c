/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140571D80
 * Callers:
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14035CF90 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PdcPoCurrentPdcPhase @ 0x140570930 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopDeepSleepResiliencyPhaseAccountingBegin(unsigned int a1, char a2)
{
  KIRQL v2; // di
  bool i; // zf
  int v6; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  }
  dword_140C2317C |= a1;
  for ( i = !_BitScanForward((unsigned int *)&v6, a1); !i; i = !_BitScanForward((unsigned int *)&v6, a1) )
  {
    a1 &= a1 - 1;
    if ( ((1 << v6) & PopDeepSleepDisengageReasonMask) != 0 )
      stru_140C23180[v6] = KeQueryPerformanceCounter(0LL);
  }
  if ( !a2 )
  {
    KxReleaseSpinLock(&PopCsResiliencyStatsLock);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v2 + 1));
          i = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( i )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
