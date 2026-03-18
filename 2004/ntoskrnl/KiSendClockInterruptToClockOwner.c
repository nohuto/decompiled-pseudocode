/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14034B9F4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140219980 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14034B900 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14039B660 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051B4E4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x14034BA80 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
