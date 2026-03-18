/*
 * XREFs of KeForceResumeProcess @ 0x14035EB3C
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140580D80 (MiReAcquireCommitFailWorker.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiThawSingleThread @ 0x14035F27C (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al
  _DWORD *SchedulerAssist; // r9
  _QWORD *i; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

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
      LOBYTE(v7) = 1;
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6, v7);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
