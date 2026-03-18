/*
 * XREFs of HalpTimerWatchdogTriggerSystemReset @ 0x14050EB80
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140303240 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x140305670 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140521AC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalpSetTimer @ 0x140354420 (HalpSetTimer.c)
 *     HalpTimerGetClockRates @ 0x1403DD4C8 (HalpTimerGetClockRates.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpTimerWatchdogTriggerSystemReset(char a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  signed __int32 v5[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-140h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp-138h] BYREF
  _DWORD v9[68]; // [rsp+50h] [rbp-128h] BYREF

  memset(&v9[2], 0, 0x100uLL);
  v2 = HalpWatchdogTimer;
  v3 = 0;
  v6 = 0;
  if ( !HalpWatchdogTimer )
    return 3221225473LL;
  if ( a1 )
  {
    HalpTimerWatchdogResetCount = -1LL;
    _InterlockedOr(v5, 0);
    v9[0] = 2097153;
    memset(&v9[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v9, KiClockTimerOwner);
    HalRequestClockInterrupt(0, (__int64)v9);
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
