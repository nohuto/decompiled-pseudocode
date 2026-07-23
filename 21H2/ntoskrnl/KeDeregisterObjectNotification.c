/*
 * XREFs of KeDeregisterObjectNotification @ 0x1402A77A0
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14026DC18 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x1402A7634 (IopCancelWaitCompletionPacket.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeDeregisterObjectNotification(volatile signed __int32 *a1, __int64 *a2)
{
  char v4; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 *v6; // rcx
  __int64 **v7; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // edx
  bool v14; // zf

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiAcquireKobjectLockSafe(a1);
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    v6[1] = (__int64)v7;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
