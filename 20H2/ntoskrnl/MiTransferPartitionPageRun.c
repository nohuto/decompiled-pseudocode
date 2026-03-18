/*
 * XREFs of MiTransferPartitionPageRun @ 0x140561340
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14055EDD0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     MiDrainZeroLookasides @ 0x140315D30 (MiDrainZeroLookasides.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetBaseResidentPage @ 0x1403F4F98 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiMoveBadPageCrossPartition @ 0x14054D4EC (MiMoveBadPageCrossPartition.c)
 *     MiUnlinkPageFromBadList @ 0x14054DA40 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x1405550F0 (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
{
  ULONG_PTR v5; // r14
  __int16 v8; // di
  __int64 v9; // r13
  unsigned __int16 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int8 CurrentIrql; // al
  KIRQL v16; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rbp
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned int v31; // edi
  _QWORD *v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int64 v38; // r8
  struct _KPRCB *v39; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 BaseResidentPage; // rax
  __int64 v51; // r8
  __int64 PfnPageSizeIndex; // r15
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  __int64 v57; // rbx
  ULONG_PTR v59; // [rsp+30h] [rbp-58h]
  __int16 v60; // [rsp+90h] [rbp+8h]
  unsigned __int16 v61; // [rsp+98h] [rbp+10h]
  int v62; // [rsp+A0h] [rbp+18h]

  v5 = a3;
  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4E4D0, -a4);
  v8 = *(_WORD *)a1;
  v9 = 0LL;
  v10 = *(_WORD *)a2;
  v11 = 0;
  v60 = *(_WORD *)a1;
  v61 = *(_WORD *)a2;
  v59 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    do
    {
      v62 = v11 + 1;
      if ( (((_BYTE)v11 + 1) & 0xF) == 0 && (*(_DWORD *)(a1 + 200) & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v16 = a5;
          if ( a5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (a5 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        else
        {
          v16 = a5;
        }
        __writecr8(v16);
        --v5;
        a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
      }
      else
      {
        v21 = 48 * v5 - 0x58000000000LL;
        v22 = MiLockPageInline(v21, v12, v13, v14);
        v25 = *(_QWORD *)(v21 + 40);
        v26 = v22;
        if ( ((v25 >> 39) & 0x3FF) != v8 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v27 >= 2u )
              {
                v28 = KeGetCurrentPrcb();
                v29 = v28->SchedulerAssist;
                v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
                v20 = (v30 & v29[5]) == 0;
                v29[5] &= v30;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v28);
              }
            }
          }
          __writecr8(v26);
          goto LABEL_95;
        }
        v31 = *(_BYTE *)(v21 + 34) & 7;
        if ( v31 == 5 )
        {
          if ( MiIsPageOnBadList(48 * v5 - 0x58000000000LL) )
          {
            MiUnlinkPageFromBadList(v32, 0);
            MiAcquireNonPagedResources(a2, 1uLL, 0LL, 1u);
            MiReturnCommit(a1, 1LL);
            v38 = 1LL;
            if ( (ULONG_PTR *)a1 != &MiSystemPartition )
              goto LABEL_51;
            v39 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v39->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_51;
            do
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
                break;
              v41 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v39->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v20 = (_DWORD)CachedResidentAvailable == v41;
              CachedResidentAvailable = v41;
              if ( v20 )
                goto LABEL_52;
            }
            while ( v41 != -1 );
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v39->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v38 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v38 )
LABEL_51:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v38);
LABEL_52:
            *(_QWORD *)(v21 + 40) ^= (*(_QWORD *)(v21 + 40) ^ ((unsigned __int64)v10 << 39)) & 0x1FF8000000000LL;
            if ( (ULONG_PTR *)a2 != &MiSystemPartition )
            {
              ++*(_QWORD *)(a2 + 6928);
              *(_BYTE *)(a2 + 12) = 1;
            }
            --*(_QWORD *)(a1 + 6928);
            *(_BYTE *)(a1 + 12) = 1;
            MiInsertPageInList(48 * v5 - 0x58000000000LL, 0x20u);
            ++v9;
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v42 = KeGetCurrentIrql();
                if ( v42 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v42 >= 2u )
                {
                  v43 = KeGetCurrentPrcb();
                  v44 = v43->SchedulerAssist;
                  v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
                  v20 = (v45 & v44[5]) == 0;
                  v44[5] &= v45;
                  if ( v20 )
                    KiRemoveSystemWorkPriorityKick((__int64)v43);
                }
              }
            }
            __writecr8(v26);
            goto LABEL_94;
          }
          if ( !MiInvalidPteConforms(*(_QWORD *)(v21 + 16)) )
            goto LABEL_97;
          if ( qword_140C4DDC0 )
          {
            if ( (v33 & 0x10) != 0 )
              v33 &= ~0x10uLL;
            else
              v33 &= ~qword_140C4DDC0;
          }
          if ( HIDWORD(v33) != 4294967294 )
            goto LABEL_97;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v34 = KeGetCurrentIrql();
              if ( v34 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v34 >= 2u )
              {
                v35 = KeGetCurrentPrcb();
                v36 = v35->SchedulerAssist;
                v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
                v20 = (v37 & v36[5]) == 0;
                v36[5] &= v37;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v35);
              }
            }
          }
          __writecr8(v26);
          MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
        }
        else
        {
          if ( (v25 & 0x1000000000LL) == 0 )
          {
            if ( v31 > 1 )
              goto LABEL_97;
            MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
            if ( (ULONG_PTR *)a2 != &MiSystemPartition )
            {
              ++*(_QWORD *)(a2 + 6928);
              *(_BYTE *)(a2 + 12) = 1;
            }
            --*(_QWORD *)(a1 + 6928);
            *(_BYTE *)(a1 + 12) = 1;
            if ( (*(_BYTE *)(v21 + 35) & 0x40) != 0 )
              MiMoveBadPageCrossPartition(48 * v5 - 0x58000000000LL, a1, a2);
            *(_QWORD *)(v21 + 40) ^= (*(_QWORD *)(v21 + 40) ^ ((unsigned __int64)v10 << 39)) & 0x1FF8000000000LL;
            MiInsertPageInFreeOrZeroedList(v5, ((*(_DWORD *)(v21 + 16) & 0x3E0) != 0LL) + 1);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v46 = KeGetCurrentIrql();
                if ( v46 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v46 >= 2u )
                {
                  v47 = KeGetCurrentPrcb();
                  v48 = v47->SchedulerAssist;
                  v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
                  v20 = (v49 & v48[5]) == 0;
                  v48[5] &= v49;
                  if ( v20 )
                    KiRemoveSystemWorkPriorityKick((__int64)v47);
                }
              }
            }
            __writecr8(v26);
            ++v9;
            goto LABEL_94;
          }
          BaseResidentPage = MiGetBaseResidentPage(48 * v5 - 0x58000000000LL, 1023LL, v23, v24);
          v31 = *(_BYTE *)(BaseResidentPage + 34) & 7;
          PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
          if ( v51 != v21 )
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v31 > 1 )
          {
LABEL_97:
            MiUnlockPage(48 * v5 - 0x58000000000LL, v26);
            KeBugCheckEx(0x1Au, 0x41000uLL, v5, v31, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v53 = KeGetCurrentIrql();
              if ( v53 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v53 >= 2u )
              {
                v54 = KeGetCurrentPrcb();
                v55 = v54->SchedulerAssist;
                v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
                v20 = (v56 & v55[5]) == 0;
                v55[5] &= v56;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v54);
              }
            }
          }
          __writecr8(v26);
          v57 = MiLargePageSizes[PfnPageSizeIndex];
          if ( (ULONG_PTR *)a2 != &MiSystemPartition )
          {
            *(_QWORD *)(a2 + 6928) += v57;
            *(_BYTE *)(a2 + 12) = 1;
          }
          if ( (unsigned int)MiMoveLargeFreePage(v5, PfnPageSizeIndex, a1, (_WORD *)a2) == 1 )
          {
            v5 += v57;
            *(_BYTE *)(a1 + 12) = 1;
            v9 += v57;
            *(_QWORD *)(a1 + 6928) -= v57;
          }
          else if ( (ULONG_PTR *)a2 != &MiSystemPartition )
          {
            *(_QWORD *)(a2 + 6928) -= v57;
            *(_BYTE *)(a2 + 12) = 1;
          }
          v10 = v61;
        }
        --v5;
      }
LABEL_94:
      v8 = v60;
LABEL_95:
      v11 = v62;
      ++v5;
    }
    while ( v5 != v59 );
  }
  return v9;
}
