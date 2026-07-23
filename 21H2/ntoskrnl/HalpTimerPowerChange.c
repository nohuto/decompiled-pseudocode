/*
 * XREFs of HalpTimerPowerChange @ 0x1404C0514
 * Callers:
 *     HalpTimerPowerCriticalTransitionCallback @ 0x1404C05E0 (HalpTimerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpTimerClockPowerChange @ 0x1404BF750 (HalpTimerClockPowerChange.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFEE0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404C0700 (HalpTimerStallCounterPowerChange.c)
 *     HalpTimerProfilePowerChange @ 0x1404C1A88 (HalpTimerProfilePowerChange.c)
 */

__int64 __fastcall HalpTimerPowerChange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  char v2; // di
  __int64 result; // rax

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    *(_DWORD *)(BugCheckParameter3 + 184) &= ~0x80u;
  }
  else if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 0x8000) != 0 )
  {
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x20uLL, BugCheckParameter3, 0LL);
  }
  if ( BugCheckParameter3 == HalpClockTimer )
    result = HalpTimerClockPowerChange(BugCheckParameter3, a2);
  if ( BugCheckParameter3 == HalpPerformanceCounter || BugCheckParameter3 == HalpTimerSavedPerformanceCounter )
    result = (__int64)HalpTimerPerformanceCounterPowerChange(BugCheckParameter3, v2);
  if ( BugCheckParameter3 == HalpStallCounter || BugCheckParameter3 == HalpSavedStallCounter )
    result = HalpTimerStallCounterPowerChange(BugCheckParameter3);
  if ( BugCheckParameter3 == HalpProfileTimer )
  {
    LOBYTE(a2) = v2;
    result = HalpTimerProfilePowerChange(BugCheckParameter3, a2);
  }
  if ( !v2 )
    *(_DWORD *)(BugCheckParameter3 + 184) |= 0x80u;
  return result;
}
