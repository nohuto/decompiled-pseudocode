/*
 * XREFs of KeDeregisterObjectNotification @ 0x1402D5A48
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x140275348 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x1402D591C (IopCancelWaitCompletionPacket.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0 (ExpLeaveWorkerFactoryAwayMode.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeDeregisterObjectNotification(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  char v6; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  v4 = a2;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe(a1, a2, a3, (__int64)SchedulerAssist);
  if ( *(_BYTE *)(v4 + 17) == 4 )
  {
    v8 = *(_QWORD *)v4;
    v9 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v9 != v4 )
      __fastfail(3u);
    *v9 = v8;
    v6 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    *(_BYTE *)(v4 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
