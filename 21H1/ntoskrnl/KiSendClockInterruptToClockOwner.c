/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14030E514
 * Callers:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x1402729D0 (KeResumeClockTimerFromIdle.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14030E420 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14039AED0 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051AE94 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x14030E5A0 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
