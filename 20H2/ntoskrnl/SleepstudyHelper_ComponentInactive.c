/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x14057EE30
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     SshpSetBlockerActive @ 0x14031A3E0 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  unsigned __int64 v3; // rsi
  int v4; // eax
  bool v5; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v8; // edx
  _DWORD *SchedulerAssist; // r9

  v1 = 0;
  if ( SpinLock )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v4 = *((_DWORD *)SpinLock + 2);
    if ( (v4 & 0x10) != 0 )
    {
      v5 = (*((_DWORD *)SpinLock + 3))-- == 1;
      *((_DWORD *)SpinLock + 2) = v4 & 0xFFFFFFEF;
      if ( v5 )
        SshpSetBlockerActive((__int64)SpinLock, 0);
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
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v5 )
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
  return v1;
}
