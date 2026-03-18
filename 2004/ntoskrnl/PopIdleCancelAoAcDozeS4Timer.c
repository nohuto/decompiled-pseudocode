/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x14037F914
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A7AE4 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140712640 (PopIdleGlobalUserPresenceCallback.c)
 *     PopUpdateSystemIdleContext @ 0x1408EDE94 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x1408F2244 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F231C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x1402754B0 (KeCancelTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1408E9494 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140C22DC4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
    byte_140C22DC4 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
