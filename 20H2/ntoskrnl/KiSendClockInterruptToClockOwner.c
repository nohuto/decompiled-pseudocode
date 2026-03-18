/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x14031C9B4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402843F0 (KeResumeClockTimerFromIdle.c)
 *     KiTimer2Expiration @ 0x14028D7C0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14031C8C0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E7B0 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051EEB4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x14031CA40 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
