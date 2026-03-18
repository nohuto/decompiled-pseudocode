/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x140524A40
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x140410B80 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x140410D40 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x1408BFEC8 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSwitchQueue @ 0x140303594 (KiSwitchQueue.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSwapToUmsThreadContinue(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rsi
  int v6; // eax
  struct _KQUEUE *v7; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 Queue; // r8
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *((_DWORD *)Object + 20);
  if ( (v6 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v6 | 2;
    CurrentThread->MiscFlags = ~(*((_DWORD *)CurrentThread->WaitBlock[3].SparePtr + 18) << 16) & 0x10000 | CurrentThread->MiscFlags & 0xFFFEFFFF;
    v7 = (struct _KQUEUE *)*((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    Queue = (__int64)CurrentThread->Queue;
    if ( v7 != (struct _KQUEUE *)Queue )
      KiSwitchQueue((__int64)CurrentThread, (__int64)v7, Queue, (__int64)SchedulerAssist);
    KeInsertQueue(v7, *((PLIST_ENTRY *)Object + 5));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
