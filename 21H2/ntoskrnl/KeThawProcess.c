/*
 * XREFs of KeThawProcess @ 0x14023A474
 * Callers:
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x14023A5D0 (KiThawSingleThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeThawProcess(__int64 a1, char a2)
{
  _QWORD **v3; // rdi
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v6; // r13
  __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // ebp
  _QWORD *i; // rax
  _QWORD *j; // rbx
  _QWORD *v12; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp+8h]

  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = (volatile LONG *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 888);
  v9 = v8 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( v9 )
  {
    if ( a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
      v7 = KiQueryUnbiasedInterruptTime(0LL) - *(_QWORD *)(a1 + 72);
    }
    else
    {
      *(_DWORD *)(a1 + 888) = v8 - 1;
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 632) & 0x10) != 0 )
  {
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      *(i - 64) += v7;
  }
  if ( v9 == 1 )
  {
    for ( j = *v3; j != v3; j = (_QWORD *)*j )
    {
      v12 = j - 95;
      if ( a2 || (*((_DWORD *)v12 + 29) & 0x200000) == 0 )
        KiThawSingleThread(CurrentPrcb, v12, 0LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
    return 1LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v9;
  }
}
