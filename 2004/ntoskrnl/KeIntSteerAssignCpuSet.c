/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x14051D08C
 * Callers:
 *     IoSteerInterrupt @ 0x14089A210 (IoSteerInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIntSteerAssignCpuSet @ 0x14051D26C (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x14051D2C8 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
    }
    else
    {
      KiIntSteerClearCpuSetAssignment(v8);
      v6 = 0;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
