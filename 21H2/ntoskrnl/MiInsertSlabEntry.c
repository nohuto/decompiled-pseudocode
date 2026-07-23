/*
 * XREFs of MiInsertSlabEntry @ 0x14039A21C
 * Callers:
 *     MiReplenishSlabAllocator @ 0x140392964 (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140A508C0 (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeProtection @ 0x140A939A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     MiCompareSlabEntry @ 0x1403797A8 (MiCompareSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  signed __int64 v7; // rbx
  unsigned __int64 v8; // r14
  BOOLEAN v9; // r8
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  v7 = *(_QWORD *)a2;
  v8 = v6;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v7 )
    v7 ^= a2;
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)MiCompareSlabEntry((_QWORD *)(a3 + 24), v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_15;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_15:
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_16;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_16:
          v9 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)a2, (PRTL_BALANCED_NODE)v7, v9, (PRTL_BALANCED_NODE)a3);
  v12 = *(_QWORD *)(a2 + 24);
  if ( !v12 || (v13 = *(_DWORD *)(a3 + 132), *(_DWORD *)(v12 + 132) > v13) && v13 )
    *(_QWORD *)(a2 + 24) = a3;
  *(_QWORD *)(a2 + 32) += *(unsigned int *)(a3 + 132);
  ++*(_QWORD *)(a2 + 40);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7632), 0x200uLL);
  if ( *(_DWORD *)(a3 + 132) == 512 )
  {
    *(_QWORD *)(a2 + 104) = KiQueryUnbiasedInterruptTime();
    *(_DWORD *)(a2 + 56) |= 1u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return result;
}
