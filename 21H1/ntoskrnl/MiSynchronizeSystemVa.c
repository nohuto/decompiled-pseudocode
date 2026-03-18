/*
 * XREFs of MiSynchronizeSystemVa @ 0x14022B050
 * Callers:
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPageTableStillExists @ 0x14031E1A4 (MiPageTableStillExists.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 v8; // rbx
  char v9; // al
  unsigned __int8 v10; // al
  LONG *v11; // rdi
  unsigned __int8 v12; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v14; // rcx
  signed __int32 v15; // ett
  unsigned __int8 CurrentIrql; // r10
  __int64 v17; // r14
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int64 v23; // rdi
  __int64 SystemCacheReverseMap; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 AnyMultiplexedVm; // rax
  _DWORD *v31; // rcx
  __int64 valid; // rax
  LONG *SharedVm; // rdi
  KIRQL v34; // al
  _DWORD *SchedulerAssist; // r9
  _DWORD *v36; // r9
  int v37; // eax
  int v38; // eax
  __int64 v39; // [rsp+20h] [rbp-58h] BYREF
  __int128 v40; // [rsp+28h] [rbp-50h] BYREF
  __int128 v41; // [rsp+38h] [rbp-40h]
  int v42; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  v42 = 0;
  v40 = 0LL;
  v41 = 0LL;
  if ( !a3 )
    return 0LL;
  v8 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  v9 = *(_BYTE *)(v8 + 37);
  *(_QWORD *)(v8 + 24) = a1;
  if ( a4 )
  {
    *(_BYTE *)(v8 + 37) = v9 | 1;
    SharedVm = MiGetSharedVm(a1);
    v34 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    *(_BYTE *)(v8 + 36) = v34;
    MiFillPteHierarchy(a2, &v40);
    if ( (unsigned int)MiPageTableStillExists(&v40, &v42) )
    {
      if ( v42 )
      {
        if ( (*(_DWORD *)(v8 + 4) & 4) == 0 )
          goto LABEL_55;
        *(_DWORD *)(v8 + 16) = v42;
      }
LABEL_18:
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        return 1LL;
      if ( *(_DWORD *)(v8 + 48) == 3 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
LABEL_27:
        *(_QWORD *)(v8 + 24) = AnyMultiplexedVm;
        return 1LL;
      }
      SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, v20, v22);
      if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
      {
        v28 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2, v26, v27) + 24);
        v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v28 & 1) == 0 )
          v29 = v28;
        AnyMultiplexedVm = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v29 + 60LL) & 0x3FF)) + 7232LL;
        goto LABEL_27;
      }
    }
  }
  else
  {
    *(_BYTE *)(v8 + 37) = v9 & 0xFE;
    v10 = *(_BYTE *)(a1 + 184) & 7;
    if ( v10 >= 6u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
    }
    else
    {
      if ( v10 == 2 )
        v11 = &dword_140C4F6C0;
      else
        v11 = (LONG *)(a1 + 192);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        v36[5] |= (-1 << (v12 + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, v12);
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
        _m_prefetchw(v11);
        v15 = *v11 & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(v11, v15 + 1, v15) )
        {
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v38 = v31[6] - 1;
              v31[6] = v38;
              if ( !v38 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v11, v12);
        }
      }
      if ( v11[1] )
        _InterlockedExchange(v11 + 1, 0);
      CurrentIrql = v12;
    }
    *(_BYTE *)(v8 + 36) = CurrentIrql;
    v39 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = MiFastLockLeafPageTable(a1, a2, 0);
    v20 = v19;
    v21 = a2 >> 9;
    v22 = 0x7FFFFFFFF8LL;
    if ( v19 )
    {
      *(_QWORD *)&v40 = (v21 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v40 + 1) = (((unsigned __int64)v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v41 = ((*((_QWORD *)&v40 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v41 + 1) = (((unsigned __int64)v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = *((_QWORD *)&v40 + v19);
      v18 = *((_QWORD *)&v40 + v19 - 1);
      v39 = v18;
    }
    v23 = (v21 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v17 )
    {
      valid = MiLockLowestValidPageTable(a1, v23, &v39);
      v18 = v39;
      v17 = valid;
    }
    *(_QWORD *)(v8 + 40) = v17;
    if ( v18 == v23 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v8 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v18) & 0x81) == 0x81 )
    {
      do
      {
        v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v5;
      }
      while ( v23 != v18 );
      *(_DWORD *)(v8 + 16) = v5;
      return 1LL;
    }
  }
LABEL_55:
  MiUnlockSystemVa(v8);
  return 0LL;
}
