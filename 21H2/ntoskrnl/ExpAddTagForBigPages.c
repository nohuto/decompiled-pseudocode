/*
 * XREFs of ExpAddTagForBigPages @ 0x140346B10
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14021728C (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140381660 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // r12
  int v9; // esi
  signed __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v14; // rcx
  int v15; // ett
  __int64 v16; // rdx
  volatile signed __int32 *v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  volatile signed __int64 v20; // rtt
  int v21; // r8d
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rdx
  int v28; // ebx
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rbx
  void *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  unsigned __int8 v42; // cl
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  void *v46; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // al
  _DWORD *v57; // r8
  int v58; // eax
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = a4 & 0x20;
  P[0] = 0LL;
  v10 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v8 ^ HIDWORD(v8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v14[6];
            v14[6] = v35 + 1;
            if ( v35 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(&ExpLargePoolTableLock);
        v15 = ExpLargePoolTableLock & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(
                      &ExpLargePoolTableLock,
                      (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                      ExpLargePoolTableLock & 0x7FFFFFFF) )
        {
          v33 = CurrentPrcb->SchedulerAssist;
          if ( v33 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v36 = v33[6] - 1;
              v33[6] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
        }
        v10 = a1;
      }
      if ( v9 )
      {
        v16 = *(_QWORD *)(qword_140C4DE20 + 992);
        v17 = (volatile signed __int32 *)(qword_140C4DE20 + 864);
        v18 = *(_QWORD *)(qword_140C4DE20 + 1000);
      }
      else
      {
        v16 = PoolBigPageTable;
        v17 = &ExpPoolBigEntriesInUse;
        v18 = PoolBigPageTableSize;
      }
      if ( v16 && *v17 != v18 )
      {
        v19 = v16 + 24LL * ((unsigned int)v11 & ((_DWORD)v18 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v19 & 1) != 0 )
          {
            v20 = *(_QWORD *)v19;
            if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)v19, v10, *(_QWORD *)v19) )
              break;
          }
          v25 = v19 + 24;
          ++v6;
          v26 = v19 + 24 < v16 + 24 * v18;
          v19 = v16;
          if ( v26 )
            v19 = v25;
          if ( v19 == v16 + 24LL * ((unsigned int)v11 & ((_DWORD)v18 - 1)) )
            goto LABEL_24;
        }
        *(_DWORD *)(v19 + 8) = a2;
        *(_BYTE *)(v19 + 12) = a6;
        v21 = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((a4 & 0xFFF | (a5 << 12)) << 8);
        *(_QWORD *)(v19 + 16) = a3;
        *(_DWORD *)(v19 + 12) = v21;
        _InterlockedIncrement(v17);
        if ( v6 < 0x10 || *v17 <= (unsigned int)(v18 >> 2) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v55 = v23[6] - 1;
              v23[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          if ( !KiIrqlFlags )
            goto LABEL_19;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_19;
          v56 = KeGetCurrentIrql();
          if ( v56 > 0xFu )
            goto LABEL_19;
          if ( CurrentIrql > 0xFu )
            goto LABEL_19;
          if ( v56 < 2u )
            goto LABEL_19;
          v52 = KeGetCurrentPrcb();
          v57 = v52->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v41 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( !v41 )
            goto LABEL_19;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(a4, v30, P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v47 = KeGetCurrentIrql();
                if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
                {
                  v48 = KeGetCurrentPrcb();
                  v49 = v48->SchedulerAssist;
                  v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v41 = (v50 & v49[5]) == 0;
                  v49[5] &= v50;
                  if ( v41 )
                    KiRemoveSystemWorkPriorityKick(v48);
                }
              }
            }
            __writecr8(CurrentIrql);
            v31 = P[0];
            if ( P[0] )
            {
              do
              {
                v32 = v31;
                v31 = (_QWORD *)*v31;
                ExFreePoolWithTag(v32, 0);
              }
              while ( v31 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
          if ( !KiIrqlFlags
            || (KiIrqlFlags & 1) == 0
            || (v51 = KeGetCurrentIrql(), v51 > 0xFu)
            || CurrentIrql > 0xFu
            || v51 < 2u
            || (v52 = KeGetCurrentPrcb(),
                v53 = v52->SchedulerAssist,
                v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
                v41 = (v54 & v53[5]) == 0,
                v53[5] &= v54,
                !v41) )
          {
LABEL_19:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        KiRemoveSystemWorkPriorityKick(v52);
        goto LABEL_19;
      }
LABEL_24:
      if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v41 = (v40 & v39[5]) == 0;
            v39[5] &= v40;
            if ( v41 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v28 = ExpResizeBigPageTable(a4, v27, P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v41 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v28 )
      break;
    v29 = P[0];
    if ( P[0] )
    {
      do
      {
        v46 = v29;
        v29 = (_QWORD *)*v29;
        ExFreePoolWithTag(v46, 0);
      }
      while ( v29 );
      P[0] = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
