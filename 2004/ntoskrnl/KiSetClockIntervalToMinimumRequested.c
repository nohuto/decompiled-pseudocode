/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0
 * Callers:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KiCheckForTimerExpiration @ 0x140219590 (KiCheckForTimerExpiration.c)
 *     KiSetClockInterval @ 0x14034BAAC (KiSetClockInterval.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051B4E4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     KiGetClockIntervalOneShot @ 0x1402F2EBC (KiGetClockIntervalOneShot.c)
 *     KiSetClockTickRate @ 0x1402F3B9C (KiSetClockTickRate.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2)
{
  unsigned __int64 Min; // rax
  unsigned __int64 v3; // rbp
  bool v4; // di
  unsigned int v5; // ebx
  char v6; // si
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int ClockIntervalOneShot; // eax
  __int64 result; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v3 = KiClockOwnerOneShotRequest;
  v4 = 0;
  v5 = *(_DWORD *)(Min + 28);
  v6 = 0;
  if ( KiClockOwnerOneShotRequest )
  {
    _disable();
    v4 = (v10 & 0x200) != 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ClockIntervalOneShot = KiGetClockIntervalOneShot(v3, InterruptTimePrecise.QuadPart);
    if ( ClockIntervalOneShot < v5 )
    {
      v5 = ClockIntervalOneShot;
      v6 = 1;
    }
  }
  if ( KiClockOwnerOneShotRequestState != 2 && (v5 == KiLastRequestedTimeIncrement || v5 == KeTimeIncrement) )
  {
    result = (unsigned int)KeTimeIncrement;
  }
  else
  {
    LOBYTE(a2) = v6;
    result = KiSetClockTickRate(v5, a2);
  }
  if ( v4 )
    _enable();
  return result;
}
