/*
 * XREFs of MmGetControlAreaPartition @ 0x140223AD0
 * Callers:
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x1402229D0 (CcChargeDirtyPages.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x140345D80 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14035D980 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSectionsForPartition @ 0x1404E6D64 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR *v6; // rbx
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v10; // rcx
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  unsigned __int32 v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // rax
  _DWORD *v19; // r9
  int v20; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v22; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C780, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = 0;
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v4[6];
        v4[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&dword_140C4C780, 0x1Fu) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[6] - 1;
          v10[6] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v22 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C780, CurrentIrql);
    }
    v5 = (unsigned int)dword_140C4C780;
    if ( (dword_140C4C780 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
        {
          v15 = _InterlockedCompareExchange(&dword_140C4C780, v5 | 0x40000000, v5);
          v14 = (_DWORD)v5 == v15;
          v5 = v15;
          if ( !v14 )
            continue;
        }
        KeYieldProcessorEx(&v22, v5);
        v5 = (unsigned int)dword_140C4C780;
      }
      while ( (v5 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( *(_QWORD *)a1 )
    v6 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v6 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C780, retaddr);
  else
    dword_140C4C780 = 0;
  v7 = KeGetCurrentPrcb();
  v8 = v7->SchedulerAssist;
  if ( v8 )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v16 = v8[6] - 1;
      v8[6] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6[22];
}
