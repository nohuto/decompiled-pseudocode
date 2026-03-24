/*
 * XREFs of ExpAddTagForBigPages @ 0x14033BDC0
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140295320 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402955CC (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpResizeBigPageTable @ 0x1403752C0 (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140381B10 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5DBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // r14d
  unsigned int v7; // r13d
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
  int v34; // eax
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  int v42; // eax
  void *v43; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  int v52; // eax
  unsigned __int8 v53; // al
  _DWORD *v54; // r8
  int v55; // eax
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v60; // [rsp+80h] [rbp+18h]

  v60 = a3;
  v6 = 0;
  v7 = (unsigned int)SchedulerAssist;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = (unsigned __int8)SchedulerAssist & 0x20;
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
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
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
            v34 = v14[6];
            v14[6] = v34 + 1;
            if ( v34 == -1 )
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
              v35 = v33[6] - 1;
              v33[6] = v35;
              if ( !v35 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)&ExpLargePoolTableLock, CurrentIrql, a3, SchedulerAssist);
        }
        v10 = a1;
      }
      if ( v9 )
      {
        v16 = *(_QWORD *)(qword_140C4DDE0 + 992);
        v17 = (volatile signed __int32 *)(qword_140C4DDE0 + 864);
        v18 = *(_QWORD *)(qword_140C4DDE0 + 1000);
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
        v21 = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((v7 & 0xFFF | (a5 << 12)) << 8);
        *(_QWORD *)(v19 + 16) = v60;
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
              v52 = v23[6] - 1;
              v23[6] = v52;
              if ( !v52 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          if ( !KiIrqlFlags )
            goto LABEL_19;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_19;
          v53 = KeGetCurrentIrql();
          if ( v53 > 0xFu )
            goto LABEL_19;
          if ( CurrentIrql > 0xFu )
            goto LABEL_19;
          if ( v53 < 2u )
            goto LABEL_19;
          v49 = KeGetCurrentPrcb();
          v54 = v49->SchedulerAssist;
          v55 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v39 = (v55 & v54[5]) == 0;
          v54[5] &= v55;
          if ( !v39 )
            goto LABEL_19;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(v7, v30, P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v44 = KeGetCurrentIrql();
                if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
                {
                  v45 = KeGetCurrentPrcb();
                  v46 = v45->SchedulerAssist;
                  v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v39 = (v47 & v46[5]) == 0;
                  v46[5] &= v47;
                  if ( v39 )
                    KiRemoveSystemWorkPriorityKick(v45);
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
            || (v48 = KeGetCurrentIrql(), v48 > 0xFu)
            || CurrentIrql > 0xFu
            || v48 < 2u
            || (v49 = KeGetCurrentPrcb(),
                v50 = v49->SchedulerAssist,
                v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
                v39 = (v51 & v50[5]) == 0,
                v50[5] &= v51,
                !v39) )
          {
LABEL_19:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        KiRemoveSystemWorkPriorityKick(v49);
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
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            SchedulerAssist = v37->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v39 = (v38 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v38 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v28 = ExpResizeBigPageTable(v7, v27, P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          SchedulerAssist = v41->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v39 = (v42 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v42 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v41);
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
        v43 = v29;
        v29 = (_QWORD *)*v29;
        ExFreePoolWithTag(v43, 0);
      }
      while ( v29 );
      P[0] = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
