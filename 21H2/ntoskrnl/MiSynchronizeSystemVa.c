/*
 * XREFs of MiSynchronizeSystemVa @ 0x14031C990
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPageTableStillExists @ 0x14024C7A4 (MiPageTableStillExists.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
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
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  char *AnyMultiplexedVm; // rax
  _DWORD *v27; // rcx
  unsigned __int64 valid; // rax
  LONG *SharedVm; // rdi
  KIRQL v30; // al
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int128 v35; // [rsp+28h] [rbp-50h] BYREF
  __int128 v36; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  v37 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( !(_DWORD)a3 )
    return 0LL;
  v8 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  v9 = *(_BYTE *)(v8 + 37);
  *(_QWORD *)(v8 + 24) = a1;
  if ( (_DWORD)a4 )
  {
    *(_BYTE *)(v8 + 37) = v9 | 1;
    SharedVm = MiGetSharedVm(a1);
    v30 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    *(_BYTE *)(v8 + 36) = v30;
    MiFillPteHierarchy(a2, (unsigned __int64 *)&v35);
    if ( (unsigned int)MiPageTableStillExists((__int64)&v35, &v37) )
    {
      if ( v37 )
      {
        if ( (*(_DWORD *)(v8 + 4) & 4) == 0 )
          goto LABEL_55;
        *(_DWORD *)(v8 + 16) = v37;
      }
LABEL_18:
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        return 1LL;
      if ( *(_DWORD *)(v8 + 48) == 3 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
LABEL_27:
        *(_QWORD *)(v8 + 24) = AnyMultiplexedVm;
        return 1LL;
      }
      SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
      if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
      {
        v24 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 24);
        v25 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v24 & 1) == 0 )
          v25 = v24;
        AnyMultiplexedVm = (char *)(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v25 + 60LL) & 0x3FF))
                                  + 7232LL);
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
        v11 = &dword_140C4F7C0;
      else
        v11 = (LONG *)(a1 + 192);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        a4 = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (v12 + 1)) & 4u | a4[5];
        a4[5] = a3;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, v12, a3, a4);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v14[6];
            v14[6] = v32 + 1;
            if ( v32 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(v11);
        v15 = *v11 & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(v11, v15 + 1, v15) )
        {
          v27 = CurrentPrcb->SchedulerAssist;
          if ( v27 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v33 = v27[6] - 1;
              v27[6] = v33;
              if ( !v33 )
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
    v34 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = MiFastLockLeafPageTable(a1, a2, 0);
    v20 = a2 >> 9;
    if ( v19 )
    {
      *(_QWORD *)&v35 = (v20 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v35 + 1) = (((unsigned __int64)v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)&v36 = ((*((_QWORD *)&v35 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_QWORD *)&v36 + 1) = (((unsigned __int64)v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = *((_QWORD *)&v35 + v19);
      v18 = *((_QWORD *)&v35 + v19 - 1);
      v34 = v18;
    }
    v21 = (v20 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v17 )
    {
      valid = MiLockLowestValidPageTable(a1, v21, &v34);
      v18 = v34;
      v17 = valid;
    }
    *(_QWORD *)(v8 + 40) = v17;
    if ( v18 == v21 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v8 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v18) & 0x81) == 0x81 )
    {
      do
      {
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v5;
      }
      while ( v21 != v18 );
      *(_DWORD *)(v8 + 16) = v5;
      return 1LL;
    }
  }
LABEL_55:
  MiUnlockSystemVa(v8);
  return 0LL;
}
