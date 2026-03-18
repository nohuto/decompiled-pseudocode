/*
 * XREFs of KeFreezeProcess @ 0x1402FCEBC
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1406F0C08 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KiFreezeSingleThread @ 0x1402FCE5C (KiFreezeSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // esi
  _QWORD *v11; // rsi
  _QWORD *i; // rbx
  __int64 v13; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf

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
  v9 = *(_DWORD *)(a1 + 888);
  v10 = v9 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime();
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 888) = v9 + 1;
  }
  if ( v10 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v10;
  }
  else
  {
    v11 = (_QWORD *)(a1 + 48);
    for ( i = *(_QWORD **)(a1 + 48); i != v11; i = (_QWORD *)*i )
    {
      v13 = (__int64)(i - 95);
      if ( a2 || (*(_DWORD *)(v13 + 116) & 0x200000) == 0 )
        KiFreezeSingleThread((__int64)CurrentPrcb, v13, v7, v8);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
    return 0LL;
  }
}
