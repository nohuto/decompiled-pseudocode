/*
 * XREFs of MiFinishDriverPageRangeAllocation @ 0x1403CA0E4
 * Callers:
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiFinishDriverPageRangeAllocationDpc @ 0x1403DEB90 (MiFinishDriverPageRangeAllocationDpc.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFinishDriverPageRangeAllocation(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // bp
  volatile signed __int32 *v19; // rdi
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  struct _KPRCB *v24; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v26; // eax
  int v27; // edi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int128 v30; // [rsp+20h] [rbp-38h] BYREF
  int v31; // [rsp+70h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v5 = a3;
  v30 = *(_OWORD *)(a1 + 8);
  if ( v3 )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = -1LL << ((unsigned __int8)v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)v7;
        v16 = (v15 & SchedulerAssist[5]) == 0;
        v8 = (unsigned int)v15 & SchedulerAssist[5];
        SchedulerAssist[5] = v8;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v3 )
  {
    v17 = v6 + 48 * v3;
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = (-1LL << (v18 + 1)) & 4;
      v8 = (unsigned int)v7 | SchedulerAssist[5];
      SchedulerAssist[5] = v8;
    }
    if ( v6 < v17 )
    {
      v19 = (volatile signed __int32 *)(v6 + 24);
      do
      {
        v31 = 0;
        while ( _interlockedbittestandset64(v19, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v31, v7, v8, (__int64)SchedulerAssist);
          while ( *(__int64 *)v19 < 0 );
        }
        MiReturnFreeZeroPage((__int64)(v19 - 6), 0LL);
        _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
        v19 += 12;
      }
      while ( (unsigned __int64)(v19 - 6) < v17 );
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && v18 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (v18 + 1));
          v16 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v18);
    MiReturnCommit(a2, v3);
    if ( (ULONG_PTR *)a2 != &MiSystemPartition )
      goto LABEL_49;
    v24 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v24->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_49;
    if ( v3 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v3 >= 0x80000 )
          break;
        v26 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v24->CachedResidentAvailable,
                v3 + CachedResidentAvailable,
                CachedResidentAvailable);
        v16 = (_DWORD)CachedResidentAvailable == v26;
        LODWORD(CachedResidentAvailable) = v26;
        if ( v16 )
          goto LABEL_50;
      }
      while ( v26 != -1 && v3 + v26 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v24->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v3 += (int)CachedResidentAvailable - 192;
    }
    if ( v3 )
LABEL_49:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16960), v3);
  }
LABEL_50:
  v11 = v30;
  if ( (BYTE8(v30) & 1) != 0 && (_QWORD)v30 )
    v11 = (unsigned __int64)&v30 ^ v30;
  v27 = BYTE8(v30) & 1;
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v11 )
        {
          v10 = (_QWORD *)v11;
          if ( v27 )
            v11 ^= *(_QWORD *)v11;
          else
            v11 = *(_QWORD *)v11;
          *v10 = 0LL;
        }
        v12 = *(_QWORD *)(v11 + 8);
        if ( !v12 )
          break;
        v28 = v11;
        if ( v27 )
          v11 ^= v12;
        else
          v11 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)(v28 + 8) = 0LL;
      }
      v29 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 && v29 )
        v29 ^= v11;
      CmSiFreeMemory((PPRIVILEGE_SET)v11);
      if ( !v29 )
        break;
      v11 = v29;
    }
  }
}
