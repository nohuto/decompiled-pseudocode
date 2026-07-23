/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14026F8A0
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x14026F788 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14026F810 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577A50 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140577B6C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 */

__int64 __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  char *v13; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v8 = dword_140C2377C;
  v9 = v7;
  if ( (v6 & dword_140C2377C) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = &PopCsResiliencyStats[8 * v2];
    if ( !a2 )
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 240] += PerformanceCounter.QuadPart - *((_QWORD *)v13 + 20);
      PerformanceCounter.QuadPart = 0LL;
    }
    *((LARGE_INTEGER *)v13 + 20) = PerformanceCounter;
    if ( a2 )
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (v8 & 0x40) != 0 )
          v5 = 64;
        if ( (v8 & 0x3BC) != 0 )
          v5 |= 0x3BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x3BC) != 0 )
      {
        v5 = 956;
      }
      LOBYTE(v12.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingEnd)(v5, (LARGE_INTEGER)v12.QuadPart);
    }
    else
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (PopDeepSleepDisengageReasonMask & 3) == 0 )
        {
          v3 = 64;
          if ( (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
            v3 = 1020;
        }
      }
      else if ( (v6 & 0x40) != 0 && (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
      {
        v3 = 956;
      }
      LOBYTE(v12.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingBegin)(v3, (LARGE_INTEGER)v12.QuadPart);
    }
  }
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
