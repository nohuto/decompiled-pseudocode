/*
 * XREFs of CmpCompleteLazyWrite @ 0x140249230
 * Callers:
 *     CmpLazyWriteWorker @ 0x1403C04D0 (CmpLazyWriteWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r15
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  ULONG v9; // r14d
  __int64 result; // rax
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r11
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v6 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v7 = 1LL;
  if ( a2 )
  {
    v8 = *a2;
  }
  else
  {
    LOBYTE(v5) = 1;
    v8 = 20000000LL;
    v9 = 1000;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v5);
    if ( UnbiasedInterruptTime >= v12 )
      goto LABEL_5;
    v13 = v12 - UnbiasedInterruptTime;
    if ( v13 <= 0x1312D00 )
      goto LABEL_5;
    v8 = v13;
  }
  v9 = *(_DWORD *)&Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v8, 0, v9, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v7;
  KxReleaseSpinLock(p_QuadPart);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
