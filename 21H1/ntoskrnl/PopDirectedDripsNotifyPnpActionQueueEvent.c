/*
 * XREFs of PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1403774A4
 * Callers:
 *     PoNotifyPnpActionQueueEvent @ 0x140570F0C (PoNotifyPnpActionQueueEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagNotifyPnpActionQueueEvent @ 0x140377540 (PopDirectedDripsDiagNotifyPnpActionQueueEvent.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14037762C (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140377694 (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
