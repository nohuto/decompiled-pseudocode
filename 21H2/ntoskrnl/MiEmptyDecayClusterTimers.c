/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1403122F0
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x140232260 (MiRelinkDecayClusterTimer.c)
 *     MiRelinkStandbyPage @ 0x1402323E8 (MiRelinkStandbyPage.c)
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiUnlinkDecayClusterTimer @ 0x1402E4DD4 (MiUnlinkDecayClusterTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 v3; // cl
  int v4; // edi
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  volatile LONG *v8; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  volatile signed __int64 *v16; // rdi
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  _DWORD *v24; // r9
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // al
  _DWORD *v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v49; // [rsp+68h] [rbp+10h]

  result = KiQueryUnbiasedInterruptTime();
  if ( result - *(_QWORD *)(a1 + 15592) < 0x989680 )
    return result;
  *(_QWORD *)(a1 + 15592) = result;
  v4 = ((*(_BYTE *)(a1 + 15584) & 3) + 1) & 3;
  v5 = a1 + 8LL * (*(_DWORD *)(a1 + 15584) & 3);
  v49 = v4;
  if ( *(_QWORD *)(v5 + 15552) >> 33 == 0x7FFFFFFFLL )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v3) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
    if ( *(_QWORD *)(v5 + 15552) >> 33 == 0x7FFFFFFFLL )
    {
      *(_DWORD *)(a1 + 15584) = v4;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v29 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      goto LABEL_7;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  v8 = (volatile LONG *)(a1 + 3352);
  while ( 1 )
  {
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
    {
      v24 = KeGetCurrentPrcb()->SchedulerAssist;
      v24[5] |= (-1 << (v9 + 1)) & 4;
    }
    ExAcquireSpinLockSharedAtDpcLevel(v8);
    LOBYTE(v12) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C52D00, v12);
    else
      ExpAcquireSpinLockExclusive(&dword_140C52D00, 0xFFu, v10, v11);
    v13 = *(_QWORD *)(v5 + 15552) >> 33;
    if ( v13 == 0x7FFFFFFF )
      break;
    v14 = v13 + qword_140C52CE0;
    v15 = 48 * (v13 + qword_140C52CE0) - 0x220000000000LL;
    v16 = (volatile signed __int64 *)(v15 + 24);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C52D00, retaddr);
      else
        dword_140C52D00 = 0;
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      if ( v18 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v38 = v18[6] - 1;
          v18[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      v19 = *(_QWORD *)(v15 + 16);
      if ( qword_140C50780 && (v19 & 0x10) == 0 )
        v19 &= ~qword_140C50780;
      v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
      if ( v20 != v14 )
      {
        v15 = 48 * v20 - 0x220000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(v8);
          _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
          v21 = *(_BYTE *)(v15 + 35) & 7;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v8, retaddr);
          }
          else
          {
            _InterlockedAnd(v8, 0xBFFFFFFF);
            _InterlockedDecrement(v8);
          }
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v39 = v23[6] - 1;
              v23[6] = v39;
              if ( !v39 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          MiRelinkStandbyPage(v15, v21);
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && v9 <= 0xFu && v40 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v41 = v35->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v29 = (v42 & v41[5]) == 0;
              v41[5] &= v42;
              if ( v29 )
                goto LABEL_79;
            }
          }
        }
        goto LABEL_32;
      }
      if ( (*(_BYTE *)(v15 + 35) & 8) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
        MiUnlinkDecayClusterTimer(v15);
        MiRelinkDecayClusterTimer(v15, v49);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      }
      else
      {
        MiDecayNodeNowEmpty(v14);
      }
      ExReleaseSpinLockSharedFromDpcLevel(v8);
      goto LABEL_30;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    ExReleaseSpinLockSharedFromDpcLevel(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && v9 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v29 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v29 )
LABEL_79:
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
LABEL_32:
    __writecr8(v9);
  }
  *(_DWORD *)(a1 + 15584) = v49;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
  ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && v9 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v29 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
  }
  result = v9;
LABEL_7:
  __writecr8(result);
  return result;
}
