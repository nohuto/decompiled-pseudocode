/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x140526760
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x1404137C0 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x140413980 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x1408BD7E8 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiSwitchQueue @ 0x14021C9D8 (KiSwitchQueue.c)
 *     KeInsertQueue @ 0x14029EAA0 (KeInsertQueue.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char KiSwapToUmsThreadContinue()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rsi
  int v2; // eax
  struct _KQUEUE *v3; // rbp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 Queue; // r8
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v2 = *((_DWORD *)Object + 20);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v2 | 2;
    CurrentThread->MiscFlags = ~(*((_DWORD *)CurrentThread->WaitBlock[3].SparePtr + 18) << 16) & 0x10000 | CurrentThread->MiscFlags & 0xFFFEFFFF;
    v3 = (struct _KQUEUE *)*((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    Queue = (__int64)CurrentThread->Queue;
    if ( v3 != (struct _KQUEUE *)Queue )
      KiSwitchQueue((__int64)CurrentThread, (__int64)v3, Queue);
    KeInsertQueue(v3, *((PLIST_ENTRY *)Object + 5));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & v9[5]) == 0;
          v9[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
