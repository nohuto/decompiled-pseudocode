/*
 * XREFs of PopDirectedDripsDisengageTimerCallback @ 0x140568810
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A4DC (PopDirectedDripsClearDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopDirectedDripsDisengageTimerCallback(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  bool v4; // zf
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  v4 = (*(_DWORD *)(a2 + 20))-- == 1;
  v5 = v3;
  if ( v4 )
    PopDirectedDripsClearDisengageReason(*(_DWORD *)a2);
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 8));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v4 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
}
