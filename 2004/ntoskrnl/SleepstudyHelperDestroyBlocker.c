/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14057B6F0
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x14057B6D0 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408F80A0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1408F8170 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1408F8230 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x1408F8320 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlocker(PKSPIN_LOCK SpinLock)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi
  int v4; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v4 = *((_DWORD *)SpinLock + 2);
    if ( (v4 & 8) != 0 )
    {
      v2 = -1073741811;
    }
    else
    {
      *((_DWORD *)SpinLock + 2) = v4 | 8;
      v2 = 0;
    }
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
