/*
 * XREFs of MiDeleteCachedSegment @ 0x1405270D8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403BC920 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140528C1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x14029E554 (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x14029F210 (MiUnlinkUnusedControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14037EAEC (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned int v3; // ebx
  __int64 v4; // rdi
  volatile signed __int32 **v5; // r14
  unsigned __int64 v6; // rbp
  volatile signed __int32 *i; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  __int64 inserted; // rsi
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // rdx
  _DWORD *v17; // r9
  int v18; // eax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1;
  v4 = 1LL;
  v5 = (volatile signed __int32 **)(a1 + 1704);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v5; i != (volatile signed __int32 *)v5; i = *(volatile signed __int32 **)i )
  {
    v4 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    return 0;
  }
  MiUnlinkUnusedControlArea(v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v13 = *(_DWORD *)(v4 + 56);
  if ( (v13 & 0x20) == 0 && *(_DWORD *)(v4 + 76) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    inserted = MiInsertUnusedSegment(v4);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
    __writecr8(v6);
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  if ( (v13 & 0x20) != 0 || (unsigned int)MiFlushControlArea((PVOID)v4) == 1 )
    MiDestroySection(v4, v6, 0LL);
  else
    return 0;
  return v3;
}
