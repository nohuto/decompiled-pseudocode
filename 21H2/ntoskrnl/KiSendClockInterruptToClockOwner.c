/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140292B04
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140224BE0 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1402487E0 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140292A10 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E3F0 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140520994 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x140292B90 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
