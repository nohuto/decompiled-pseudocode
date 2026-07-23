/*
 * XREFs of MmGetControlAreaPartition @ 0x14033D860
 * Callers:
 *     CcGetFlushedValidData @ 0x140237F40 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14024E5A0 (CcNotifyOfMappedWriteComplete.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MmGetControlAreaPartition(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  ULONG_PTR *v9; // rbx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  unsigned __int32 v17; // eax
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rax
  _DWORD *v21; // r9
  int v22; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v24; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C9C0, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v7[6];
        v7[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&dword_140C4C9C0, 0x1Fu) )
    {
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v13[6] - 1;
          v13[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v24 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)&dword_140C4C9C0, CurrentIrql, a3, SchedulerAssist);
    }
    v8 = (unsigned int)dword_140C4C9C0;
    if ( (dword_140C4C9C0 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v8 & 0x40000000) == 0 )
        {
          v17 = _InterlockedCompareExchange(&dword_140C4C9C0, v8 | 0x40000000, v8);
          v16 = (_DWORD)v8 == v17;
          v8 = v17;
          if ( !v16 )
            continue;
        }
        KeYieldProcessorEx(&v24, v8, a3, (__int64)SchedulerAssist);
        v8 = (unsigned int)dword_140C4C9C0;
      }
      while ( (v8 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( *(_QWORD *)a1 )
    v9 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  else
    v9 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C9C0, retaddr);
  else
    dword_140C4C9C0 = 0;
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v18 = v11[6] - 1;
      v11[6] = v18;
      if ( !v18 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
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
        v16 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v9[22];
}
