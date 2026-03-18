/*
 * XREFs of MmGrowKernelStackEx @ 0x14031B660
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140354580 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x1403F96F0 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x140530B90 (MmGrowKernelStack.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14031B820 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 CurrentThread; // rsi
  unsigned int v5; // ebp
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  _DWORD *v18; // r9
  int v19; // edx

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v5 = 0;
  v6 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(CurrentThread + 544) + 1838LL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v8 < ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
  {
    if ( v8 < ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140C4EAF8;
      v5 = -1073741571;
    }
    else
    {
      v9 = ((__int64)(((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL - v8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident(v6, v9, 0LL, SchedulerAssist) )
      {
        v10 = MI_GET_NODE_FROM_VALID_PTE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        if ( (unsigned int)MiAllocateKernelStackPages(v6, (__int64 *)v8, v9, CurrentThread | 1, v10, 2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v8 << 25) >> 16;
        }
        else
        {
          if ( (ULONG_PTR *)v6 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v9 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v9 >= 0x80000 )
                    break;
                  v15 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          CachedResidentAvailable + v9,
                          CachedResidentAvailable);
                  v14 = (_DWORD)CachedResidentAvailable == v15;
                  LODWORD(CachedResidentAvailable) = v15;
                  if ( v14 )
                    goto LABEL_28;
                }
                while ( v15 != -1 && v9 + v15 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v9 += (int)CachedResidentAvailable - 192;
              }
            }
          }
          if ( v9 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7168), v9);
LABEL_28:
          v5 = -1073741670;
        }
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
