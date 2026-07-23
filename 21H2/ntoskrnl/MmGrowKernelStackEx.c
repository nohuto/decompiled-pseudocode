/*
 * XREFs of MmGrowKernelStackEx @ 0x1402497C0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140334E20 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140402910 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x1405368F0 (MmGrowKernelStack.c)
 * Callees:
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x140249980 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ebp
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // rax
  _DWORD *v17; // r9
  int v18; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (char *)CurrentThread->StackBase - (*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (void *)0x12000 )
    return 3221225659LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C4E688 + 8LL * CurrentThread->Process[1].IdealProcessorPadding[5]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 < (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    if ( v6 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140C4EBF8;
      v3 = -1073741571;
    }
    else
    {
      v7 = ((__int64)((((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL - v6) >> 3)
         + 1;
      if ( (unsigned int)MiChargeResident(v4, v7, 0LL) )
      {
        v8 = MI_GET_NODE_FROM_VALID_PTE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        if ( (unsigned int)MiAllocateKernelStackPages(v4, v6, v7, (unsigned int)CurrentThread | 1, v8, 2) )
        {
          CurrentThread->StackLimit = (void *volatile)((__int64)(v6 << 25) >> 16);
        }
        else
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v7 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v7 >= 0x80000 )
                    break;
                  v14 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          CachedResidentAvailable + v7,
                          CachedResidentAvailable);
                  v13 = (_DWORD)CachedResidentAvailable == v14;
                  LODWORD(CachedResidentAvailable) = v14;
                  if ( v13 )
                    goto LABEL_28;
                }
                while ( v14 != -1 && v7 + v14 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v7 += (int)CachedResidentAvailable - 192;
              }
            }
          }
          if ( v7 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7168), v7);
LABEL_28:
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
