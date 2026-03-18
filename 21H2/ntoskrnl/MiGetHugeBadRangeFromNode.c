/*
 * XREFs of MiGetHugeBadRangeFromNode @ 0x140586854
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 */

__int64 __fastcall MiGetHugeBadRangeFromNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  volatile LONG *v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf

  v2 = *(_QWORD *)(a1 + 15984);
  if ( !v2 )
    return 0LL;
  v5 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 24512LL * a2 + 22848);
  v6 = a2 + 2 * dword_140C507C0[0] * (unsigned __int16)KeNumberNodes;
  v7 = ExAcquireSpinLockExclusive(v5);
  v10 = *(_DWORD *)(v2 + 8 * v6) & 0x3FFFFF;
  if ( v10 )
    MiUnlinkHugeRange(a1, v10, v8, v9);
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v10;
}
