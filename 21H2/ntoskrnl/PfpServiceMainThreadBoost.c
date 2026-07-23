/*
 * XREFs of PfpServiceMainThreadBoost @ 0x14038D098
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x14099BB98 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  KIRQL v6; // al
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v2 = a2[1];
  v3 = 0;
  if ( *a2 )
  {
    *(_DWORD *)(v2 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v7 = v6;
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v8 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v8, 12);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 104));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 80) = v2 + 72;
    *(_QWORD *)(v2 + 72) = v2 + 72;
    *(_BYTE *)(v2 + 64) = 8;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_DWORD *)(v2 + 124) = 0;
    *(_WORD *)(v2 + 120) = 0;
    *(_QWORD *)(v2 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v2 = 275;
    *(_QWORD *)(v2 + 32) = v2;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v3;
}
