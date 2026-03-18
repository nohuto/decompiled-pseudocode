/*
 * XREFs of IopDisableTimer @ 0x1403DDF0C
 * Callers:
 *     IoStopTimer @ 0x1403DDEF0 (IoStopTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIoTimerEvent @ 0x14062DBE4 (EtwTraceIoTimerEvent.c)
 */

char __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rsi
  int v4; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  KxReleaseSpinLock(&IopTimerLock);
  LOBYTE(v4) = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v4) = KeGetCurrentIrql();
      if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = (v4 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v4;
        if ( v7 )
          LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    LOBYTE(v4) = EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    LOBYTE(v4) = KeCancelTimer(&IopTimer);
  return v4;
}
