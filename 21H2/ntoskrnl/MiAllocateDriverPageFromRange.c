/*
 * XREFs of MiAllocateDriverPageFromRange @ 0x1403C9C90
 * Callers:
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 * Callees:
 *     MiPreInitializeSystemImagePage @ 0x140248208 (MiPreInitializeSystemImagePage.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiFinishDriverPageRangeAllocation @ 0x1403CA0E4 (MiFinishDriverPageRangeAllocation.c)
 *     MiDriverPageRangeCompare @ 0x1403CB264 (MiDriverPageRangeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateDriverPageFromRange(PEX_SPIN_LOCK SpinLock, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // r13
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  struct _KPRCB *v15; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v17; // zf
  signed __int32 v18; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r15
  unsigned __int8 v25; // r14
  volatile signed __int32 *v26; // rdi
  unsigned __int64 v27; // rbx
  bool v28; // r8
  int v29; // r15d
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  int v41; // eax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r14
  unsigned __int8 v44; // si
  volatile signed __int32 *v45; // rdi
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  unsigned __int64 v50; // [rsp+70h] [rbp+7h] BYREF
  PVOID P; // [rsp+78h] [rbp+Fh]
  int v52; // [rsp+D0h] [rbp+67h]
  int v54; // [rsp+E0h] [rbp+77h] BYREF
  int v55; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v50 = -1LL;
  v4 = 0;
  P = 0LL;
  v52 = 0;
  v5 = a2;
  while ( 1 )
  {
    v7 = ExAcquireSpinLockExclusive(SpinLock);
    v11 = v50;
    v12 = v7;
    if ( !*((_DWORD *)SpinLock + 1) )
      break;
    if ( v50 != -1LL && !*((_QWORD *)SpinLock + 4) )
    {
      *((_QWORD *)SpinLock + 4) = 512LL;
      *((_QWORD *)SpinLock + 3) = v11;
      v2[3] = v11;
      v2[4] = v50 + 511;
      v27 = *((_QWORD *)SpinLock + 1);
      if ( (SpinLock[4] & 1) != 0 && v27 )
        v27 ^= (unsigned __int64)(SpinLock + 2);
      v28 = 0;
      v29 = SpinLock[4] & 1;
      if ( v27 )
      {
        while ( 1 )
        {
          if ( (int)MiDriverPageRangeCompare(v2 + 3, v27) < 0 )
          {
            v30 = *(_QWORD *)v27;
            if ( v29 )
            {
              if ( !v30 )
                goto LABEL_52;
              v30 ^= v27;
            }
            if ( !v30 )
            {
LABEL_52:
              v28 = 0;
              break;
            }
          }
          else
          {
            v30 = *(_QWORD *)(v27 + 8);
            if ( v29 )
            {
              if ( !v30 )
                goto LABEL_53;
              v30 ^= v27;
            }
            if ( !v30 )
            {
LABEL_53:
              v28 = 1;
              break;
            }
          }
          v27 = v30;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)SpinLock + 1, v27, v28, (unsigned __int64)P);
      if ( *((_QWORD *)SpinLock + 6) == v50 )
        *((_QWORD *)SpinLock + 6) = -1LL;
      v5 = a2;
      v3 = 0LL;
      v4 = v52;
      v10 = 0LL;
      v11 = -1LL;
      P = 0LL;
      v50 = -1LL;
    }
    v13 = *((_QWORD *)SpinLock + 4);
    if ( v13 )
    {
      v14 = *((_QWORD *)SpinLock + 3);
      *((_QWORD *)SpinLock + 4) = v13 - 1;
      ++v3;
      *((_QWORD *)SpinLock + 3) = v14 + 1;
      goto LABEL_6;
    }
    if ( v4 )
    {
      LOBYTE(v9) = v12;
      MiFinishDriverPageRangeAllocation(SpinLock, v5, v9);
      v14 = -1LL;
      goto LABEL_9;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    v4 = 1;
    v52 = 1;
    P = MiAllocatePool(64, 0x28uLL, 0x7244694Du);
    v2 = P;
    if ( P )
    {
      if ( (int)MiAcquireNonPagedResources(v5, 512LL, 1024LL, 2u) >= 0 )
      {
        v3 = 512LL;
        if ( (int)MiFindContiguousPagesEx(
                    v5,
                    0x100000uLL,
                    qword_140C50840,
                    512LL,
                    0,
                    0x200uLL,
                    1u,
                    0x80000000,
                    0x80000000,
                    1610612801,
                    0,
                    0LL,
                    (__int64 *)&v50) >= 0 )
        {
          MiUpdateLargePageBitMap(v5, v50, 0x200uLL, 0, 1);
          v23 = 48 * v50 - 0x220000000000LL;
          v24 = v23 + 24576;
          v25 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
          {
            v22 = KeGetCurrentPrcb()->SchedulerAssist;
            v20 = (-1LL << (v25 + 1)) & 4;
            v21 = (unsigned int)v20 | v22[5];
            v22[5] = v21;
          }
          if ( v23 < v24 )
          {
            v26 = (volatile signed __int32 *)(v23 + 24);
            do
            {
              v54 = 0;
              while ( _interlockedbittestandset64(v26, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v54, v20, v21, (__int64)v22);
                while ( *(__int64 *)v26 < 0 );
              }
              MiPreInitializeSystemImagePage((__int64)(v26 - 6), 1);
              _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
              v26 += 12;
            }
            while ( (unsigned __int64)(v26 - 6) < v24 );
            v5 = a2;
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v35 = KeGetCurrentIrql();
              if ( v35 <= 0xFu && v25 <= 0xFu && v35 >= 2u )
              {
                v36 = KeGetCurrentPrcb();
                v37 = v36->SchedulerAssist;
                v38 = ~(unsigned __int16)(-1LL << (v25 + 1));
                v17 = (v38 & v37[5]) == 0;
                v37[5] &= v38;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(v36);
              }
            }
          }
          __writecr8(v25);
          v2 = P;
          v4 = 1;
        }
      }
    }
  }
  v14 = -1LL;
LABEL_6:
  if ( (_BYTE)v12 == 17 )
    goto LABEL_10;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v8 = -1LL << ((unsigned __int8)v12 + 1);
        v10 = v40->SchedulerAssist;
        v41 = ~(unsigned __int16)v8;
        v17 = (v41 & v10[5]) == 0;
        v9 = (unsigned int)v41 & v10[5];
        v10[5] = v9;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
  }
  __writecr8(v12);
LABEL_9:
  v11 = v50;
LABEL_10:
  if ( v11 != -1LL )
  {
    v42 = 48 * v11 - 0x220000000000LL;
    v43 = v42 + 24576;
    v44 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
    {
      v10 = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = (-1LL << (v44 + 1)) & 4;
      v9 = (unsigned int)v8 | v10[5];
      v10[5] = v9;
    }
    if ( v42 < v43 )
    {
      v45 = (volatile signed __int32 *)(v42 + 24);
      do
      {
        v55 = 0;
        while ( _interlockedbittestandset64(v45, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v55, v8, v9, (__int64)v10);
          while ( *(__int64 *)v45 < 0 );
        }
        MiReturnFreeZeroPage((__int64)(v45 - 6), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)v45, 0x7FFFFFFFFFFFFFFFuLL);
        v45 += 12;
      }
      while ( (unsigned __int64)(v45 - 6) < v43 );
      v5 = a2;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && v44 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (v44 + 1));
          v17 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(v44);
  }
  if ( v3 )
  {
    MiReturnCommit(v5, v3);
    if ( (ULONG_PTR *)v5 != &MiSystemPartition )
      goto LABEL_24;
    v15 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v15->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_24;
    if ( v3 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v3 >= 0x80000 )
          break;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v15->CachedResidentAvailable,
                CachedResidentAvailable + v3,
                CachedResidentAvailable);
        v17 = (_DWORD)CachedResidentAvailable == v18;
        LODWORD(CachedResidentAvailable) = v18;
        if ( v17 )
          goto LABEL_17;
      }
      while ( v18 != -1 && v3 + v18 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v3 += (int)CachedResidentAvailable - 192;
    }
    if ( v3 )
LABEL_24:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v3);
  }
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v14;
}
