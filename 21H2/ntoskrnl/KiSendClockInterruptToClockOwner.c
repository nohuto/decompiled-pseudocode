/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14022F244
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14022F150 (ExpUpdateTimerConfigurationWorker.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1403AD92C (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
