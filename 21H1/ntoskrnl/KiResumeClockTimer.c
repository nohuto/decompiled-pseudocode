/*
 * XREFs of KiResumeClockTimer @ 0x140380898
 * Callers:
 *     KeResumeClockTimer @ 0x140380880 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x14050E254 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiRestoreClockTickRate @ 0x140241808 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14024187C (KiEventClockStateChange.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

LONGLONG KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  LONGLONG result; // rax
  __int64 v3; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  v5 = 0LL;
  result = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == (_DWORD)KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_140C00880[0]();
  LOBYTE(v3) = v0;
  result = ((__int64 (__fastcall *)(__int64))off_140C00878[0])(v3);
  if ( v0 )
  {
    ++dword_140C31564;
    KeGetCurrentPrcb()->ClockOwner = 1;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v5);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v6, &v5);
    result = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  return result;
}
