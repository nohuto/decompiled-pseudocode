/*
 * XREFs of KeForceResumeProcess @ 0x1402FCC94
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140526E60 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1406B3CF4 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x1406F0C08 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x140347C4C (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v5; // r14
  __int64 v6; // r8
  char result; // al
  _QWORD *i; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 888) + ((*(_DWORD *)(a1 + 632) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
    *(_DWORD *)(a1 + 888) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = v11->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
