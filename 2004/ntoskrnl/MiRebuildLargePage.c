/*
 * XREFs of MiRebuildLargePage @ 0x14054D238
 * Callers:
 *     MiRebuildLargePages @ 0x14038ACA0 (MiRebuildLargePages.c)
 *     MmBuildLargePages @ 0x1408D40D4 (MmBuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1408D82D4 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiNodeFreeZeroPages @ 0x14031E1A4 (MiNodeFreeZeroPages.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1403516F8 (MiDereferencePageRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F04D0 (MiConvertSmallPageRangeToLarge.c)
 *     MiLockPageAtDpc @ 0x14054A47C (MiLockPageAtDpc.c)
 *     MiGetNodeStandbyPageCount @ 0x14054B2B8 (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x14054C96C (MiFindRebuildCandidate.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v7; // rsi
  unsigned __int8 *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned int *v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // r10
  unsigned __int8 CurrentIrql; // si
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 inserted; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  struct _KPRCB *v33; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v35; // eax
  unsigned int v36; // r14d
  unsigned __int64 v37; // rdi
  unsigned int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 *v42; // r9
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int i; // r8d
  int v48; // r8d
  __int64 RebuildCandidate; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-41h]
  unsigned int *v52; // [rsp+70h] [rbp-39h]
  unsigned int v53; // [rsp+78h] [rbp-31h]
  __int64 v54; // [rsp+80h] [rbp-29h]
  ULONG_PTR v55; // [rsp+88h] [rbp-21h]
  __int128 v56; // [rsp+90h] [rbp-19h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-9h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-1h]
  unsigned __int8 *v59; // [rsp+B0h] [rbp+7h]
  unsigned int v60; // [rsp+110h] [rbp+67h]
  int v61; // [rsp+118h] [rbp+6Fh]
  unsigned int v62; // [rsp+120h] [rbp+77h]

  v62 = a3;
  RebuildCandidate = 0LL;
  v4 = a2;
  v5 = 0LL;
  v57 = 0LL;
  v7 = (unsigned int)MmNumberOfChannels;
  v8 = 0LL;
  v60 = MmNumberOfChannels;
  v9 = (unsigned int)a3;
  v53 = a2;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v51 = 0LL;
  v10 = MiReferencePageRuns(a1, 1u, a3, a4);
  v11 = BugCheckParameter3;
  v12 = MiLargePageSizes[v9];
  v13 = (unsigned int *)v10;
  v14 = 0;
  v52 = (unsigned int *)v10;
  v15 = *(_QWORD *)(a1 + 16) + 4544 * v4;
  v54 = v15;
  v55 = BugCheckParameter3;
  v61 = 0;
  if ( (unsigned int)v7 > 1 )
  {
    v8 = (unsigned __int8 *)(v15 + 4313);
    v14 = *(unsigned __int8 *)(v15 + 4313);
    v61 = v14;
  }
  v59 = &v8[v7];
  if ( v8 != &v8[v7] )
  {
    while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      RebuildCandidate = MiFindRebuildCandidate((unsigned __int16 *)a1, v4, v14, v12, v11, v13);
      if ( RebuildCandidate == -1 )
        goto LABEL_55;
      v16 = 1082130432;
      if ( v12 == 512 )
      {
        v16 = 1115684864;
      }
      else if ( v12 == 16 )
      {
        v16 = 1098907648;
      }
      if ( (int)MiFindContiguousPages(
                  a1,
                  RebuildCandidate,
                  RebuildCandidate + v12 - 1,
                  v12,
                  v12,
                  1u,
                  v4,
                  v61,
                  v16,
                  0LL,
                  &RebuildCandidate) >= 0 )
      {
        if ( v12 >= 0x200 )
          MiUpdateLargePageBitMap(a1, RebuildCandidate, v12, 0, 1);
        MiConvertSmallPageRangeToLarge(RebuildCandidate, v62, v17, v18);
        v22 = 48 * RebuildCandidate - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v19 = (-1LL << (CurrentIrql + 1)) & 4;
          v20 = (unsigned int)v19 | SchedulerAssist[5];
          SchedulerAssist[5] = v20;
        }
        MiLockPageAtDpc(v22, v19, v20, (__int64)SchedulerAssist);
        *(_QWORD *)&v56 = RebuildCandidate;
        *((_QWORD *)&v56 + 1) = 1LL;
        v57 = 2LL;
        inserted = MiInsertLargePageInNodeList((__int64)&v56, v24, v25, v26);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v30 = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        MiReturnCommit(a1, inserted);
        if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        {
          v33 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v33->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            do
            {
              if ( inserted + CachedResidentAvailable > 0x100 || inserted >= 0x80000 )
                break;
              v35 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v33->CachedResidentAvailable,
                      inserted + CachedResidentAvailable,
                      CachedResidentAvailable);
              v32 = (_DWORD)CachedResidentAvailable == v35;
              CachedResidentAvailable = v35;
              if ( v32 )
                goto LABEL_36;
            }
            while ( v35 != -1 );
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v33->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              inserted += (int)CachedResidentAvailable - 192;
            }
          }
        }
        if ( inserted )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), inserted);
LABEL_36:
        v5 += v12;
        v51 = v5;
        if ( v5 >= (unsigned __int64)a4 )
        {
LABEL_50:
          v13 = v52;
          break;
        }
      }
      v36 = MmNumberOfChannels;
      v37 = 0LL;
      v38 = 0;
      if ( MmNumberOfChannels )
      {
        v39 = v54;
        do
          v37 += MiNodeFreeZeroPages(v39, v38++, 0);
        while ( v38 < v36 );
        LODWORD(v4) = v53;
      }
      if ( v12 > 0x10 )
      {
        v40 = 0LL;
        v41 = v62 + 1;
        if ( (unsigned int)v41 <= 2 )
        {
          v42 = &MiLargePageSizes[v41];
          v43 = (_QWORD *)(v54 + 1072LL * (unsigned int)v41);
          v44 = (unsigned int)(3 - v41);
          do
          {
            v45 = *v43 + v43[1];
            v43 += 134;
            v46 = *v42++ * v45;
            v40 += v46;
            --v44;
          }
          while ( v44 );
        }
        v37 += v40;
      }
      LODWORD(v7) = v60;
      if ( v37 >= 0x1000 )
      {
        v5 = v51;
      }
      else
      {
        for ( i = 0; i < v60; i = v48 + 1 )
          v37 += MiGetNodeStandbyPageCount(a1, v4, i);
        v5 = v51;
        if ( v37 < (unsigned __int64)a4 - v51 + 0x8000 )
          goto LABEL_50;
      }
      if ( !RebuildCandidate )
      {
LABEL_55:
        ++v8;
        if ( (unsigned int)v7 <= 1 )
        {
          v14 = v61;
        }
        else
        {
          v14 = *v8;
          v61 = v14;
        }
        v13 = v52;
        v11 = v55;
        if ( v8 == v59 )
          break;
      }
      else
      {
        v14 = v61;
        v11 = RebuildCandidate - 1;
        v13 = v52;
        v55 = RebuildCandidate - 1;
      }
    }
  }
  MiDereferencePageRunsEx((__int64)v13, 1);
  return v5;
}
