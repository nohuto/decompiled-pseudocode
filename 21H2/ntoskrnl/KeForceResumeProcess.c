/*
 * XREFs of KeForceResumeProcess @ 0x14029BDA8
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14052C570 (MiReAcquireCommitFailWorker.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1406B1000 (PspTerminateProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x14023A5D0 (KiThawSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v5; // r14
  __int64 result; // rax
  _QWORD *i; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

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
      KiThawSingleThread((__int64)CurrentPrcb, (__int64)(i - 95), 1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
