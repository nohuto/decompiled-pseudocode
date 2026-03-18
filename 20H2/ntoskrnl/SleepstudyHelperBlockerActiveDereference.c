/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14031A2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     SshpSetBlockerActive @ 0x14031A3E0 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  PKSPIN_LOCK v2; // rbx
  KIRQL v3; // al
  bool v4; // zf
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax

  v1 = 0;
  v2 = SpinLock;
  if ( SpinLock )
  {
    do
    {
      v3 = KeAcquireSpinLockRaiseToDpc(v2);
      v4 = (*((_DWORD *)v2 + 3))-- == 1;
      v5 = v3;
      if ( v4 )
        SshpSetBlockerActive(v2, 0LL);
      KxReleaseSpinLock(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v4 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v4 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v5);
      v2 = (PKSPIN_LOCK)v2[35];
    }
    while ( v2 );
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
