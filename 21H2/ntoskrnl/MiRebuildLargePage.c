/*
 * XREFs of MiRebuildLargePage @ 0x140552918
 * Callers:
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 *     MmBuildLargePages @ 0x1408D7834 (MmBuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1408DBA34 (MmManagePartitionCreateLargePages.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F6180 (MiConvertSmallPageRangeToLarge.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 *     MiGetNodeStandbyPageCount @ 0x140550998 (MiGetNodeStandbyPageCount.c)
 *     MiFindRebuildCandidate @ 0x14055204C (MiFindRebuildCandidate.c)
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
  unsigned __int64 inserted; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  struct _KPRCB *v30; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v32; // eax
  unsigned int v33; // r14d
  unsigned __int64 v34; // rdi
  unsigned int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // r9
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int i; // r8d
  int v45; // r8d
  __int64 RebuildCandidate; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-41h]
  unsigned int *v49; // [rsp+70h] [rbp-39h]
  unsigned int v50; // [rsp+78h] [rbp-31h]
  __int64 v51; // [rsp+80h] [rbp-29h]
  ULONG_PTR v52; // [rsp+88h] [rbp-21h]
  __int128 v53; // [rsp+90h] [rbp-19h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-9h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-1h]
  unsigned __int8 *v56; // [rsp+B0h] [rbp+7h]
  unsigned int v57; // [rsp+110h] [rbp+67h]
  int v58; // [rsp+118h] [rbp+6Fh]
  unsigned int v59; // [rsp+120h] [rbp+77h]

  v59 = a3;
  RebuildCandidate = 0LL;
  v4 = a2;
  v5 = 0LL;
  v54 = 0LL;
  v7 = (unsigned int)MmNumberOfChannels;
  v8 = 0LL;
  v57 = MmNumberOfChannels;
  v9 = (unsigned int)a3;
  v50 = a2;
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v48 = 0LL;
  v10 = MiReferencePageRuns(a1, 1u, a3, a4);
  v11 = BugCheckParameter3;
  v12 = MiLargePageSizes[v9];
  v13 = (unsigned int *)v10;
  v14 = 0;
  v49 = (unsigned int *)v10;
  v15 = *(_QWORD *)(a1 + 16) + 4544 * v4;
  v51 = v15;
  v52 = BugCheckParameter3;
  v58 = 0;
  if ( (unsigned int)v7 > 1 )
  {
    v8 = (unsigned __int8 *)(v15 + 4313);
    v14 = *(unsigned __int8 *)(v15 + 4313);
    v58 = v14;
  }
  v56 = &v8[v7];
  if ( v8 != &v8[v7] )
  {
    while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v4, v14, v12, v11, v13);
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
                  v58,
                  v16,
                  0LL,
                  &RebuildCandidate) >= 0 )
      {
        if ( v12 >= 0x200 )
          MiUpdateLargePageBitMap(a1, RebuildCandidate, v12, 0, 1);
        MiConvertSmallPageRangeToLarge(RebuildCandidate, v59, v17, v18);
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
        *(_QWORD *)&v53 = RebuildCandidate;
        *((_QWORD *)&v53 + 1) = 1LL;
        v54 = 2LL;
        inserted = MiInsertLargePageInNodeList((__int64)&v53);
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
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        MiReturnCommit(a1, inserted);
        if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        {
          v30 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v30->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            do
            {
              if ( inserted + CachedResidentAvailable > 0x100 || inserted >= 0x80000 )
                break;
              v32 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v30->CachedResidentAvailable,
                      inserted + CachedResidentAvailable,
                      CachedResidentAvailable);
              v29 = (_DWORD)CachedResidentAvailable == v32;
              CachedResidentAvailable = v32;
              if ( v29 )
                goto LABEL_36;
            }
            while ( v32 != -1 );
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v30->CachedResidentAvailable,
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
        v48 = v5;
        if ( v5 >= (unsigned __int64)a4 )
        {
LABEL_50:
          v13 = v49;
          break;
        }
      }
      v33 = MmNumberOfChannels;
      v34 = 0LL;
      v35 = 0;
      if ( MmNumberOfChannels )
      {
        v36 = v51;
        do
          v34 += MiNodeFreeZeroPages(v36, v35++, 0);
        while ( v35 < v33 );
        LODWORD(v4) = v50;
      }
      if ( v12 > 0x10 )
      {
        v37 = 0LL;
        v38 = v59 + 1;
        if ( (unsigned int)v38 <= 2 )
        {
          v39 = &MiLargePageSizes[v38];
          v40 = (_QWORD *)(v51 + 1072LL * (unsigned int)v38);
          v41 = (unsigned int)(3 - v38);
          do
          {
            v42 = *v40 + v40[1];
            v40 += 134;
            v43 = *v39++ * v42;
            v37 += v43;
            --v41;
          }
          while ( v41 );
        }
        v34 += v37;
      }
      LODWORD(v7) = v57;
      if ( v34 >= 0x1000 )
      {
        v5 = v48;
      }
      else
      {
        for ( i = 0; i < v57; i = v45 + 1 )
          v34 += MiGetNodeStandbyPageCount(a1, v4, i);
        v5 = v48;
        if ( v34 < (unsigned __int64)a4 - v48 + 0x8000 )
          goto LABEL_50;
      }
      if ( !RebuildCandidate )
      {
LABEL_55:
        ++v8;
        if ( (unsigned int)v7 <= 1 )
        {
          v14 = v58;
        }
        else
        {
          v14 = *v8;
          v58 = v14;
        }
        v13 = v49;
        v11 = v52;
        if ( v8 == v56 )
          break;
      }
      else
      {
        v14 = v58;
        v11 = RebuildCandidate - 1;
        v13 = v49;
        v52 = RebuildCandidate - 1;
      }
    }
  }
  MiDereferencePageRunsEx((__int64)v13, 1);
  return v5;
}
