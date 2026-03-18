/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1405898DC
 * Callers:
 *     MmFreeSecureKernelPages @ 0x1405B1D98 (MmFreeSecureKernelPages.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR a1, char a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  bool v9; // zf
  PMDL v10; // rcx
  unsigned __int64 v11; // rdx
  PVOID MappedSystemVa; // r8
  __int16 v13; // dx
  PMDL v14; // rcx
  unsigned __int64 v15; // rsi
  PVOID v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  unsigned __int64 v21; // r8
  struct _KPRCB *v22; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v24; // eax

  v3 = 48 * a1;
  v5 = 1LL;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6);
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  MiIsPfnFromSlabAllocation(v6);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v9 = *(_WORD *)(v6 + 32) == 2;
  *(_WORD *)(v6 + 32) -= 2;
  if ( v9 )
  {
    if ( MiIsPfnFromSlabAllocation(v6) )
    {
LABEL_12:
      v5 = 0LL;
    }
    else
    {
      v10 = MemoryDescriptorList;
      if ( MemoryDescriptorList && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
      {
        v11 = 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4);
        while ( v10 )
        {
          MappedSystemVa = v10->MappedSystemVa;
          if ( v11 >= (unsigned __int64)MappedSystemVa )
          {
            if ( (PVOID)(v11 - (unsigned __int64)MappedSystemVa) < v10->StartVa )
              goto LABEL_12;
            v10 = *(PMDL *)&v10->Size;
          }
          else
          {
            v10 = v10->Next;
          }
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v13 = 1;
      *(_BYTE *)(v6 + 34) &= ~0x10u;
    }
    else
    {
      v14 = MemoryDescriptorList;
      if ( MemoryDescriptorList && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
      {
        v15 = 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4);
        while ( v14 )
        {
          v16 = v14->MappedSystemVa;
          if ( v15 >= (unsigned __int64)v16 )
          {
            if ( (PVOID)(v15 - (unsigned __int64)v16) < v14->StartVa )
            {
              v13 = 256;
              goto LABEL_26;
            }
            v14 = *(PMDL *)&v14->Size;
          }
          else
          {
            v14 = v14->Next;
          }
        }
      }
      v13 = 2;
    }
LABEL_26:
    MiInsertPageInFreeOrZeroedList(a1, v13);
  }
  else
  {
    *(_BYTE *)(v6 + 34) |= 7u;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    v5 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v9 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  if ( v5 )
  {
    MiReturnCommit(v8, v5);
    v21 = v5;
    if ( (ULONG_PTR *)v8 != &MiSystemPartition )
      goto LABEL_46;
    v22 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v22->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_46;
    do
    {
      if ( (unsigned __int64)(v5 + CachedResidentAvailable) > 0x100 )
        break;
      v24 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v22->CachedResidentAvailable,
              CachedResidentAvailable + v5,
              CachedResidentAvailable);
      v9 = (_DWORD)CachedResidentAvailable == v24;
      CachedResidentAvailable = v24;
      if ( v9 )
        return v5;
    }
    while ( v24 != -1 );
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v21 = v5 + (int)CachedResidentAvailable - 192;
    }
    if ( v21 )
LABEL_46:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16960), v21);
  }
  return v5;
}
