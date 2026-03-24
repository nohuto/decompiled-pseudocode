/*
 * XREFs of HalpTimerWatchdogTriggerSystemReset @ 0x1404C2760
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140221560 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14022A590 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D47D0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 *     HalpSetTimer @ 0x14024E37C (HalpSetTimer.c)
 *     HalRequestClockInterrupt @ 0x140292B90 (HalRequestClockInterrupt.c)
 *     HalpTimerGetClockRates @ 0x1403CE544 (HalpTimerGetClockRates.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall HalpTimerWatchdogTriggerSystemReset(char a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  signed __int32 v5[8]; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v9[44]; // [rsp+50h] [rbp-C8h] BYREF

  memset(&v9[2], 0, 0xA0uLL);
  v2 = HalpWatchdogTimer;
  v3 = 0;
  v6 = 0;
  if ( !HalpWatchdogTimer )
    return 3221225473LL;
  if ( a1 )
  {
    HalpTimerWatchdogResetCount = -1LL;
    _InterlockedOr(v5, 0);
    v9[0] = 1310721;
    memset(&v9[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v9, KiClockTimerOwner);
    HalRequestClockInterrupt(0, v9);
  }
  else
  {
    HalpTimerWatchdogResetCount = -2LL;
    _InterlockedOr(v5, 0);
    HalpTimerGetClockRates(v2, &v7, &v6);
    return (unsigned int)HalpSetTimer(v2, 3u, v6, 1, &v8);
  }
  return v3;
}
