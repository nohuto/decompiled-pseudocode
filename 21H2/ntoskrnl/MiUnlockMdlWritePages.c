/*
 * XREFs of MiUnlockMdlWritePages @ 0x140334830
 * Callers:
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiFlushComplete @ 0x140597ED0 (MiFlushComplete.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiEnqueuePageList @ 0x1403365F0 (MiEnqueuePageList.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140591E04 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 */

__int64 __fastcall MiUnlockMdlWritePages(_DWORD *a1, int *a2)
{
  __int64 v4; // r9
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 CachedResidentAvailable; // rdx
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v17; // rbx
  char v18; // al
  bool v19; // zf
  char v20; // al
  int v21; // ecx
  __int64 result; // rax
  __int64 v23; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 v25; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v27; // cl
  int CanBatchSystemCacheUnmapPages; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  _QWORD v38[14]; // [rsp+28h] [rbp-59h] BYREF
  int v39; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v41; // [rsp+100h] [rbp+7Fh]

  memset(v38, 0, 0x68uLL);
  v5 = (__int64 *)(a1 + 12);
  v6 = (a1[8] + a1[11]) & 0xFFF;
  v7 = (unsigned int)a1[10] + 4095LL;
  v8 = (*a2 >> 31) & 0x43;
  LODWORD(v38[12]) = 1;
  v40 = v8;
  v38[2] = 0x3FFFFFFFFFLL;
  v38[3] = 0x3FFFFFFFFFLL;
  LODWORD(v38[1]) = 0;
  v9 = 0LL;
  v38[11] = 0LL;
  v10 = (unsigned __int64)(v6 + v7) >> 12;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = LOBYTE(v38[11]) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v13 << (CurrentIrql + 1)) & 4;
    v12 = 2LL;
  }
  if ( v10 )
  {
    CachedResidentAvailable = __ROL8__(1LL, CurrentIrql + 1);
    v41 = CachedResidentAvailable;
    while ( 1 )
    {
      v15 = *v5;
      v16 = v38[12];
      v17 = 48 * *v5 - 0x220000000000LL;
      if ( LODWORD(v38[12]) == 3 )
        goto LABEL_53;
      if ( v38[0] )
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          MiInsertPagesInList(v38, 0LL);
          if ( !v38[0] )
          {
            v12 = 2LL;
            goto LABEL_23;
          }
        }
      }
      else
      {
LABEL_23:
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v39, CachedResidentAvailable, v12, v4);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
      }
      if ( v16 != 1 )
      {
LABEL_53:
        switch ( v16 )
        {
          case 0:
            CanBatchSystemCacheUnmapPages = MiCanBatchSystemCacheUnmapPages(&v40, v17);
LABEL_60:
            v21 = CanBatchSystemCacheUnmapPages;
            if ( CanBatchSystemCacheUnmapPages )
              goto LABEL_15;
            goto LABEL_25;
          case 2:
            CanBatchSystemCacheUnmapPages = MiCanBatchHardFaultPages(&v40, v17);
            goto LABEL_60;
          case 3:
            goto LABEL_14;
        }
      }
      v18 = *(_BYTE *)(v17 + 34) & 0xF7;
      v19 = (v40 & 0x42) == 0;
      *(_BYTE *)(v17 + 34) = v18;
      if ( !v19 )
        *(_BYTE *)(v17 + 34) = v18 | 0x10;
      v19 = (*(_WORD *)(v17 + 32))-- == 1;
      if ( v19 )
      {
        if ( (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) != 0
          || (v20 = *(_BYTE *)(v17 + 35), (v20 & 0x40) != 0)
          || (v20 & 0x10) != 0 )
        {
          v21 = 2;
        }
        else
        {
LABEL_14:
          v21 = 1;
        }
LABEL_15:
        if ( !v38[0] )
        {
          if ( (*(_BYTE *)(v17 + 34) & 0x10) != 0 )
            LODWORD(v38[1]) = 3;
          else
            LODWORD(v38[1]) = 2;
        }
        if ( v21 == 1 )
        {
          MiEnqueuePageList(v38, v15);
          goto LABEL_18;
        }
        MiInsertPagesInList(v38, 1LL);
        if ( v16 )
        {
          if ( v16 == 2 )
          {
            MiHardFaultPageRelease(&v40, v17);
          }
          else
          {
            MiReleaseWriteInProgressCharges(
              *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL)),
              1uLL,
              1);
            MiPfnReferenceCountIsZero(v17, v15);
          }
        }
        else
        {
          MiDecrementShareCount(v17, v29, v30, v31);
        }
        goto LABEL_30;
      }
LABEL_25:
      if ( v16 == 1 )
      {
        v23 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
        MiReturnCommit(v23, 1LL);
        v4 = 1LL;
        if ( (ULONG_PTR *)v23 != &MiSystemPartition )
          goto LABEL_46;
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_46;
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v25 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v19 = (_DWORD)CachedResidentAvailable == v25;
            CachedResidentAvailable = v25;
            if ( v19 )
              goto LABEL_30;
          }
          while ( v25 != -1 && (unsigned __int64)(v25 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v4 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( v4 )
LABEL_46:
          v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16960), v4);
      }
LABEL_30:
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
      if ( (++v9 & 0x3F) == 0 && KeShouldYieldProcessor() )
      {
        MiInsertPagesInList(v38, 0LL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v4 = (__int64)v33->SchedulerAssist;
              CachedResidentAvailable = ~(unsigned __int16)-(__int16)v41;
              v19 = ((unsigned int)CachedResidentAvailable & *(_DWORD *)(v4 + 20)) == 0;
              *(_DWORD *)(v4 + 20) &= CachedResidentAvailable;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(CurrentIrql);
        v27 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
        {
          v4 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          CachedResidentAvailable = (-1LL << (v27 + 1)) & 4;
          *(_DWORD *)(v4 + 20) |= CachedResidentAvailable;
        }
      }
      ++v5;
      v12 = 2LL;
      if ( !--v10 )
      {
        v13 = -1LL;
        break;
      }
    }
  }
  MiInsertPagesInList(v38, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(v13 << (CurrentIrql + 1));
        v19 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
