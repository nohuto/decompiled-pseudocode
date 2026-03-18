/*
 * XREFs of KeThawMultiProcess @ 0x14025753C
 * Callers:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiThawSingleThread @ 0x14035F27C (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeThawMultiProcess(__int64 a1, char a2, unsigned int a3)
{
  _QWORD **v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r12
  volatile LONG *v8; // r15
  __int64 v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  char v13; // r11
  _QWORD *i; // rax
  _DWORD *SchedulerAssist; // r9
  _QWORD *j; // rbx
  unsigned int v18; // ecx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf

  v4 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 888);
  v11 = v10 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
    v12 = KiQueryUnbiasedInterruptTime(0LL) - *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(a1 + 632) & 0x10) != 0 )
    {
      for ( i = *v4; i != v4; i = (_QWORD *)*i )
        *(i - 64) += v12;
    }
    if ( !v13 )
    {
LABEL_8:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
      }
      __writecr8(CurrentIrql);
      return v11;
    }
  }
  else
  {
    v18 = 0;
    if ( a3 <= v10 )
      v18 = v10 - a3;
    *(_DWORD *)(a1 + 888) = v18;
    if ( !v10 || v18 )
      goto LABEL_8;
  }
  for ( j = *v4; j != v4; j = (_QWORD *)*j )
  {
    LOBYTE(v9) = a2;
    KiThawSingleThread(CurrentPrcb, j - 95, 0LL, v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v11;
}
