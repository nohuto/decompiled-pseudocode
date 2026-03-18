/*
 * XREFs of MiSetDeleteOnClose @ 0x14058C1D4
 * Callers:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140287A2C (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  __int64 inserted; // rdi
  unsigned __int64 v5; // rsi
  int v6; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  inserted = 0LL;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x40000) == 0 )
  {
    if ( (v6 & 0x10000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
  }
  if ( a2 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( inserted )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             1LL,
             inserted);
  return result;
}
