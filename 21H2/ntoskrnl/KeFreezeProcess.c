/*
 * XREFs of KeFreezeProcess @ 0x14023A64C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 * Callees:
 *     KiFreezeSingleThread @ 0x14023A74C (KiFreezeSingleThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v9; // rsi
  _QWORD *i; // rbx
  _QWORD *v11; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // rax
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 888);
  v8 = v7 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime(0LL);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 888) = v7 + 1;
  }
  if ( v8 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  else
  {
    v9 = (_QWORD *)(a1 + 48);
    for ( i = *(_QWORD **)(a1 + 48); i != v9; i = (_QWORD *)*i )
    {
      v11 = i - 95;
      if ( a2 || (*((_DWORD *)v11 + 29) & 0x200000) == 0 )
        KiFreezeSingleThread(CurrentPrcb, v11);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
    return 0LL;
  }
}
