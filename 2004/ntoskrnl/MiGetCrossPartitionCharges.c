/*
 * XREFs of MiGetCrossPartitionCharges @ 0x14055CF88
 * Callers:
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1405554E4 (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140557A9C (MiGetCrossPartitionCombineCharges.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiApplyCrossPartitionCharges @ 0x14055BF68 (MiApplyCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // r12
  __int64 v7; // rdi
  unsigned __int64 v10; // rbp
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v5 = (volatile LONG *)(a1 + 1344);
  v7 = 32LL * a2;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    ++*(_QWORD *)(v7 + a1 + 1904);
    v11 = -1073740640;
  }
  else
  {
    v11 = MiApplyCrossPartitionCharges(a1, a2, a4);
    if ( v11 >= 0 && (a3 & 1) != 0 )
    {
      v11 = MiApplyCrossPartitionCharges(v12, a2 + 1, v13);
      if ( v11 < 0 )
        *(_QWORD *)(v7 + a1 + 1896) -= a4;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return (unsigned int)v11;
}
