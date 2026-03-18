/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x140381644
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406FA488 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140720830 (PopIdleGlobalUserPresenceCallback.c)
 *     PopUpdateSystemIdleContext @ 0x1408F3AA4 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x1408F7E54 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F7F2C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x1408EF0A4 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140C23284 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer, 0LL, v4, v5);
    byte_140C23284 = 0;
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
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
