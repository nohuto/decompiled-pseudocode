/*
 * XREFs of HalpTimerClockArm @ 0x14030FEC0
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x1404BDCA8 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     HalpSetTimer @ 0x14022B444 (HalpSetTimer.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BDCA8 (HalpTimerSwitchToNormalClock.c)
 */

__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, unsigned __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = HalpClockTimer;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  result = HalpSetTimer(v6, 3 - (unsigned int)(a1 != 1), a2, 1, a3);
  HalpTimerClockStatePeriodic = a1 != 1;
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v6, HalpTimerLastProblem, (int)result);
  return result;
}
