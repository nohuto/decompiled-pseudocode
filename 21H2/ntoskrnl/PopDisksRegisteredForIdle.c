/*
 * XREFs of PopDisksRegisteredForIdle @ 0x140259728
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  unsigned __int64 v1; // rdi
  __int64 i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return v0;
}
