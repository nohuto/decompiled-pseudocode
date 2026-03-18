/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14057F120
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x14057F100 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408FDCB0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1408FDD80 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1408FDE40 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x1408FDF30 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
