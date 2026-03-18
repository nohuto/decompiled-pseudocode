/*
 * XREFs of ExpAddTagForBigPages @ 0x140214C50
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // r12
  int v9; // esi
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
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rdx
  int v29; // ebx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  void *v35; // rcx
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  void *v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  _DWORD *v59; // r8
  int v60; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v63; // [rsp+68h] [rbp+10h]
  __int64 v64; // [rsp+70h] [rbp+18h]

  v64 = a3;
  v63 = a2;
  v6 = 0;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = a4 & 0x20;
  P = 0LL;
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
            v37 = v14[6];
            v14[6] = v37 + 1;
            if ( v37 == -1 )
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
          v32 = CurrentPrcb->SchedulerAssist;
          if ( v32 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v38 = v32[6] - 1;
              v32[6] = v38;
              if ( !v38 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
        }
      }
      if ( v9 )
      {
        v31 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
        v16 = *(_QWORD *)(v31 + 824);
        v17 = (volatile signed __int32 *)(v31 + 792);
        v18 = *(_QWORD *)(v31 + 832);
      }
      else
      {
        v16 = PoolBigPageTable;
        v17 = &ExpPoolBigEntriesInUse;
        v18 = PoolBigPageTableSize;
      }
      if ( v16 && *v17 != v18 )
      {
        v19 = v16 + 32LL * ((unsigned int)v11 & ((_DWORD)v18 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v19 & 1) != 0 )
          {
            v20 = *(_QWORD *)v19;
            if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)v19, a1, *(_QWORD *)v19) )
              break;
          }
          v26 = v19 + 32;
          ++v6;
          v27 = v19 + 32 < v16 + 32 * v18;
          v19 = v16;
          if ( v27 )
            v19 = v26;
          if ( v19 == v16 + 32LL * ((unsigned int)v11 & ((_DWORD)v18 - 1)) )
            goto LABEL_25;
        }
        v21 = a5;
        *(_DWORD *)(v19 + 8) = v63;
        *(_BYTE *)(v19 + 12) = a6;
        v22 = v64;
        *(_DWORD *)(v19 + 12) = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((a4 & 0xFFF | (v21 << 12)) << 8);
        *(_QWORD *)(v19 + 16) = v22;
        if ( (a4 & 8) != 0 )
          *(_QWORD *)(v19 + 24) = a1 ^ ExpPoolQuotaCookie;
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
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v57 = v24[6] - 1;
              v24[6] = v57;
              if ( !v57 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          if ( !KiIrqlFlags )
            goto LABEL_20;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_20;
          v58 = KeGetCurrentIrql();
          if ( v58 > 0xFu )
            goto LABEL_20;
          if ( CurrentIrql > 0xFu )
            goto LABEL_20;
          if ( v58 < 2u )
            goto LABEL_20;
          v54 = KeGetCurrentPrcb();
          v59 = v54->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v43 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( !v43 )
            goto LABEL_20;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
          {
            ExpResizeBigPageTable(a4, v33, &P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&ExpLargePoolTableLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = v50->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v43 = (v52 & v51[5]) == 0;
                  v51[5] &= v52;
                  if ( v43 )
                    KiRemoveSystemWorkPriorityKick(v50);
                }
              }
            }
            __writecr8(CurrentIrql);
            v34 = P;
            if ( P )
            {
              do
              {
                v35 = v34;
                v34 = (_QWORD *)*v34;
                ExFreePoolWithTag(v35, 0);
              }
              while ( v34 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
          if ( !KiIrqlFlags
            || (KiIrqlFlags & 1) == 0
            || (v53 = KeGetCurrentIrql(), v53 > 0xFu)
            || CurrentIrql > 0xFu
            || v53 < 2u
            || (v54 = KeGetCurrentPrcb(),
                v55 = v54->SchedulerAssist,
                v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
                v43 = (v56 & v55[5]) == 0,
                v55[5] &= v56,
                !v43) )
          {
LABEL_20:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        KiRemoveSystemWorkPriorityKick(v54);
        goto LABEL_20;
      }
LABEL_25:
      if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v43 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v43 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v29 = ExpResizeBigPageTable(a4, v28, &P);
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
          v43 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v29 )
      break;
    v30 = P;
    if ( P )
    {
      do
      {
        v48 = v30;
        v30 = (_QWORD *)*v30;
        ExFreePoolWithTag(v48, 0);
      }
      while ( v30 );
      P = 0LL;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
