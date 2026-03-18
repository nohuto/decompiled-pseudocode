/*
 * XREFs of ExReleaseSpinLockExclusive @ 0x140229990
 * Callers:
 *     PfSnNameQueryWorker @ 0x1402298D0 (PfSnNameQueryWorker.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1403B1020 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockExclusive(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r9
  int v9; // eax
  bool v10; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  else
    *SpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v5;
      if ( !v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = v7->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
  }
  __writecr8(v2);
}
