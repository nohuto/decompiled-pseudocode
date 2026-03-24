/*
 * XREFs of PopDirectedDripsNotifyPnpActionQueueEvent @ 0x14037A354
 * Callers:
 *     PoNotifyPnpActionQueueEvent @ 0x14057699C (PoNotifyPnpActionQueueEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagNotifyPnpActionQueueEvent @ 0x14037A3F0 (PopDirectedDripsDiagNotifyPnpActionQueueEvent.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037A4DC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14037A544 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsNotifyPnpActionQueueEvent(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C24E48);
  if ( a1 )
  {
    if ( a1 == 1 && !--dword_140C24E50 )
      PopDirectedDripsClearDisengageReason(4LL);
  }
  else if ( ++dword_140C24E50 == 1 )
  {
    PopDirectedDripsSetDisengageReason(4LL);
  }
  KxReleaseSpinLock(&qword_140C24E48);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return PopDirectedDripsDiagNotifyPnpActionQueueEvent(a1, a2);
}
