/*
 * XREFs of KiIsThreadRankNonZero @ 0x140266BBC
 * Callers:
 *     KeQueryEffectiveBasePriorityThread @ 0x140266B8C (KeQueryEffectiveBasePriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x140385140 (KeQueryEffectivePriorityThread.c)
 *     KiInitializePriorityState @ 0x1403C1398 (KiInitializePriorityState.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int ThreadEffectiveRankNonZero; // ebx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    v9 = CurrentPrcb->ScbOffset + v8;
    if ( v9 )
    {
      if ( a2 )
      {
        ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v9, 0LL, 0, 0LL);
      }
      else
      {
        do
        {
          ThreadEffectiveRankNonZero = (*(unsigned __int8 *)(v9 + 112) >> 3) & 1;
          if ( ThreadEffectiveRankNonZero )
            break;
          v9 = *(_QWORD *)(v9 + 408);
        }
        while ( v9 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(CurrentIrql);
  }
  return ThreadEffectiveRankNonZero != 0;
}
