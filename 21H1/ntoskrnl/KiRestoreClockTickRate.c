/*
 * XREFs of KiRestoreClockTickRate @ 0x140241808
 * Callers:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402729D0 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140380898 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetPendingTick @ 0x14024184C (KiSetPendingTick.c)
 *     KiGetClockIntervalOneShot @ 0x14030AFF8 (KiGetClockIntervalOneShot.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiRestoreClockTickRate(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 ClockIntervalOneShot; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rcx

  v2 = a2;
  if ( KiClockOwnerOneShotRequestState )
  {
    ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, a1);
    v4 = 1LL;
  }
  else
  {
    ClockIntervalOneShot = (unsigned int)KiLastRequestedTimeIncrement;
    v4 = 0LL;
  }
  v5 = off_140C00890[0];
  *v2 = ClockIntervalOneShot;
  ((void (__fastcall *)(__int64))v5)(v4);
  LOBYTE(v6) = 1;
  return KiSetPendingTick(v6);
}
