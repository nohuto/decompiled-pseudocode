/*
 * XREFs of CmpCompleteLazyWrite @ 0x140329210
 * Callers:
 *     CmpLazyWriteWorker @ 0x1403BF850 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  ULONG v8; // r14d
  __int64 result; // rax
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r11
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = 1LL;
  if ( a2 )
  {
    v7 = *a2;
  }
  else
  {
    v7 = 20000000LL;
    v8 = 1000;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime >= v11 )
      goto LABEL_5;
    v12 = v11 - UnbiasedInterruptTime;
    if ( v12 <= 0x1312D00 )
      goto LABEL_5;
    v7 = v12;
  }
  v8 = *(_DWORD *)&Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v7, 0, v8, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v6;
  KxReleaseSpinLock(p_QuadPart);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
