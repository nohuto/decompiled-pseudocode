/*
 * XREFs of ExpWakePushLock @ 0x1402FC2F0
 * Callers:
 *     ExfReleasePushLockSharedEx @ 0x14020E460 (ExfReleasePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402FC270 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExpOptimizePushLockList @ 0x1402FDED4 (ExpOptimizePushLockList.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402FC6CC (KiAbApplyWakeupBoost.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v2; // r10d
  _QWORD *v3; // r8
  struct _KEVENT *v4; // rbx
  signed __int64 Blink; // rax
  bool v6; // zf
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v8; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD *v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax

  v2 = 1;
  while ( (a2 & 1) == 0 )
  {
LABEL_3:
    v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v4 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v4 )
    {
      do
      {
        v10 = v3;
        v3 = (_QWORD *)v3[3];
        v3[5] = v10;
        v4 = (struct _KEVENT *)v3[4];
      }
      while ( !v4 );
      if ( v3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v4;
    }
    if ( (v4[2].Header.SignalState & 1) != 0 )
    {
      Blink = (signed __int64)v4[1].Header.WaitListHead.Blink;
      if ( Blink )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
        v4[1].Header.WaitListHead.Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v2 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( v4[1].Header.WaitListHead.Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          LODWORD(Blink) = KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              Blink = (signed __int64)KeGetCurrentPrcb();
              *(_DWORD *)(*(_QWORD *)(Blink + 33976) + 20LL) |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
        }
        if ( !v2 )
        {
          Flink = v4[2].Header.WaitListHead.Flink;
          if ( Flink )
            LODWORD(Blink) = KiAbApplyWakeupBoost((unsigned int)KeGetCurrentThread()->Priority, Flink, 0LL);
        }
        do
        {
          v8 = v4[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v4[2].Header.SignalState, 1u) )
            LODWORD(Blink) = KeSetEvent(v4, 0, 0);
          v4 = (struct _KEVENT *)v8;
        }
        while ( v8 );
        if ( CurrentIrql != 2 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v11 = KeGetCurrentIrql();
              if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v6 = (v14 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v14;
                if ( v6 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          LODWORD(Blink) = CurrentIrql;
          __writecr8(CurrentIrql);
        }
        return Blink;
      }
    }
    Blink = _InterlockedCompareExchange64(a1, 0LL, a2);
    v6 = a2 == Blink;
    a2 = Blink;
    if ( v6 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    Blink = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v6 = a2 == Blink;
    a2 = Blink;
    if ( v6 )
      return Blink;
    if ( (Blink & 1) == 0 )
      goto LABEL_3;
  }
}
