/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14022F4BC
 * Callers:
 *     KiResetClockIntervalOneShot @ 0x14022F104 (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     KiSetClockIntervalOneShot @ 0x14022F3E8 (KiSetClockIntervalOneShot.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x14022F670 (KiGetClockIntervalOneShot.c)
 *     KiSetClockTickRate @ 0x14022F6A4 (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // esi
  __int64 InterruptTimePrecise; // rax
  __int64 v3; // rdx
  unsigned int v4; // r11d
  unsigned __int64 v5; // rbx
  unsigned int ClockIntervalOneShot; // r10d
  __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // rdx
  char v10; // bp
  unsigned int v11; // ebx
  __int16 v13; // [rsp+30h] [rbp-8h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( (qword_140CF6018 & 1) != 0 )
  {
    if ( qword_140CF6018 == 1 )
      v0 = 0LL;
    else
      v0 = qword_140CF6018 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v0 = qword_140CF6018;
  }
  v1 = *(_DWORD *)(v0 + 28);
  _disable();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v14);
  v4 = -1;
  v5 = InterruptTimePrecise;
  ClockIntervalOneShot = -1;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise);
  v7 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > v5
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v8 = KePseudoHrTimeIncrement;
    v9 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v9 = KiLastNonHrTimerExpiration;
      v8 = KeNonHrTimeIncrement;
    }
    v7 = v5 + v8 - (v5 - v9) % v8;
    v4 = KiGetClockIntervalOneShot(v7, v5);
  }
  LOBYTE(v3) = 0;
  v10 = 0;
  if ( ClockIntervalOneShot > v1 || ClockIntervalOneShot > v4 )
  {
    if ( v4 >= v1 )
    {
      ClockIntervalOneShot = v1;
      KiClockOwnerOneShotCorrectiveRequest = v5;
    }
    else
    {
      LOBYTE(v3) = 1;
      KiClockOwnerOneShotCorrectiveRequest = v7;
      v10 = 1;
      ClockIntervalOneShot = v4;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    LOBYTE(v3) = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && (ClockIntervalOneShot == KiLastRequestedTimeIncrement || ClockIntervalOneShot == KeTimeIncrement) )
  {
    v11 = KeTimeIncrement;
  }
  else
  {
    v11 = KiSetClockTickRate(ClockIntervalOneShot, v3);
  }
  if ( v10 )
    PoTraceSystemTimerResolutionKernel(v11, 1129271880, 1);
  if ( (v13 & 0x200) != 0 )
    _enable();
  return v11;
}
