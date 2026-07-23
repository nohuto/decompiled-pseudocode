/*
 * XREFs of MiTransferPartitionPageRun @ 0x140563050
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetBaseResidentPage @ 0x1403F6734 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 *     MiUnlinkPageFromBadList @ 0x14054F780 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x140556E00 (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(__int64 a1, unsigned __int16 *a2, ULONG_PTR a3, __int64 a4, KIRQL a5)
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
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned int v29; // edi
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // r8
  struct _KPRCB *v37; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 BaseResidentPage; // rax
  __int64 v49; // r8
  __int64 PfnPageSizeIndex; // r15
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  __int64 v55; // rbx
  ULONG_PTR v57; // [rsp+30h] [rbp-58h]
  __int16 v58; // [rsp+90h] [rbp+8h]
  unsigned __int16 v59; // [rsp+98h] [rbp+10h]
  int v60; // [rsp+A0h] [rbp+18h]

  v5 = a3;
  if ( a2 == (unsigned __int16 *)&MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4E690, -a4);
  v8 = *(_WORD *)a1;
  v9 = 0LL;
  v10 = *a2;
  v11 = 0;
  v58 = *(_WORD *)a1;
  v59 = *a2;
  v57 = a3 + a4;
  if ( a3 != a3 + a4 )
  {
    do
    {
      v60 = v11 + 1;
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
        v23 = *(_QWORD *)(v21 + 40);
        v24 = v22;
        if ( ((v23 >> 39) & 0x3FF) != v8 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v25 = KeGetCurrentIrql();
              if ( v25 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v25 >= 2u )
              {
                v26 = KeGetCurrentPrcb();
                v27 = v26->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                v20 = (v28 & v27[5]) == 0;
                v27[5] &= v28;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v26);
              }
            }
          }
          __writecr8(v24);
          goto LABEL_95;
        }
        v29 = *(_BYTE *)(v21 + 34) & 7;
        if ( v29 == 5 )
        {
          if ( MiIsPageOnBadList(48 * v5 - 0x58000000000LL) )
          {
            MiUnlinkPageFromBadList(v30, 0);
            MiAcquireNonPagedResources((ULONG_PTR *)a2, 1uLL, 0LL, 1u);
            MiReturnCommit(a1, 1LL);
            v36 = 1LL;
            if ( (ULONG_PTR *)a1 != &MiSystemPartition )
              goto LABEL_51;
            v37 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v37->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable == -1 )
              goto LABEL_51;
            do
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
                break;
              v39 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v37->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v20 = (_DWORD)CachedResidentAvailable == v39;
              CachedResidentAvailable = v39;
              if ( v20 )
                goto LABEL_52;
            }
            while ( v39 != -1 );
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v37->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v36 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( v36 )
LABEL_51:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v36);
LABEL_52:
            *(_QWORD *)(v21 + 40) ^= (*(_QWORD *)(v21 + 40) ^ ((unsigned __int64)v10 << 39)) & 0x1FF8000000000LL;
            if ( a2 != (unsigned __int16 *)&MiSystemPartition )
            {
              ++*((_QWORD *)a2 + 866);
              *((_BYTE *)a2 + 12) = 1;
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
                v40 = KeGetCurrentIrql();
                if ( v40 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v40 >= 2u )
                {
                  v41 = KeGetCurrentPrcb();
                  v42 = v41->SchedulerAssist;
                  v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                  v20 = (v43 & v42[5]) == 0;
                  v42[5] &= v43;
                  if ( v20 )
                    KiRemoveSystemWorkPriorityKick((__int64)v41);
                }
              }
            }
            __writecr8(v24);
            goto LABEL_94;
          }
          if ( !MiInvalidPteConforms(*(_QWORD *)(v21 + 16)) )
            goto LABEL_97;
          if ( qword_140C4DF80 )
          {
            if ( (v31 & 0x10) != 0 )
              v31 &= ~0x10uLL;
            else
              v31 &= ~qword_140C4DF80;
          }
          if ( HIDWORD(v31) != 4294967294 )
            goto LABEL_97;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v32 = KeGetCurrentIrql();
              if ( v32 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v32 >= 2u )
              {
                v33 = KeGetCurrentPrcb();
                v34 = v33->SchedulerAssist;
                v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                v20 = (v35 & v34[5]) == 0;
                v34[5] &= v35;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v33);
              }
            }
          }
          __writecr8(v24);
          MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
        }
        else
        {
          if ( (v23 & 0x1000000000LL) == 0 )
          {
            if ( v29 > 1 )
              goto LABEL_97;
            MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
            if ( a2 != (unsigned __int16 *)&MiSystemPartition )
            {
              ++*((_QWORD *)a2 + 866);
              *((_BYTE *)a2 + 12) = 1;
            }
            --*(_QWORD *)(a1 + 6928);
            *(_BYTE *)(a1 + 12) = 1;
            if ( (*(_BYTE *)(v21 + 35) & 0x40) != 0 )
              MiMoveBadPageCrossPartition(48 * v5 - 0x58000000000LL, a1, (ULONG_PTR *)a2);
            *(_QWORD *)(v21 + 40) ^= (*(_QWORD *)(v21 + 40) ^ ((unsigned __int64)v10 << 39)) & 0x1FF8000000000LL;
            MiInsertPageInFreeOrZeroedList(v5, ((*(_DWORD *)(v21 + 16) & 0x3E0) != 0LL) + 1);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v44 = KeGetCurrentIrql();
                if ( v44 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v44 >= 2u )
                {
                  v45 = KeGetCurrentPrcb();
                  v46 = v45->SchedulerAssist;
                  v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                  v20 = (v47 & v46[5]) == 0;
                  v46[5] &= v47;
                  if ( v20 )
                    KiRemoveSystemWorkPriorityKick((__int64)v45);
                }
              }
            }
            __writecr8(v24);
            ++v9;
            goto LABEL_94;
          }
          BaseResidentPage = MiGetBaseResidentPage(48 * v5 - 0x58000000000LL);
          v29 = *(_BYTE *)(BaseResidentPage + 34) & 7;
          PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
          if ( v49 != v21 )
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v29 > 1 )
          {
LABEL_97:
            MiUnlockPage(48 * v5 - 0x58000000000LL, v24);
            KeBugCheckEx(0x1Au, 0x41000uLL, v5, v29, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v51 = KeGetCurrentIrql();
              if ( v51 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v51 >= 2u )
              {
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                v20 = (v54 & v53[5]) == 0;
                v53[5] &= v54;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick((__int64)v52);
              }
            }
          }
          __writecr8(v24);
          v55 = MiLargePageSizes[PfnPageSizeIndex];
          if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 866) += v55;
            *((_BYTE *)a2 + 12) = 1;
          }
          if ( (unsigned int)MiMoveLargeFreePage(v5, PfnPageSizeIndex, a1, (ULONG_PTR *)a2) == 1 )
          {
            v5 += v55;
            *(_BYTE *)(a1 + 12) = 1;
            v9 += v55;
            *(_QWORD *)(a1 + 6928) -= v55;
          }
          else if ( a2 != (unsigned __int16 *)&MiSystemPartition )
          {
            *((_QWORD *)a2 + 866) -= v55;
            *((_BYTE *)a2 + 12) = 1;
          }
          v10 = v59;
        }
        --v5;
      }
LABEL_94:
      v8 = v58;
LABEL_95:
      v11 = v60;
      ++v5;
    }
    while ( v5 != v57 );
  }
  return v9;
}
