/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x140576788
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14070ED84 (PopUmpoProcessPowerMessage.c)
 *     PopUpdateSystemIdleContext @ 0x1408ECBA0 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x1408F0F54 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F102C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopIdleChooseDozeS4Time @ 0x1405768CC (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x14070FA68 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1408E8154 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

__int64 PopIdleArmAoAcDozeS4Timer()
{
  __int64 result; // rax
  char v1; // di
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  memset(v6, 0, 0x4CuLL);
  PopFilterCapabilities(&PopCapabilities, v6);
  result = PopIsDozeSupported(v6);
  v1 = 0;
  if ( (_BYTE)result )
  {
    result = PopIdleChooseDozeS4Time(&v8, &v7);
    if ( (_BYTE)result )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
      if ( !byte_140C23384 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
        v1 = 1;
        dword_140C23388 = v7;
        byte_140C23384 = 1;
      }
      KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
            v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v5 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v2);
      if ( v1 )
        return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v7, v8);
    }
  }
  return result;
}
