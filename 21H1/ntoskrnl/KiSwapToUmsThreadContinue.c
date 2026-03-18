/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x140520A20
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x140408800 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x1404089C0 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x1408B8E48 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     KiSwitchQueue @ 0x140358BF0 (KiSwitchQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSwapToUmsThreadContinue(__int64 a1, __int64 a2, __int64 a3, struct _KPRCB *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rsi
  int v6; // eax
  struct _KQUEUE *v7; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 Queue; // r8
  unsigned __int8 v10; // al
  int v11; // eax
  bool v12; // zf

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
      SchedulerAssist = (struct _KPRCB *)KeGetCurrentPrcb()->SchedulerAssist;
      HIDWORD(SchedulerAssist->NextThread) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    Queue = (unsigned __int64)CurrentThread->Queue;
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
          SchedulerAssist = KeGetCurrentPrcb();
          a3 = (__int64)SchedulerAssist->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(a3 + 20)) == 0;
          a2 = (unsigned int)v11 & *(_DWORD *)(a3 + 20);
          *(_DWORD *)(a3 + 20) = a2;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)SchedulerAssist);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, a2, a3, (__int64)SchedulerAssist);
}
